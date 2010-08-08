/*
 * SPSSafari.h
 */

#import <AppKit/AppKit.h>
#import <ScriptingBridge/ScriptingBridge.h>


@class SPSSafariItem, SPSSafariApplication, SPSSafariColor, SPSSafariDocument, SPSSafariWindow, SPSSafariAttributeRun, SPSSafariCharacter, SPSSafariParagraph, SPSSafariText, SPSSafariAttachment, SPSSafariWord, SPSSafariTab, SPSSafariPrintSettings;

enum SPSSafariSavo {
	SPSSafariSavoAsk = 'ask ' /* Ask the user whether or not to save the file. */,
	SPSSafariSavoNo = 'no  ' /* Do not save the file. */,
	SPSSafariSavoYes = 'yes ' /* Save the file. */
};
typedef enum SPSSafariSavo SPSSafariSavo;

enum SPSSafariEnum {
	SPSSafariEnumStandard = 'lwst' /* Standard PostScript error handling */,
	SPSSafariEnumDetailed = 'lwdt' /* print a detailed report of PostScript errors */
};
typedef enum SPSSafariEnum SPSSafariEnum;



/*
 * Standard Suite
 */

// A scriptable object.
@interface SPSSafariItem : SBObject

@property (copy) NSDictionary *properties;  // All of the object's properties.

- (void) closeSaving:(SPSSafariSavo)saving savingIn:(NSURL *)savingIn;  // Close an object.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy object(s) and put the copies at a new location.
- (BOOL) exists;  // Verify if an object exists.
- (void) moveTo:(SBObject *)to;  // Move object(s) to a new location.
- (void) saveAs:(NSString *)as in:(NSURL *)in_;  // Save an object.

@end

// An application's top level scripting object.
@interface SPSSafariApplication : SBApplication
+ (SPSSafariApplication *) application;

- (SBElementArray *) documents;
- (SBElementArray *) windows;

@property (readonly) BOOL frontmost;  // Is this the frontmost (active) application?
@property (copy, readonly) NSString *name;  // The name of the application.
@property (copy, readonly) NSString *version;  // The version of the application.

- (SPSSafariDocument *) open:(NSURL *)x;  // Open an object.
- (void) print:(NSURL *)x printDialog:(BOOL)printDialog withProperties:(SPSSafariPrintSettings *)withProperties;  // Print an object.
- (void) quitSaving:(SPSSafariSavo)saving;  // Quit an application.
- (id) doJavaScript:(NSString *)x in:(SPSSafariTab *)in_;  // Applies a string of JavaScript code to a document.
- (void) emailContentsOf:(SPSSafariTab *)of;  // Emails the contents of a tab.
- (void) showBookmarks;  // Shows Safari's bookmarks.

@end

// A color.
@interface SPSSafariColor : SPSSafariItem


@end

// A document.
@interface SPSSafariDocument : SPSSafariItem

@property (readonly) BOOL modified;  // Has the document been modified since the last save?
@property (copy) NSString *name;  // The document's name.
@property (copy) NSString *path;  // The document's path.


@end

// A window.
@interface SPSSafariWindow : SPSSafariItem

@property NSRect bounds;  // The bounding rectangle of the window.
@property (readonly) BOOL closeable;  // Whether the window has a close box.
@property (copy, readonly) SPSSafariDocument *document;  // The document whose contents are being displayed in the window.
@property (readonly) BOOL floating;  // Whether the window floats.
- (NSInteger) id;  // The unique identifier of the window.
@property NSInteger index;  // The index of the window, ordered front to back.
@property (readonly) BOOL miniaturizable;  // Whether the window can be miniaturized.
@property BOOL miniaturized;  // Whether the window is currently miniaturized.
@property (readonly) BOOL modal;  // Whether the window is the application's current modal window.
@property (copy) NSString *name;  // The full title of the window.
@property (readonly) BOOL resizable;  // Whether the window can be resized.
@property (readonly) BOOL titled;  // Whether the window has a title bar.
@property BOOL visible;  // Whether the window is currently visible.
@property (readonly) BOOL zoomable;  // Whether the window can be zoomed.
@property BOOL zoomed;  // Whether the window is currently zoomed.


@end



/*
 * Text Suite
 */

// This subdivides the text into chunks that all have the same attributes.
@interface SPSSafariAttributeRun : SPSSafariItem

- (SBElementArray *) attachments;
- (SBElementArray *) attributeRuns;
- (SBElementArray *) characters;
- (SBElementArray *) paragraphs;
- (SBElementArray *) words;

@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.


@end

// This subdivides the text into characters.
@interface SPSSafariCharacter : SPSSafariItem

- (SBElementArray *) attachments;
- (SBElementArray *) attributeRuns;
- (SBElementArray *) characters;
- (SBElementArray *) paragraphs;
- (SBElementArray *) words;

@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.


@end

// This subdivides the text into paragraphs.
@interface SPSSafariParagraph : SPSSafariItem

- (SBElementArray *) attachments;
- (SBElementArray *) attributeRuns;
- (SBElementArray *) characters;
- (SBElementArray *) paragraphs;
- (SBElementArray *) words;

@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.


@end

// Rich (styled) text
@interface SPSSafariText : SPSSafariItem

- (SBElementArray *) attachments;
- (SBElementArray *) attributeRuns;
- (SBElementArray *) characters;
- (SBElementArray *) paragraphs;
- (SBElementArray *) words;

@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.

- (id) doJavaScriptIn:(SPSSafariTab *)in_;  // Applies a string of JavaScript code to a document.

@end

// Represents an inline text attachment.  This class is used mainly for make commands.
@interface SPSSafariAttachment : SPSSafariText

@property (copy) NSString *fileName;  // The path to the file for the attachment


@end

// This subdivides the text into words.
@interface SPSSafariWord : SPSSafariItem

- (SBElementArray *) attachments;
- (SBElementArray *) attributeRuns;
- (SBElementArray *) characters;
- (SBElementArray *) paragraphs;
- (SBElementArray *) words;

@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.


@end



/*
 * Safari suite
 */

// A Safari document representing the active tab in a window.
@interface SPSSafariDocument (SafariSuite)

@property (copy, readonly) NSString *source;  // The HTML source of the web page currently loaded in the document.
@property (copy, readonly) SPSSafariText *text;  // The text of the web page currently loaded in the document. Modifications to text aren't reflected on the web page.
@property (copy) NSString *URL;  // The current URL of the document.

@end

// A Safari window tab.
@interface SPSSafariTab : SPSSafariItem

@property (readonly) NSInteger index;  // The index of the tab, ordered left to right.
@property (copy, readonly) NSString *name;  // The name of the tab.
@property (copy, readonly) NSString *source;  // The HTML source of the web page currently loaded in the tab.
@property (copy, readonly) SPSSafariText *text;  // The text of the web page currently loaded in the tab. Modifications to text aren't reflected on the web page.
@property (copy) NSString *URL;  // The current URL of the tab.
@property (readonly) BOOL visible;  // Whether the tab is currently visible.


@end

// A Safari window.
@interface SPSSafariWindow (SafariSuite)

- (SBElementArray *) tabs;

@property (copy) SPSSafariTab *currentTab;  // The current tab.

@end



/*
 * Type Definitions
 */

@interface SPSSafariPrintSettings : SBObject

@property NSInteger copies;  // the number of copies of a document to be printed
@property BOOL collating;  // Should printed copies be collated?
@property NSInteger startingPage;  // the first page of the document to be printed
@property NSInteger endingPage;  // the last page of the document to be printed
@property NSInteger pagesAcross;  // number of logical pages laid across a physical page
@property NSInteger pagesDown;  // number of logical pages laid out down a physical page
@property (copy) NSDate *requestedPrintTime;  // the time at which the desktop printer should print the document
@property SPSSafariEnum errorHandling;  // how errors are handled
@property (copy) NSString *faxNumber;  // for fax number
@property (copy) NSString *targetPrinter;  // for target printer

- (void) closeSaving:(SPSSafariSavo)saving savingIn:(NSURL *)savingIn;  // Close an object.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy object(s) and put the copies at a new location.
- (BOOL) exists;  // Verify if an object exists.
- (void) moveTo:(SBObject *)to;  // Move object(s) to a new location.
- (void) saveAs:(NSString *)as in:(NSURL *)in_;  // Save an object.

@end

