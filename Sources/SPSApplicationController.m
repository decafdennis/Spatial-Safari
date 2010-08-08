//
//  SPSApplicationController.m
//  Spatial Safari
//
//  Created by Dennis Stevense on 08-08-2010.
//  Copyright 2010 Dennis Stevense.
//  
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//  
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//  
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import "SPSApplicationController.h"
#import "SPSSafari.h"
#import "SPSSystemEvents.h"


#define SAFARI_BUNDLE_IDENTIFIER @"com.apple.Safari"
#define SYSTEM_EVENTS_BUNDLE_IDENTIFIER @"com.apple.systemevents"


@interface SPSApplicationController ()

/**
 * Activates a Safari window in the current space, creating a new one if necessary.
 */
- (void)activateWindowInCurrentSpace;

/**
 * Opens the given URL using Safari.
 *
 * @param URL A URL, may not be nil.
 */
- (void)openURL:(NSURL *)URL;

/**
 * Returns the current Safari process, or nil if Safari is not running.
 */
- (SPSSystemEventsProcess *)safariProcess;

/**
 * Returns the current Safari application, starting Safari if necessary.
 */
- (SPSSafariApplication *)safariApplication;

@end


@implementation SPSApplicationController

#pragma mark NSApplicationDelegate

- (void)applicationWillFinishLaunching:(NSNotification *)aNotification {
	// Register a handler for opening URLs
	[[NSAppleEventManager sharedAppleEventManager] setEventHandler:self andSelector:@selector(handleGetURLEvent:withReplyEvent:) forEventClass:kInternetEventClass andEventID:kAEGetURL];
}

- (void)applicationWillBecomeActive:(NSNotification *)aNotification {
	[self activateWindowInCurrentSpace];
}

#pragma mark NSAppleEventManager handlers

- (void)handleGetURLEvent:(NSAppleEventDescriptor *)event withReplyEvent:(NSAppleEventDescriptor *)replyEvent {
	// Get the URL from the event descriptor
	NSString *URLString = [[event paramDescriptorForKeyword:keyDirectObject] stringValue];
	NSURL *URL = [NSURL URLWithString:URLString];

	if (URL != nil) {
		[self activateWindowInCurrentSpace];
		[self openURL:URL];
	}
}

#pragma mark SPSApplicationController

- (void)activateWindowInCurrentSpace {
	SPSSafariApplication *safariApplication = [self safariApplication];
	
	// In any case, activate Safari
	[safariApplication activate];
	
	// Make a window in the current space, if necessary
	if ([[[self safariProcess] windows] count] == 0) {
		SPSSafariDocument *document = [[[safariApplication classForScriptingClass:@"document"] alloc] init];
		[[safariApplication documents] addObject:document];
		[document release];
	}
}

- (void)openURL:(NSURL *)URL {
	[[NSWorkspace sharedWorkspace] openURLs:[NSArray arrayWithObject:URL] withAppBundleIdentifier:SAFARI_BUNDLE_IDENTIFIER options:NSWorkspaceLaunchDefault additionalEventParamDescriptor:nil launchIdentifiers:NULL];
}

- (SPSSystemEventsProcess *)safariProcess {
	SPSSystemEventsProcess *process = nil;
	
	// Walk the system processes to find the Safari process, if it exists
	SPSSystemEventsApplication *systemEventsApplication = [SBApplication applicationWithBundleIdentifier:SYSTEM_EVENTS_BUNDLE_IDENTIFIER];
	for (SPSSystemEventsProcess *candidateProcess in [systemEventsApplication processes]) {
		if ([[candidateProcess bundleIdentifier] isEqualToString:SAFARI_BUNDLE_IDENTIFIER]) {
			process = candidateProcess;
			break;
		}
	}
	
	return process;
}

- (SPSSafariApplication *)safariApplication {
	return [SBApplication applicationWithBundleIdentifier:SAFARI_BUNDLE_IDENTIFIER];
}

@end
