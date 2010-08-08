/*
 * SPSSystemEvents.h
 */

#import <AppKit/AppKit.h>
#import <ScriptingBridge/ScriptingBridge.h>


@class SPSSystemEventsItem, SPSSystemEventsApplication, SPSSystemEventsColor, SPSSystemEventsDocument, SPSSystemEventsWindow, SPSSystemEventsAttributeRun, SPSSystemEventsCharacter, SPSSystemEventsParagraph, SPSSystemEventsText, SPSSystemEventsAttachment, SPSSystemEventsWord, SPSSystemEventsAppearancePreferencesObject, SPSSystemEventsDesktop, SPSSystemEventsUser, SPSSystemEventsLoginItem, SPSSystemEventsSecurityPreferencesObject, SPSSystemEventsDockPreferencesObject, SPSSystemEventsConfiguration, SPSSystemEventsInterface, SPSSystemEventsLocation, SPSSystemEventsNetworkPreferencesObject, SPSSystemEventsService, SPSSystemEventsScreenSaver, SPSSystemEventsScreenSaverPreferencesObject, SPSSystemEventsCDAndDVDPreferencesObject, SPSSystemEventsInsertionPreference, SPSSystemEventsDiskItem, SPSSystemEventsAlias, SPSSystemEventsDisk, SPSSystemEventsDomain, SPSSystemEventsClassicDomainObject, SPSSystemEventsFile, SPSSystemEventsFilePackage, SPSSystemEventsFolder, SPSSystemEventsLocalDomainObject, SPSSystemEventsNetworkDomainObject, SPSSystemEventsSystemDomainObject, SPSSystemEventsUserDomainObject, SPSSystemEventsFolderAction, SPSSystemEventsScript, SPSSystemEventsAction, SPSSystemEventsAttribute, SPSSystemEventsUIElement, SPSSystemEventsBrowser, SPSSystemEventsBusyIndicator, SPSSystemEventsButton, SPSSystemEventsCheckbox, SPSSystemEventsColorWell, SPSSystemEventsColumn, SPSSystemEventsComboBox, SPSSystemEventsDrawer, SPSSystemEventsGroup, SPSSystemEventsGrowArea, SPSSystemEventsImage, SPSSystemEventsIncrementor, SPSSystemEventsList, SPSSystemEventsMenu, SPSSystemEventsMenuBar, SPSSystemEventsMenuBarItem, SPSSystemEventsMenuButton, SPSSystemEventsMenuItem, SPSSystemEventsOutline, SPSSystemEventsPopUpButton, SPSSystemEventsProcess, SPSSystemEventsApplicationProcess, SPSSystemEventsDeskAccessoryProcess, SPSSystemEventsProgressIndicator, SPSSystemEventsRadioButton, SPSSystemEventsRadioGroup, SPSSystemEventsRelevanceIndicator, SPSSystemEventsRow, SPSSystemEventsScrollArea, SPSSystemEventsScrollBar, SPSSystemEventsSheet, SPSSystemEventsSlider, SPSSystemEventsSplitter, SPSSystemEventsSplitterGroup, SPSSystemEventsStaticText, SPSSystemEventsTabGroup, SPSSystemEventsTable, SPSSystemEventsTextArea, SPSSystemEventsTextField, SPSSystemEventsToolBar, SPSSystemEventsValueIndicator, SPSSystemEventsPropertyListFile, SPSSystemEventsPropertyListItem, SPSSystemEventsAnnotation, SPSSystemEventsQuickTimeData, SPSSystemEventsAudioData, SPSSystemEventsMovieData, SPSSystemEventsQuickTimeFile, SPSSystemEventsAudioFile, SPSSystemEventsMovieFile, SPSSystemEventsTrack, SPSSystemEventsXMLAttribute, SPSSystemEventsXMLData, SPSSystemEventsXMLElement, SPSSystemEventsXMLFile, SPSSystemEventsExposePreferencesObject, SPSSystemEventsScreenCorner, SPSSystemEventsShortcut, SPSSystemEventsSpacesPreferencesObject, SPSSystemEventsSpacesShortcut, SPSSystemEventsPrintSettings;

enum SPSSystemEventsSavo {
	SPSSystemEventsSavoAsk = 'ask ' /* Ask the user whether or not to save the file. */,
	SPSSystemEventsSavoNo = 'no  ' /* Do not save the file. */,
	SPSSystemEventsSavoYes = 'yes ' /* Save the file. */
};
typedef enum SPSSystemEventsSavo SPSSystemEventsSavo;

enum SPSSystemEventsSclp {
	SPSSystemEventsSclpTogether = 'tgth' /* together */,
	SPSSystemEventsSclpTogetherAtTopAndBottom = 'tgtb' /* together at top and bottom */,
	SPSSystemEventsSclpTopAndBottom = 'tpbt' /* top and bottom */
};
typedef enum SPSSystemEventsSclp SPSSystemEventsSclp;

enum SPSSystemEventsSclb {
	SPSSystemEventsSclbJumpToHere = 'tohr' /* jump to here */,
	SPSSystemEventsSclbJumpToNextPage = 'nxpg' /* jump to next page */
};
typedef enum SPSSystemEventsSclb SPSSystemEventsSclb;

enum SPSSystemEventsFtss {
	SPSSystemEventsFtssAutomatic = 'autm' /* automatic */,
	SPSSystemEventsFtssLight = 'lite' /* light */,
	SPSSystemEventsFtssMedium = 'medi' /* medium */,
	SPSSystemEventsFtssStandard = 'stnd' /* standard */,
	SPSSystemEventsFtssStrong = 'strg' /* strong */
};
typedef enum SPSSystemEventsFtss SPSSystemEventsFtss;

enum SPSSystemEventsAppe {
	SPSSystemEventsAppeBlue = 'blue' /* blue */,
	SPSSystemEventsAppeGraphite = 'grft' /* graphite */
};
typedef enum SPSSystemEventsAppe SPSSystemEventsAppe;

enum SPSSystemEventsHico {
	SPSSystemEventsHicoBlue = 'blue' /* blue */,
	SPSSystemEventsHicoGold = 'gold' /* gold */,
	SPSSystemEventsHicoGraphite = 'grft' /* graphite */,
	SPSSystemEventsHicoGreen = 'gren' /* green */,
	SPSSystemEventsHicoOrange = 'orng' /* orange */,
	SPSSystemEventsHicoPurple = 'prpl' /* purple */,
	SPSSystemEventsHicoRed = 'red ' /* red */,
	SPSSystemEventsHicoSilver = 'slvr' /* silver */
};
typedef enum SPSSystemEventsHico SPSSystemEventsHico;

enum SPSSystemEventsDpls {
	SPSSystemEventsDplsBottom = 'bott' /* bottom */,
	SPSSystemEventsDplsLeft = 'left' /* left */,
	SPSSystemEventsDplsRight = 'righ' /* right */
};
typedef enum SPSSystemEventsDpls SPSSystemEventsDpls;

enum SPSSystemEventsDpef {
	SPSSystemEventsDpefGenie = 'geni' /* genie */,
	SPSSystemEventsDpefScale = 'scal' /* scale */
};
typedef enum SPSSystemEventsDpef SPSSystemEventsDpef;

enum SPSSystemEventsDhac {
	SPSSystemEventsDhacAskWhatToDo = 'dhas' /* ask what to do */,
	SPSSystemEventsDhacIgnore = 'dhig' /* ignore */,
	SPSSystemEventsDhacOpenApplication = 'dhap' /* open application */,
	SPSSystemEventsDhacRunAScript = 'dhrs' /* run a script */
};
typedef enum SPSSystemEventsDhac SPSSystemEventsDhac;

enum SPSSystemEventsEdfm {
	SPSSystemEventsEdfmApplePhotoFormat = 'dfph' /* Apple Photo format */,
	SPSSystemEventsEdfmAppleShareFormat = 'dfas' /* AppleShare format */,
	SPSSystemEventsEdfmAudioFormat = 'dfau' /* audio format */,
	SPSSystemEventsEdfmHighSierraFormat = 'dfhs' /* High Sierra format */,
	SPSSystemEventsEdfmISO9660Format = 'df96' /* ISO 9660 format */,
	SPSSystemEventsEdfmMacOSExtendedFormat = 'dfh+' /* Mac OS Extended format */,
	SPSSystemEventsEdfmMacOSFormat = 'dfhf' /* Mac OS format */,
	SPSSystemEventsEdfmMSDOSFormat = 'dfms' /* MSDOS format */,
	SPSSystemEventsEdfmNFSFormat = 'dfnf' /* NFS format */,
	SPSSystemEventsEdfmProDOSFormat = 'dfpr' /* ProDOS format */,
	SPSSystemEventsEdfmQuickTakeFormat = 'dfqt' /* QuickTake format */,
	SPSSystemEventsEdfmUDFFormat = 'dfud' /* UDF format */,
	SPSSystemEventsEdfmUFSFormat = 'dfuf' /* UFS format */,
	SPSSystemEventsEdfmUnknownFormat = 'df$$' /* unknown format */,
	SPSSystemEventsEdfmWebDAVFormat = 'dfwd' /* WebDAV format */
};
typedef enum SPSSystemEventsEdfm SPSSystemEventsEdfm;

enum SPSSystemEventsEMds {
	SPSSystemEventsEMdsCommandDown = 'Kcmd' /* command down */,
	SPSSystemEventsEMdsControlDown = 'Kctl' /* control down */,
	SPSSystemEventsEMdsOptionDown = 'Kopt' /* option down */,
	SPSSystemEventsEMdsShiftDown = 'Ksft' /* shift down */
};
typedef enum SPSSystemEventsEMds SPSSystemEventsEMds;

enum SPSSystemEventsEMky {
	SPSSystemEventsEMkyCommand = 'eCmd' /* command */,
	SPSSystemEventsEMkyControl = 'eCnt' /* control */,
	SPSSystemEventsEMkyOption = 'eOpt' /* option */,
	SPSSystemEventsEMkyShift = 'eSft' /* shift */
};
typedef enum SPSSystemEventsEMky SPSSystemEventsEMky;

enum SPSSystemEventsPrmd {
	SPSSystemEventsPrmdNormal = 'norm' /* normal */,
	SPSSystemEventsPrmdSlideShow = 'pmss' /* slide show */
};
typedef enum SPSSystemEventsPrmd SPSSystemEventsPrmd;

enum SPSSystemEventsMvsz {
	SPSSystemEventsMvszCurrent = 'cust' /* current */,
	SPSSystemEventsMvszDouble = 'doub' /* double */,
	SPSSystemEventsMvszHalf = 'half' /* half */,
	SPSSystemEventsMvszNormal = 'norm' /* normal */,
	SPSSystemEventsMvszScreen = 'fits' /* screen */
};
typedef enum SPSSystemEventsMvsz SPSSystemEventsMvsz;

enum SPSSystemEventsEpac {
	SPSSystemEventsEpacAllWindows = 'allw' /* all windows */,
	SPSSystemEventsEpacApplicationWindows = 'appw' /* application windows */,
	SPSSystemEventsEpacDashboard = 'dash' /* dashboard */,
	SPSSystemEventsEpacDisableScreenSaver = 'disc' /* disable screen saver */,
	SPSSystemEventsEpacNone = 'none' /* none */,
	SPSSystemEventsEpacShowDesktop = 'desk' /* show desktop */,
	SPSSystemEventsEpacShowSpaces = 'spcs' /* show spaces */,
	SPSSystemEventsEpacSleepDisplay = 'diss' /* sleep display */,
	SPSSystemEventsEpacStartScreenSaver = 'star' /* start screen saver */
};
typedef enum SPSSystemEventsEpac SPSSystemEventsEpac;

enum SPSSystemEventsEpmd {
	SPSSystemEventsEpmdCommand = 'cmdm' /* command */,
	SPSSystemEventsEpmdControl = 'ctlm' /* control */,
	SPSSystemEventsEpmdNone = 'none' /* none */,
	SPSSystemEventsEpmdOption = 'optm' /* option */,
	SPSSystemEventsEpmdShift = 'shtm' /* shift */
};
typedef enum SPSSystemEventsEpmd SPSSystemEventsEpmd;

enum SPSSystemEventsEpfk {
	SPSSystemEventsEpfkF1 = 'F1ky' /* F1 */,
	SPSSystemEventsEpfkF10 = 'F10k' /* F10 */,
	SPSSystemEventsEpfkF11 = 'F11k' /* F11 */,
	SPSSystemEventsEpfkF12 = 'F12k' /* F12 */,
	SPSSystemEventsEpfkF13 = 'F13k' /* F13 */,
	SPSSystemEventsEpfkF14 = 'F14k' /* F14 */,
	SPSSystemEventsEpfkF15 = 'F15k' /* F15 */,
	SPSSystemEventsEpfkF16 = 'F16k' /* F16 */,
	SPSSystemEventsEpfkF17 = 'F17k' /* F17 */,
	SPSSystemEventsEpfkF18 = 'F18k' /* F18 */,
	SPSSystemEventsEpfkF19 = 'F19k' /* F19 */,
	SPSSystemEventsEpfkF2 = 'F2ky' /* F2 */,
	SPSSystemEventsEpfkF3 = 'F3ky' /* F3 */,
	SPSSystemEventsEpfkF4 = 'F4ky' /* F4 */,
	SPSSystemEventsEpfkF5 = 'F5ky' /* F5 */,
	SPSSystemEventsEpfkF6 = 'F6ky' /* F6 */,
	SPSSystemEventsEpfkF7 = 'F7ky' /* F7 */,
	SPSSystemEventsEpfkF8 = 'F8ky' /* F8 */,
	SPSSystemEventsEpfkF9 = 'F9ky' /* F9 */,
	SPSSystemEventsEpfkLeftCommand = 'Lcmd' /* left command */,
	SPSSystemEventsEpfkLeftControl = 'Lctl' /* left control */,
	SPSSystemEventsEpfkLeftOption = 'Lopt' /* left option */,
	SPSSystemEventsEpfkLeftShift = 'Lsht' /* left shift */,
	SPSSystemEventsEpfkNone = 'none' /* none */,
	SPSSystemEventsEpfkRightCommand = 'Rcmd' /* right command */,
	SPSSystemEventsEpfkRightControl = 'Rctl' /* right control */,
	SPSSystemEventsEpfkRightOption = 'Ropt' /* right option */,
	SPSSystemEventsEpfkRightShift = 'Rsht' /* right shift */,
	SPSSystemEventsEpfkSecondaryFunctionKey = 'SFky' /* secondary function key */
};
typedef enum SPSSystemEventsEpfk SPSSystemEventsEpfk;

enum SPSSystemEventsEnum {
	SPSSystemEventsEnumStandard = 'lwst' /* Standard PostScript error handling */,
	SPSSystemEventsEnumDetailed = 'lwdt' /* print a detailed report of PostScript errors */
};
typedef enum SPSSystemEventsEnum SPSSystemEventsEnum;



/*
 * Standard Suite
 */

// A scriptable object.
@interface SPSSystemEventsItem : SBObject

@property (copy) NSDictionary *properties;  // All of the object's properties.

- (void) closeSaving:(SPSSystemEventsSavo)saving savingIn:(SPSSystemEventsAlias *)savingIn;  // Close an object.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy object(s) and put the copies at a new location.
- (BOOL) exists;  // Verify if an object exists.
- (void) moveTo:(SBObject *)to;  // Move object(s) to a new location.
- (void) saveAs:(NSString *)as in:(SPSSystemEventsAlias *)in_;  // Save an object.
- (void) start;  // start the screen saver
- (void) stop;  // stop the screen saver

@end

// An application's top level scripting object.
@interface SPSSystemEventsApplication : SBApplication
+ (SPSSystemEventsApplication *) application;

- (SBElementArray *) documents;
- (SBElementArray *) windows;

@property (readonly) BOOL frontmost;  // Is this the frontmost (active) application?
@property (copy, readonly) NSString *name;  // The name of the application.
@property (copy, readonly) NSString *version;  // The version of the application.

- (void) quitSaving:(SPSSystemEventsSavo)saving;  // Quit an application.
- (SPSSystemEventsConfiguration *) connect:(id)x;  // connect a configuration or service
- (SPSSystemEventsConfiguration *) disconnect:(id)x;  // disconnect a configuration or service
- (void) logOut;  // Log out the current user
- (void) restart;  // Restart the computer
- (void) shutDown;  // Shut Down the computer
- (void) sleep;  // Put the computer to sleep
- (SPSSystemEventsUIElement *) clickAt:(NSArray *)at;  // cause the target process to behave as if the UI element were clicked
- (void) keyCode:(NSInteger)x using:(SPSSystemEventsEMds)using_;  // cause the target process to behave as if key codes were entered
- (void) keystroke:(NSString *)x using:(SPSSystemEventsEMds)using_;  // cause the target process to behave as if keystrokes were entered
- (void) abortTransaction;  // Discard the results of a bounded update session with one or more files.
- (NSInteger) beginTransaction;  // Begin a bounded update session with one or more files.
- (void) endTransaction;  // Apply the results of a bounded update session with one or more files.

@end

// A color.
@interface SPSSystemEventsColor : SPSSystemEventsItem


@end

// A document.
@interface SPSSystemEventsDocument : SPSSystemEventsItem

@property (readonly) BOOL modified;  // Has the document been modified since the last save?
@property (copy) NSString *name;  // The document's name.
@property (copy) NSString *path;  // The document's path.


@end

// A window.
@interface SPSSystemEventsWindow : SPSSystemEventsItem

@property NSRect bounds;  // The bounding rectangle of the window.
@property (readonly) BOOL closeable;  // Whether the window has a close box.
@property (copy, readonly) SPSSystemEventsDocument *document;  // The document whose contents are being displayed in the window.
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
@interface SPSSystemEventsAttributeRun : SPSSystemEventsItem

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
@interface SPSSystemEventsCharacter : SPSSystemEventsItem

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
@interface SPSSystemEventsParagraph : SPSSystemEventsItem

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
@interface SPSSystemEventsText : SPSSystemEventsItem

- (SBElementArray *) attachments;
- (SBElementArray *) attributeRuns;
- (SBElementArray *) characters;
- (SBElementArray *) paragraphs;
- (SBElementArray *) words;

@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.

- (void) keystrokeUsing:(SPSSystemEventsEMds)using_;  // cause the target process to behave as if keystrokes were entered

@end

// Represents an inline text attachment.  This class is used mainly for make commands.
@interface SPSSystemEventsAttachment : SPSSystemEventsText

@property (copy) NSString *fileName;  // The path to the file for the attachment


@end

// This subdivides the text into words.
@interface SPSSystemEventsWord : SPSSystemEventsItem

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
 * Appearance Suite
 */

// A collection of appearance preferences
@interface SPSSystemEventsAppearancePreferencesObject : SPSSystemEventsItem

@property SPSSystemEventsAppe appearance;  // the overall look of buttons, menus and windows
@property BOOL doubleClickMinimizes;  // Does double clicking the title bar minimize a window?
@property BOOL fontSmoothing;  // Is font smoothing on?
@property NSInteger fontSmoothingLimit;  // the font size at or below which font smoothing is turned off
@property SPSSystemEventsFtss fontSmoothingStyle;  // the method used for smoothing fonts
@property (copy) NSColor *highlightColor;  // color used for hightlighting selected text and lists
@property NSInteger recentApplicationsLimit;  // the number of recent applications to track
@property NSInteger recentDocumentsLimit;  // the number of recent documents to track
@property NSInteger recentServersLimit;  // the number of recent servers to track
@property SPSSystemEventsSclp scrollArrowPlacement;  // the placement of the scroll arrows
@property SPSSystemEventsSclb scrollBarAction;  // the action performed by clicking the scroll bar
@property BOOL smoothScrolling;  // Is smooth scrolling used?


@end



/*
 * Desktop Suite
 */

// desktop picture settings
@interface SPSSystemEventsDesktop : SPSSystemEventsItem

@property double changeInterval;  // number of seconds to wait between changing the desktop picture
@property (copy, readonly) NSString *displayName;  // name of display on which this desktop appears
@property (copy) SPSSystemEventsAlias *picture;  // path to file used as desktop picture
@property NSInteger pictureRotation;  // never, using interval, using login, after sleep
@property (copy) SPSSystemEventsAlias *picturesFolder;  // path to folder containing pictures for changing desktop background
@property BOOL randomOrder;  // turn on for random ordering of changing desktop pictures
@property BOOL translucentMenuBar;  // indicates whether the menu bar is translucent


@end



/*
 * Accounts Suite
 */

// user account
@interface SPSSystemEventsUser : SPSSystemEventsItem

@property (copy, readonly) NSString *fullName;  // user's full name
@property (copy, readonly) SPSSystemEventsAlias *homeDirectory;  // path to user's home directory
@property (copy, readonly) NSString *name;  // user's short name
@property (copy) SPSSystemEventsAlias *picturePath;  // path to user's picture. Can be set for current user only!


@end



/*
 * Login Items Suite
 */

// an item to be launched or opened at login
@interface SPSSystemEventsLoginItem : SPSSystemEventsItem

@property BOOL hidden;  // Is the Login Item hidden when launched?
@property (copy, readonly) NSString *kind;  // the file type of the Login Item
@property (copy, readonly) NSString *name;  // the name of the Login Item
@property (copy, readonly) NSString *path;  // the file system path to the Login Item


@end



/*
 * Security Suite
 */

// a collection of security preferences
@interface SPSSystemEventsSecurityPreferencesObject : SPSSystemEventsItem

@property BOOL automaticLogin;  // Is automatic login allowed?
@property BOOL logOutWhenInactive;  // Will the computer log out when inactive?
@property NSInteger logOutWhenInactiveInterval;  // The interval of inactivity after which the computer will log out
@property BOOL requirePasswordToUnlock;  // Is a password required to unlock secure preferences?
@property BOOL requirePasswordToWake;  // Is a password required to wake the computer from sleep or screen saver?
@property BOOL secureVirtualMemory;  // Is secure virtual memory being used?


@end



/*
 * Dock Preferences Suite
 */

// user's dock preferences
@interface SPSSystemEventsDockPreferencesObject : SPSSystemEventsItem

@property BOOL animate;  // is the animation of opening applications on or off?
@property BOOL autohide;  // is autohiding the dock on or off?
@property double dockSize;  // size/height of the items (between 0.0 (minimum) and 1.0 (maximum))
@property BOOL magnification;  // is magnification on or off?
@property double magnificationSize;  // maximum magnification size when magnification is on (between 0.0 (minimum) and 1.0 (maximum))
@property SPSSystemEventsDpef minimizeEffect;  // minimization effect
@property SPSSystemEventsDpls screenEdge;  // location on screen


@end



/*
 * Network Preferences Suite
 */

// A collection of settings for configuring a connection
@interface SPSSystemEventsConfiguration : SPSSystemEventsItem

@property (copy) NSString *accountName;  // the name used to authenticate
@property (readonly) BOOL connected;  // Is the configuration connected?
- (NSString *) id;  // the unique identifier for the configuration
@property (copy) NSString *name;  // the name of the configuration


@end

// A collection of settings for a network interface
@interface SPSSystemEventsInterface : SPSSystemEventsItem

@property BOOL automatic;  // configure the interface speed, duplex, and mtu automatically?
@property (copy) NSString *duplex;  // the duplex setting  half | full | full with flow control
- (NSString *) id;  // the unique identifier for the interface
@property (copy, readonly) NSString *kind;  // the type of interface
@property (copy, readonly) NSString *MACAddress;  // the MAC address for the interface
@property NSInteger mtu;  // the packet size
@property (copy, readonly) NSString *name;  // the name of the interface
@property NSInteger speed;  // ethernet speed 10 | 100 | 1000


@end

// A set of services
@interface SPSSystemEventsLocation : SPSSystemEventsItem

- (SBElementArray *) services;

- (NSString *) id;  // the unique identifier for the location
@property (copy) NSString *name;  // the name of the location


@end

// the preferences for the current user's network
@interface SPSSystemEventsNetworkPreferencesObject : SPSSystemEventsItem

- (SBElementArray *) interfaces;
- (SBElementArray *) locations;
- (SBElementArray *) services;

@property (copy) SPSSystemEventsLocation *currentLocation;  // the current location


@end

// A collection of settings for a network service
@interface SPSSystemEventsService : SPSSystemEventsItem

- (SBElementArray *) configurations;

@property (readonly) BOOL active;  // Is the service active?
@property (copy) SPSSystemEventsConfiguration *currentConfiguration;  // the currently selected configuration
- (NSString *) id;  // the unique identifier for the service
@property (copy, readonly) SPSSystemEventsInterface *interface;  // the interface the service is built on
@property (readonly) NSInteger kind;  // the type of service
@property (copy) NSString *name;  // the name of the service


@end



/*
 * Screen Saver Suite
 */

// an installed screen saver
@interface SPSSystemEventsScreenSaver : SPSSystemEventsItem

@property (copy, readonly) NSString *displayedName;  // name of the screen saver module as displayed to the user
@property (copy, readonly) NSString *name;  // name of the screen saver module to be displayed
@property (copy, readonly) SPSSystemEventsAlias *path;  // path to the screen saver module
@property (copy) NSString *pictureDisplayStyle;  // effect to use when displaying picture-based screen savers (slideshow, collage, or mosaic)


@end

// screen saver settings
@interface SPSSystemEventsScreenSaverPreferencesObject : SPSSystemEventsItem

@property NSInteger delayInterval;  // number of seconds of idle time before the screen saver starts; zero for never
@property BOOL mainScreenOnly;  // should the screen saver be shown only on the main screen?
@property (readonly) BOOL running;  // is the screen saver running?
@property BOOL showClock;  // should a clock appear over the screen saver?


@end



/*
 * CD and DVD Preferences Suite
 */

// user's CD and DVD insertion preferences
@interface SPSSystemEventsCDAndDVDPreferencesObject : SPSSystemEventsItem

@property (copy, readonly) SPSSystemEventsInsertionPreference *blankCD;  // the blank CD insertion preference
@property (copy, readonly) SPSSystemEventsInsertionPreference *blankDVD;  // the blank DVD insertion preference
@property (copy, readonly) SPSSystemEventsInsertionPreference *musicCD;  // the music CD insertion preference
@property (copy, readonly) SPSSystemEventsInsertionPreference *pictureCD;  // the picture CD insertion preference
@property (copy, readonly) SPSSystemEventsInsertionPreference *videoDVD;  // the video DVD insertion preference


@end

// a specific insertion preference
@interface SPSSystemEventsInsertionPreference : SPSSystemEventsItem

@property (copy) SPSSystemEventsAlias *customApplication;  // application to launch or activate on the insertion of media
@property (copy) SPSSystemEventsAlias *customScript;  // AppleScript to launch or activate on the insertion of media
@property SPSSystemEventsDhac insertionAction;  // action to perform on media insertion


@end



/*
 * Disk-Folder-File Suite
 */

// An item stored in the file system
@interface SPSSystemEventsDiskItem : SPSSystemEventsItem

@property (readonly) BOOL busyStatus;  // Is the disk item busy?
@property (copy, readonly) SPSSystemEventsDiskItem *container;  // the folder or disk which has this disk item as an element
@property (copy, readonly) NSDate *creationDate;  // the date on which the disk item was created
@property (copy, readonly) NSString *displayedName;  // the name of the disk item as displayed in the User Interface
- (NSString *) id;  // the unique ID of the disk item
@property (copy) NSDate *modificationDate;  // the date on which the disk item was last modified
@property (copy) NSString *name;  // the name of the disk item
@property (copy, readonly) NSString *nameExtension;  // the extension portion of the name
@property (readonly) BOOL packageFolder;  // Is the disk item a package?
@property (copy, readonly) NSString *path;  // the file system path of the disk item
@property (readonly) long long physicalSize;  // the actual space used by the disk item on disk
@property (copy, readonly) NSString *POSIXPath;  // the POSIX file system path of the disk item
@property (readonly) long long size;  // the logical size of the disk item
@property (copy, readonly) NSString *URL;  // the URL of the disk item
@property BOOL visible;  // Is the disk item visible?
@property (copy, readonly) NSString *volume;  // the volume on which the disk item resides

- (void) delete;  // Delete disk item(s).
- (SPSSystemEventsDiskItem *) moveTo:(SBObject *)to;  // Move disk item(s) to a new location.

@end

// An alias in the file system
@interface SPSSystemEventsAlias : SPSSystemEventsDiskItem

- (SBElementArray *) aliases;
- (SBElementArray *) diskItems;
- (SBElementArray *) files;
- (SBElementArray *) filePackages;
- (SBElementArray *) folders;
- (SBElementArray *) items;

@property (copy) NSString *creatorType;  // the OSType identifying the application that created the alias
@property (copy) NSString *fileType;  // the OSType identifying the type of data contained in the alias
@property (copy, readonly) NSString *kind;  // The kind of alias, as shown in Finder
@property (copy, readonly) NSString *productVersion;  // the version of the product (visible at the top of the "Get Info" window)
@property (copy, readonly) NSString *shortVersion;  // the short version of the application bundle referenced by the alias
@property BOOL stationery;  // Is the alias a stationery pad?
@property (copy, readonly) NSString *typeIdentifier;  // The type identifier of the alias
@property (copy, readonly) NSString *version;  // the version of the application bundle referenced by the alias (visible at the bottom of the "Get Info" window)

- (SPSSystemEventsDocument *) open;  // Open an object.
- (void) printPrintDialog:(BOOL)printDialog withProperties:(SPSSystemEventsPrintSettings *)withProperties;  // Print an object.

@end

// A disk in the file system
@interface SPSSystemEventsDisk : SPSSystemEventsDiskItem

- (SBElementArray *) aliases;
- (SBElementArray *) diskItems;
- (SBElementArray *) files;
- (SBElementArray *) filePackages;
- (SBElementArray *) folders;
- (SBElementArray *) items;

@property (readonly) long long capacity;  // the total number of bytes (free or used) on the disk
@property (readonly) BOOL ejectable;  // Can the media be ejected (floppies, CD's, and so on)?
@property (readonly) SPSSystemEventsEdfm format;  // the file system format of this disk
@property (readonly) long long freeSpace;  // the number of free bytes left on the disk
@property BOOL ignorePrivileges;  // Ignore permissions on this disk?
@property (readonly) BOOL localVolume;  // Is the media a local volume (as opposed to a file server)?
@property (copy, readonly) NSString *server;  // the server on which the disk resides, AFP volumes only
@property (readonly) BOOL startup;  // Is this disk the boot disk?
@property (copy, readonly) NSString *zone;  // the zone in which the disk's server resides, AFP volumes only


@end

// A domain in the file system
@interface SPSSystemEventsDomain : SPSSystemEventsItem

- (SBElementArray *) folders;

@property (copy, readonly) SPSSystemEventsFolder *applicationSupportFolder;  // The Application Support folder
@property (copy, readonly) SPSSystemEventsFolder *applicationsFolder;  // The Applications folder
@property (copy, readonly) SPSSystemEventsFolder *desktopPicturesFolder;  // The Desktop Pictures folder
@property (copy, readonly) SPSSystemEventsFolder *FolderActionScriptsFolder;  // The Folder Action Scripts folder
@property (copy, readonly) SPSSystemEventsFolder *fontsFolder;  // The Fonts folder
- (NSString *) id;  // the unique identifier of the domain
@property (copy, readonly) SPSSystemEventsFolder *libraryFolder;  // The Library folder
@property (copy, readonly) NSString *name;  // the name of the domain
@property (copy, readonly) SPSSystemEventsFolder *preferencesFolder;  // The Preferences folder
@property (copy, readonly) SPSSystemEventsFolder *scriptingAdditionsFolder;  // The Scripting Additions folder
@property (copy, readonly) SPSSystemEventsFolder *scriptsFolder;  // The Scripts folder
@property (copy, readonly) SPSSystemEventsFolder *sharedDocumentsFolder;  // The Shared Documents folder
@property (copy, readonly) SPSSystemEventsFolder *speakableItemsFolder;  // The Speakable Items folder
@property (copy, readonly) SPSSystemEventsFolder *utilitiesFolder;  // The Utilities folder
@property (copy, readonly) SPSSystemEventsFolder *workflowsFolder;  // The Automator Workflows folder


@end

// The Classic domain in the file system
@interface SPSSystemEventsClassicDomainObject : SPSSystemEventsDomain

- (SBElementArray *) folders;

@property (copy, readonly) SPSSystemEventsFolder *appleMenuFolder;  // The Apple Menu Items folder
@property (copy, readonly) SPSSystemEventsFolder *controlPanelsFolder;  // The Control Panels folder
@property (copy, readonly) SPSSystemEventsFolder *controlStripModulesFolder;  // The Control Strip Modules folder
@property (copy, readonly) SPSSystemEventsFolder *desktopFolder;  // The Classic Desktop folder
@property (copy, readonly) SPSSystemEventsFolder *extensionsFolder;  // The Extensions folder
@property (copy, readonly) SPSSystemEventsFolder *fontsFolder;  // The Fonts folder
@property (copy, readonly) SPSSystemEventsFolder *launcherItemsFolder;  // The Launcher Items folder
@property (copy, readonly) SPSSystemEventsFolder *preferencesFolder;  // The Classic Preferences folder
@property (copy, readonly) SPSSystemEventsFolder *shutdownFolder;  // The Shutdown Items folder
@property (copy, readonly) SPSSystemEventsFolder *startupItemsFolder;  // The StartupItems folder
@property (copy, readonly) SPSSystemEventsFolder *systemFolder;  // The System folder


@end

// A file in the file system
@interface SPSSystemEventsFile : SPSSystemEventsDiskItem

@property (copy) NSString *creatorType;  // the OSType identifying the application that created the file
@property (copy) SPSSystemEventsDiskItem *defaultApplication;  // the application that will launch if the file is opened
@property (copy) NSString *fileType;  // the OSType identifying the type of data contained in the file
@property (copy, readonly) NSString *kind;  // The kind of file, as shown in Finder
@property (copy, readonly) NSString *productVersion;  // the version of the product (visible at the top of the "Get Info" window)
@property (copy, readonly) NSString *shortVersion;  // the short version of the file
@property BOOL stationery;  // Is the file a stationery pad?
@property (copy, readonly) NSString *typeIdentifier;  // The type identifier of the file
@property (copy, readonly) NSString *version;  // the version of the file (visible at the bottom of the "Get Info" window)

- (SPSSystemEventsFile *) open;  // Open disk item(s) with the appropriate application.

@end

// A file package in the file system
@interface SPSSystemEventsFilePackage : SPSSystemEventsFile

- (SBElementArray *) aliases;
- (SBElementArray *) diskItems;
- (SBElementArray *) files;
- (SBElementArray *) filePackages;
- (SBElementArray *) folders;
- (SBElementArray *) items;


@end

// A folder in the file system
@interface SPSSystemEventsFolder : SPSSystemEventsDiskItem

- (SBElementArray *) aliases;
- (SBElementArray *) diskItems;
- (SBElementArray *) files;
- (SBElementArray *) filePackages;
- (SBElementArray *) folders;
- (SBElementArray *) items;


@end

// An item stored in the file system
@interface SPSSystemEventsItem (DiskFolderFileSuite)

- (NSString *) id;  // the unique ID of the item
@property (copy) NSString *name;  // the name of the item

@end

// The local domain in the file system
@interface SPSSystemEventsLocalDomainObject : SPSSystemEventsDomain

- (SBElementArray *) folders;


@end

// The network domain in the file system
@interface SPSSystemEventsNetworkDomainObject : SPSSystemEventsDomain

- (SBElementArray *) folders;


@end

// The system domain in the file system
@interface SPSSystemEventsSystemDomainObject : SPSSystemEventsDomain

- (SBElementArray *) folders;


@end

// The user domain in the file system
@interface SPSSystemEventsUserDomainObject : SPSSystemEventsDomain

- (SBElementArray *) folders;

@property (copy, readonly) SPSSystemEventsFolder *desktopFolder;  // The user's Desktop folder
@property (copy, readonly) SPSSystemEventsFolder *documentsFolder;  // The user's Documents folder
@property (copy, readonly) SPSSystemEventsFolder *downloadsFolder;  // The user's Downloads folder
@property (copy, readonly) SPSSystemEventsFolder *favoritesFolder;  // The user's Favorites folder
@property (copy, readonly) SPSSystemEventsFolder *homeFolder;  // The user's Home folder
@property (copy, readonly) SPSSystemEventsFolder *moviesFolder;  // The user's Movies folder
@property (copy, readonly) SPSSystemEventsFolder *musicFolder;  // The user's Music folder
@property (copy, readonly) SPSSystemEventsFolder *picturesFolder;  // The user's Pictures folder
@property (copy, readonly) SPSSystemEventsFolder *publicFolder;  // The user's Public folder
@property (copy, readonly) SPSSystemEventsFolder *sitesFolder;  // The user's Sites folder
@property (copy, readonly) SPSSystemEventsFolder *temporaryItemsFolder;  // The Temporary Items folder


@end



/*
 * Folder Actions Suite
 */

// An action attached to a folder in the file system
@interface SPSSystemEventsFolderAction : SPSSystemEventsItem

- (SBElementArray *) scripts;

@property BOOL enabled;  // Is the folder action enabled?
@property (copy) NSString *name;  // the name of the folder action, which is also the name of the folder
@property (copy, readonly) NSString *path;  // the path to the folder to which the folder action applies
@property (copy, readonly) NSString *volume;  // the volume on which the folder action resides


@end

// A script invoked by a folder action
@interface SPSSystemEventsScript : SPSSystemEventsItem

@property BOOL enabled;  // Is the script enabled?
@property (copy, readonly) NSString *name;  // the name of the script
@property (copy, readonly) NSString *path;  // the file system path of the disk
@property (copy, readonly) NSString *POSIXPath;  // the POSIX file system path of the disk


@end



/*
 * Processes Suite
 */

// An action that can be performed on the UI element
@interface SPSSystemEventsAction : SPSSystemEventsItem

@property (copy, readonly) NSString *objectDescription;  // what the action does
@property (copy, readonly) NSString *name;  // the name of the action

- (SPSSystemEventsAction *) perform;  // cause the target process to behave as if the action were applied to its UI element

@end

// An named data value associated with the UI element
@interface SPSSystemEventsAttribute : SPSSystemEventsItem

@property (copy, readonly) NSString *name;  // the name of the attribute
@property (readonly) BOOL settable;  // Can the attribute be set?
@property (copy) id value;  // the current value of the attribute


@end

// A piece of the user interface of a process
@interface SPSSystemEventsUIElement : SPSSystemEventsItem

- (SBElementArray *) actions;
- (SBElementArray *) attributes;
- (SBElementArray *) browsers;
- (SBElementArray *) busyIndicators;
- (SBElementArray *) buttons;
- (SBElementArray *) checkboxes;
- (SBElementArray *) colorWells;
- (SBElementArray *) columns;
- (SBElementArray *) comboBoxes;
- (SBElementArray *) drawers;
- (SBElementArray *) groups;
- (SBElementArray *) growAreas;
- (SBElementArray *) images;
- (SBElementArray *) incrementors;
- (SBElementArray *) lists;
- (SBElementArray *) menus;
- (SBElementArray *) menuBars;
- (SBElementArray *) menuBarItems;
- (SBElementArray *) menuButtons;
- (SBElementArray *) menuItems;
- (SBElementArray *) outlines;
- (SBElementArray *) popUpButtons;
- (SBElementArray *) progressIndicators;
- (SBElementArray *) radioButtons;
- (SBElementArray *) radioGroups;
- (SBElementArray *) relevanceIndicators;
- (SBElementArray *) rows;
- (SBElementArray *) scrollAreas;
- (SBElementArray *) scrollBars;
- (SBElementArray *) sheets;
- (SBElementArray *) sliders;
- (SBElementArray *) splitters;
- (SBElementArray *) splitterGroups;
- (SBElementArray *) staticTexts;
- (SBElementArray *) tabGroups;
- (SBElementArray *) tables;
- (SBElementArray *) textAreas;
- (SBElementArray *) textFields;
- (SBElementArray *) toolBars;
- (SBElementArray *) UIElements;
- (SBElementArray *) valueIndicators;
- (SBElementArray *) windows;

@property (copy, readonly) NSString *accessibilityDescription;  // a more complete description of the UI element and its capabilities
@property (copy, readonly) NSString *objectDescription;  // the accessibility description, if available; otherwise, the role description
@property (readonly) BOOL enabled;  // Is the UI element enabled? ( Does it accept clicks? )
@property (copy, readonly) NSArray *entireContents;  // a list of every UI element contained in this UI element and its child UI elements, to the limits of the tree
@property BOOL focused;  // Is the focus on this UI element?
@property (copy, readonly) NSString *help;  // an elaborate description of the UI element and its capabilities
@property (readonly) NSInteger maximumValue;  // the maximum value that the UI element can take on
@property (readonly) NSInteger minimumValue;  // the minimum value that the UI element can take on
@property (copy, readonly) NSString *name;  // the name of the UI Element, which identifies it within its container
@property (copy, readonly) NSString *orientation;  // the orientation of the UI element
@property (copy) NSArray *position;  // the position of the UI element
@property (copy, readonly) NSString *role;  // an encoded description of the UI element and its capabilities
@property (copy, readonly) NSString *roleDescription;  // a more complete description of the UI element's role
@property BOOL selected;  // Is the UI element selected?
@property (copy) NSArray *size;  // the size of the UI element
@property (copy, readonly) NSString *subrole;  // an encoded description of the UI element and its capabilities
@property (copy, readonly) NSString *title;  // the title of the UI element as it appears on the screen
@property NSInteger value;  // the current value of the UI element

- (SPSSystemEventsUIElement *) clickAt:(NSArray *)at;  // cause the target process to behave as if the UI element were clicked
- (SPSSystemEventsUIElement *) select;  // set the selected property of the UI element

@end

// A browser belonging to a window
@interface SPSSystemEventsBrowser : SPSSystemEventsUIElement


@end

// A busy indicator belonging to a window
@interface SPSSystemEventsBusyIndicator : SPSSystemEventsUIElement


@end

// A button belonging to a window or scroll bar
@interface SPSSystemEventsButton : SPSSystemEventsUIElement


@end

// A checkbox belonging to a window
@interface SPSSystemEventsCheckbox : SPSSystemEventsUIElement


@end

// A color well belonging to a window
@interface SPSSystemEventsColorWell : SPSSystemEventsUIElement


@end

// A column belonging to a table
@interface SPSSystemEventsColumn : SPSSystemEventsUIElement


@end

// A combo box belonging to a window
@interface SPSSystemEventsComboBox : SPSSystemEventsUIElement


@end

// A drawer that may be extended from a window
@interface SPSSystemEventsDrawer : SPSSystemEventsUIElement


@end

// A group belonging to a window
@interface SPSSystemEventsGroup : SPSSystemEventsUIElement

- (SBElementArray *) checkboxes;
- (SBElementArray *) staticTexts;


@end

// A grow area belonging to a window
@interface SPSSystemEventsGrowArea : SPSSystemEventsUIElement


@end

// An image belonging to a static text field
@interface SPSSystemEventsImage : SPSSystemEventsUIElement


@end

// A incrementor belonging to a window
@interface SPSSystemEventsIncrementor : SPSSystemEventsUIElement


@end

// A list belonging to a window
@interface SPSSystemEventsList : SPSSystemEventsUIElement


@end

// A menu belonging to a menu bar item
@interface SPSSystemEventsMenu : SPSSystemEventsUIElement

- (SBElementArray *) menuItems;


@end

// A menu bar belonging to a process
@interface SPSSystemEventsMenuBar : SPSSystemEventsUIElement

- (SBElementArray *) menus;
- (SBElementArray *) menuBarItems;


@end

// A menu bar item belonging to a menu bar
@interface SPSSystemEventsMenuBarItem : SPSSystemEventsUIElement

- (SBElementArray *) menus;


@end

// A menu button belonging to a window
@interface SPSSystemEventsMenuButton : SPSSystemEventsUIElement


@end

// A menu item belonging to a menu
@interface SPSSystemEventsMenuItem : SPSSystemEventsUIElement

- (SBElementArray *) menus;


@end

// A outline belonging to a window
@interface SPSSystemEventsOutline : SPSSystemEventsUIElement


@end

// A pop up button belonging to a window
@interface SPSSystemEventsPopUpButton : SPSSystemEventsUIElement


@end

// A process running on this computer
@interface SPSSystemEventsProcess : SPSSystemEventsUIElement

- (SBElementArray *) menuBars;
- (SBElementArray *) windows;

@property (readonly) BOOL acceptsHighLevelEvents;  // Is the process high-level event aware (accepts open application, open document, print document, and quit)?
@property (readonly) BOOL acceptsRemoteEvents;  // Does the process accept remote events?
@property (copy, readonly) NSString *architecture;  // the architecture in which the process is running
@property (readonly) BOOL backgroundOnly;  // Does the process run exclusively in the background?
@property (copy, readonly) NSString *bundleIdentifier;  // the bundle identifier of the process' application file
@property (readonly) BOOL Classic;  // Is the process running in the Classic environment?
@property (copy, readonly) NSString *creatorType;  // the OSType of the creator of the process (the signature)
@property (copy, readonly) NSString *displayedName;  // the name of the file from which the process was launched, as displayed in the User Interface
@property (copy, readonly) SPSSystemEventsAlias *file;  // the file from which the process was launched
@property (copy, readonly) NSString *fileType;  // the OSType of the file type of the process
@property BOOL frontmost;  // Is the process the frontmost process
@property (readonly) BOOL hasScriptingTerminology;  // Does the process have a scripting terminology, i.e., can it be scripted?
- (NSInteger) id;  // The unique identifier of the process
@property (copy, readonly) NSString *name;  // the name of the process
@property (readonly) NSInteger partitionSpaceUsed;  // the number of bytes currently used in the process' partition
@property (copy, readonly) NSString *shortName;  // the short name of the file from which the process was launched
@property (readonly) NSInteger totalPartitionSize;  // the size of the partition with which the process was launched
@property (readonly) NSInteger unixId;  // The Unix process identifier of a process running in the native environment, or -1 for a process running in the Classic environment
@property BOOL visible;  // Is the process' layer visible?


@end

// A process launched from an application file
@interface SPSSystemEventsApplicationProcess : SPSSystemEventsProcess

@property (copy, readonly) SPSSystemEventsAlias *applicationFile;  // a reference to the application file from which this process was launched


@end

// A process launched from an desk accessory file
@interface SPSSystemEventsDeskAccessoryProcess : SPSSystemEventsProcess

@property (copy, readonly) SPSSystemEventsAlias *deskAccessoryFile;  // a reference to the desk accessory file from which this process was launched


@end

// A progress indicator belonging to a window
@interface SPSSystemEventsProgressIndicator : SPSSystemEventsUIElement


@end

// A radio button belonging to a window
@interface SPSSystemEventsRadioButton : SPSSystemEventsUIElement


@end

// A radio button group belonging to a window
@interface SPSSystemEventsRadioGroup : SPSSystemEventsUIElement

- (SBElementArray *) radioButtons;


@end

// A relevance indicator belonging to a window
@interface SPSSystemEventsRelevanceIndicator : SPSSystemEventsUIElement


@end

// A row belonging to a table
@interface SPSSystemEventsRow : SPSSystemEventsUIElement


@end

// A scroll area belonging to a window
@interface SPSSystemEventsScrollArea : SPSSystemEventsUIElement


@end

// A scroll bar belonging to a window
@interface SPSSystemEventsScrollBar : SPSSystemEventsUIElement

- (SBElementArray *) buttons;
- (SBElementArray *) valueIndicators;


@end

// A sheet displayed over a window
@interface SPSSystemEventsSheet : SPSSystemEventsUIElement


@end

// A slider belonging to a window
@interface SPSSystemEventsSlider : SPSSystemEventsUIElement


@end

// A splitter belonging to a window
@interface SPSSystemEventsSplitter : SPSSystemEventsUIElement


@end

// A splitter group belonging to a window
@interface SPSSystemEventsSplitterGroup : SPSSystemEventsUIElement


@end

// A static text field belonging to a window
@interface SPSSystemEventsStaticText : SPSSystemEventsUIElement

- (SBElementArray *) images;


@end

// A tab group belonging to a window
@interface SPSSystemEventsTabGroup : SPSSystemEventsUIElement


@end

// A table belonging to a window
@interface SPSSystemEventsTable : SPSSystemEventsUIElement


@end

// A text area belonging to a window
@interface SPSSystemEventsTextArea : SPSSystemEventsUIElement


@end

// A text field belonging to a window
@interface SPSSystemEventsTextField : SPSSystemEventsUIElement


@end

// A tool bar belonging to a window
@interface SPSSystemEventsToolBar : SPSSystemEventsUIElement


@end

// A value indicator ( thumb or slider ) belonging to a scroll bar
@interface SPSSystemEventsValueIndicator : SPSSystemEventsUIElement


@end

// A window belonging to a process
@interface SPSSystemEventsWindow (ProcessesSuite)

- (SBElementArray *) browsers;
- (SBElementArray *) busyIndicators;
- (SBElementArray *) buttons;
- (SBElementArray *) checkboxes;
- (SBElementArray *) colorWells;
- (SBElementArray *) comboBoxes;
- (SBElementArray *) drawers;
- (SBElementArray *) groups;
- (SBElementArray *) growAreas;
- (SBElementArray *) images;
- (SBElementArray *) incrementors;
- (SBElementArray *) lists;
- (SBElementArray *) menuButtons;
- (SBElementArray *) outlines;
- (SBElementArray *) popUpButtons;
- (SBElementArray *) progressIndicators;
- (SBElementArray *) radioButtons;
- (SBElementArray *) radioGroups;
- (SBElementArray *) relevanceIndicators;
- (SBElementArray *) scrollAreas;
- (SBElementArray *) scrollBars;
- (SBElementArray *) sheets;
- (SBElementArray *) sliders;
- (SBElementArray *) splitters;
- (SBElementArray *) splitterGroups;
- (SBElementArray *) staticTexts;
- (SBElementArray *) tabGroups;
- (SBElementArray *) tables;
- (SBElementArray *) textAreas;
- (SBElementArray *) textFields;
- (SBElementArray *) toolBars;
- (SBElementArray *) UIElements;

@end



/*
 * Property List Suite
 */

// A file containing data in Property List format
@interface SPSSystemEventsPropertyListFile : SPSSystemEventsFile

@property (copy) SPSSystemEventsPropertyListItem *contents;  // the contents of the property list file; elements and properties of the property list item may be accessed as if they were elements and properties of the property list file


@end

// A unit of data in Property List format
@interface SPSSystemEventsPropertyListItem : SPSSystemEventsItem

- (SBElementArray *) propertyListItems;

@property (copy, readonly) NSNumber *kind;  // the kind of data stored in the property list item: boolean/data/date/list/number/record/string
@property (copy, readonly) NSString *name;  // the name of the property list item ( if any )
@property (copy) NSString *text;  // the text representation of the property list data
@property (copy) id value;  // the value of the property list item


@end



/*
 * QuickTime File Suite
 */

// A unit of user data in a QuickTime file
@interface SPSSystemEventsAnnotation : SPSSystemEventsItem

@property (copy, readonly) NSString *fullText;  // the full text of the annotation
- (NSString *) id;  // the unique identifier of the annotation
@property (copy, readonly) NSString *name;  // the name of the annotation


@end

// Data in QuickTime format
@interface SPSSystemEventsQuickTimeData : SPSSystemEventsItem

- (SBElementArray *) annotations;
- (SBElementArray *) tracks;

@property (readonly) BOOL autoPlay;  // will the movie automatically start playing? (saved with QuickTime file)
@property (readonly) BOOL autoPresent;  // will the movie automatically start presenting? (saved with QuickTime file)
@property (readonly) BOOL autoQuitWhenDone;  // will the player automatically quit when done playing? (saved with QuickTime file)
@property (copy, readonly) NSDate *creationTime;  // the creation time of the QuickTime file
@property (readonly) NSInteger dataSize;  // the size of the QuickTime file data
@property (readonly) NSInteger duration;  // the duration of the QuickTime file, in terms of the time scale
@property (copy, readonly) NSString *href;  // the internet location to open when clicking on the movie (overrides track hrefs)
@property (readonly) BOOL looping;  // keep playing the movie in a loop?
@property (copy, readonly) NSDate *modificationTime;  // the modification time of the QuickTime file
@property (readonly) NSInteger preferredRate;  // the preferred rate of the QuickTime file
@property (readonly) NSInteger preferredVolume;  // the preferred volume of the QuickTime file
@property (readonly) SPSSystemEventsPrmd presentationMode;  // mode in which the movie will be presented
@property (readonly) SPSSystemEventsMvsz presentationSize;  // size at which the movie will be presented
@property (readonly) BOOL storedStream;  // is this a stored streaming movie?
@property (readonly) NSInteger timeScale;  // the time scale of the QuickTime file


@end



/*
 * Audio File Suite
 */

// Data in Audio format
@interface SPSSystemEventsAudioData : SPSSystemEventsQuickTimeData


@end



/*
 * Movie File Suite
 */

// Data in Movie format
@interface SPSSystemEventsMovieData : SPSSystemEventsQuickTimeData

@property (copy, readonly) NSArray *bounds;  // the bounding rectangle of the movie file
@property (copy, readonly) NSArray *naturalDimensions;  // the dimensions the movie has when it is not scaled
@property (readonly) NSInteger previewDuration;  // the preview duration of the movie file
@property (readonly) NSInteger previewTime;  // the preview time of the movie file


@end



/*
 * QuickTime File Suite
 */

// A file containing data in QuickTime format
@interface SPSSystemEventsQuickTimeFile : SPSSystemEventsFile

@property (copy, readonly) SPSSystemEventsQuickTimeData *contents;  // the contents of the QuickTime file; elements and properties of the QuickTime data may be accessed as if they were elements and properties of the QuickTime file


@end



/*
 * Audio File Suite
 */

// A file containing data in Audio format
@interface SPSSystemEventsAudioFile : SPSSystemEventsQuickTimeFile

@property (copy, readonly) SPSSystemEventsAudioData *contents;  // the contents of the audio file; elements and properties of the audio data may be accessed as if they were elements and properties of the audio file


@end



/*
 * Movie File Suite
 */

// A file containing data in Movie format
@interface SPSSystemEventsMovieFile : SPSSystemEventsQuickTimeFile

@property (copy, readonly) SPSSystemEventsMovieData *contents;  // the contents of the movie file; elements and properties of the movie data may be accessed as if they were elements and properties of the movie file


@end



/*
 * QuickTime File Suite
 */

// A track in a QuickTime file
@interface SPSSystemEventsTrack : SPSSystemEventsItem

- (SBElementArray *) annotations;

@property (readonly) NSInteger audioChannelCount;  // the number of channels in the audio
@property (readonly) BOOL audioCharacteristic;  // can the track be heard?
@property (readonly) double audioSampleRate;  // the sample rate of the audio in kHz
@property (readonly) NSInteger audioSampleSize;  // the size of uncompressed audio samples in bits
@property (copy, readonly) NSDate *creationTime;  // the creation time of the track
@property (copy, readonly) NSString *dataFormat;  // the data format
@property (readonly) NSInteger dataRate;  // the data rate (bytes/sec) of the track
@property (readonly) NSInteger dataSize;  // the size of the track data
@property (copy, readonly) NSArray *dimensions;  // the current dimensions of the track
@property (readonly) NSInteger duration;  // the duration of the track, in terms of the time scale
@property BOOL enabled;  // should this track be used when the movie is playing?
@property BOOL highQuality;  // is the track high quality?
@property (copy, readonly) NSString *href;  // the internet location to open when clicking on the track
@property (copy, readonly) NSString *kind;  // the name of the media in the track, in the current language (e.g., 'Sound', 'Video', 'Text', ...)
@property (copy, readonly) NSDate *modificationTime;  // the modification time of the track
@property (copy, readonly) NSString *name;  // the name of the track
@property NSInteger startTime;  // the time delay before this track starts playing
@property (copy, readonly) NSString *type;  // the type of media in the track (e.g., 'soun', 'vide', 'text', ...)
@property (copy, readonly) NSString *typeClass;  // deprecated: use "type" instead ( included only to resolve a terminology conflict )
@property (readonly) NSInteger videoDepth;  // the color depth of the video
@property (readonly) BOOL visualCharacteristic;  // can the track be seen?


@end



/*
 * System Events Suite
 */

// The System Events application
@interface SPSSystemEventsApplication (SystemEventsSuite)

- (SBElementArray *) aliases;
- (SBElementArray *) applicationProcesses;
- (SBElementArray *) audioDatas;
- (SBElementArray *) audioFiles;
- (SBElementArray *) deskAccessoryProcesses;
- (SBElementArray *) desktops;
- (SBElementArray *) disks;
- (SBElementArray *) diskItems;
- (SBElementArray *) domains;
- (SBElementArray *) files;
- (SBElementArray *) filePackages;
- (SBElementArray *) folders;
- (SBElementArray *) folderActions;
- (SBElementArray *) items;
- (SBElementArray *) loginItems;
- (SBElementArray *) movieDatas;
- (SBElementArray *) movieFiles;
- (SBElementArray *) processes;
- (SBElementArray *) propertyListFiles;
- (SBElementArray *) propertyListItems;
- (SBElementArray *) QuickTimeDatas;
- (SBElementArray *) QuickTimeFiles;
- (SBElementArray *) screenSavers;
- (SBElementArray *) UIElements;
- (SBElementArray *) users;
- (SBElementArray *) XMLDatas;
- (SBElementArray *) XMLFiles;

@property (copy) SPSSystemEventsAppearancePreferencesObject *appearancePreferences;  // a collection of appearance preferences
@property (copy, readonly) SPSSystemEventsFolder *applicationSupportFolder;  // The Application Support folder
@property (copy, readonly) SPSSystemEventsFolder *applicationsFolder;  // The user's Applications folder
@property (copy) SPSSystemEventsCDAndDVDPreferencesObject *CDAndDVDPreferences;  // the preferences for the current user when a CD or DVD is inserted
@property (copy, readonly) SPSSystemEventsClassicDomainObject *ClassicDomain;  // the collection of folders belonging to the Classic System
@property (copy, readonly) SPSSystemEventsDesktop *currentDesktop;  // the primary desktop
@property (copy) SPSSystemEventsScreenSaver *currentScreenSaver;  // the currently selected screen saver
@property (copy, readonly) SPSSystemEventsUser *currentUser;  // the currently logged in user
@property (copy, readonly) SPSSystemEventsFolder *desktopFolder;  // The user's Desktop folder
@property (copy, readonly) SPSSystemEventsFolder *desktopPicturesFolder;  // The Desktop Pictures folder
@property (copy) SPSSystemEventsDockPreferencesObject *dockPreferences;  // the preferences for the current user's dock
@property (copy, readonly) SPSSystemEventsFolder *documentsFolder;  // The user's Documents folder
@property (copy, readonly) SPSSystemEventsFolder *downloadsFolder;  // The user's Downloads folder
@property (copy) SPSSystemEventsExposePreferencesObject *exposePreferences;  // the preferences for the current user's expose and dashboard key, mouse and corner bindings
@property (copy, readonly) SPSSystemEventsFolder *favoritesFolder;  // The user's Favorites folder
@property (copy, readonly) SPSSystemEventsFolder *FolderActionScriptsFolder;  // The user's Folder Action Scripts folder
@property BOOL folderActionsEnabled;  // Are Folder Actions currently being processed?
@property (copy, readonly) SPSSystemEventsFolder *fontsFolder;  // The Fonts folder
@property (copy, readonly) SPSSystemEventsFolder *homeFolder;  // The Home folder of the currently logged in user
@property (copy, readonly) SPSSystemEventsFolder *libraryFolder;  // The Library folder
@property (copy, readonly) SPSSystemEventsLocalDomainObject *localDomain;  // the collection of folders residing on the Local machine
@property (copy, readonly) SPSSystemEventsFolder *moviesFolder;  // The user's Movies folder
@property (copy, readonly) SPSSystemEventsFolder *musicFolder;  // The user's Music folder
@property (copy, readonly) SPSSystemEventsNetworkDomainObject *networkDomain;  // the collection of folders residing on the Network
@property (copy) SPSSystemEventsNetworkPreferencesObject *networkPreferences;  // the preferences for the current user's network
@property (copy, readonly) SPSSystemEventsFolder *picturesFolder;  // The user's Pictures folder
@property (copy, readonly) SPSSystemEventsFolder *preferencesFolder;  // The user's Preferences folder
@property (copy, readonly) SPSSystemEventsFolder *publicFolder;  // The user's Public folder
@property NSInteger quitDelay;  // the time in seconds the application will idle before quitting; if set to zero, idle time will not cause the application to quit
@property (copy) SPSSystemEventsScreenSaverPreferencesObject *screenSaverPreferences;  // the preferences common to all screen savers
@property (readonly) BOOL scriptMenuEnabled;  // Is the Script menu installed in the menu bar?
@property (copy, readonly) SPSSystemEventsFolder *scriptingAdditionsFolder;  // The Scripting Additions folder
@property (copy, readonly) SPSSystemEventsFolder *scriptsFolder;  // The user's Scripts folder
@property (copy) SPSSystemEventsSecurityPreferencesObject *securityPreferences;  // a collection of security preferences
@property (copy, readonly) SPSSystemEventsFolder *sharedDocumentsFolder;  // The Shared Documents folder
@property (copy, readonly) SPSSystemEventsFolder *sitesFolder;  // The user's Sites folder
@property (copy, readonly) SPSSystemEventsFolder *speakableItemsFolder;  // The Speakable Items folder
@property (copy, readonly) SPSSystemEventsDisk *startupDisk;  // the disk from which Mac OS X was loaded
@property (copy, readonly) SPSSystemEventsSystemDomainObject *systemDomain;  // the collection of folders belonging to the System
@property (copy, readonly) SPSSystemEventsFolder *temporaryItemsFolder;  // The Temporary Items folder
@property (copy, readonly) SPSSystemEventsFolder *trash;  // The user's Trash folder
@property BOOL UIElementsEnabled;  // Are UI element events currently being processed?
@property (copy, readonly) SPSSystemEventsUserDomainObject *userDomain;  // the collection of folders belonging to the User
@property (copy, readonly) SPSSystemEventsFolder *utilitiesFolder;  // The Utilities folder
@property (copy, readonly) SPSSystemEventsFolder *workflowsFolder;  // The Automator Workflows folder

@end



/*
 * XML Suite
 */

// A named value associated with a unit of data in XML format
@interface SPSSystemEventsXMLAttribute : SPSSystemEventsItem

@property (copy, readonly) NSString *name;  // the name of the XML attribute
@property (copy) id value;  // the value of the XML attribute


@end

// Data in XML format
@interface SPSSystemEventsXMLData : SPSSystemEventsItem

- (SBElementArray *) XMLElements;

- (NSString *) id;  // the unique identifier of the XML data
@property (copy) NSString *name;  // the name of the XML data
@property (copy) SPSSystemEventsText *text;  // the text representation of the XML data


@end

// A unit of data in XML format
@interface SPSSystemEventsXMLElement : SPSSystemEventsItem

- (SBElementArray *) XMLAttributes;
- (SBElementArray *) XMLElements;

- (NSString *) id;  // the unique identifier of the XML element
@property (copy, readonly) NSString *name;  // the name of the XML element
@property (copy) id value;  // the value of the XML element


@end

// A file containing data in XML format
@interface SPSSystemEventsXMLFile : SPSSystemEventsFile

@property (copy) SPSSystemEventsXMLData *contents;  // the contents of the XML file; elements and properties of the XML data may be accessed as if they were elements and properties of the XML file


@end



/*
 * Expose Preferences Suite
 */

// user's expose and dashboard mouse and key preferences
@interface SPSSystemEventsExposePreferencesObject : SPSSystemEventsItem

@property (copy, readonly) SPSSystemEventsShortcut *allWindowsShortcut;  // the key and mouse binding shortcuts for showing the all application windows
@property (copy, readonly) SPSSystemEventsShortcut *applicationWindowsShortcut;  // the key and mouse binding shortcuts for showing the current application windows
@property (copy, readonly) SPSSystemEventsScreenCorner *bottomLeftScreenCorner;  // the bottom left screen corner
@property (copy, readonly) SPSSystemEventsScreenCorner *bottomRightScreenCorner;  // the bottom right screen corner
@property (copy, readonly) SPSSystemEventsShortcut *dashboardShortcut;  // the key and mouse binding shortcuts for showing the dashboard
@property (copy, readonly) SPSSystemEventsShortcut *showDesktopShortcut;  // the key and mouse binding shortcuts for showing the desktop
@property (copy, readonly) SPSSystemEventsShortcut *showSpacesShortcut;  // the key and mouse binding shortcuts for showing spaces
@property (copy, readonly) SPSSystemEventsSpacesPreferencesObject *spacesPreferences;  // the spaces preferences
@property (copy, readonly) SPSSystemEventsScreenCorner *topLeftScreenCorner;  // the top left screen corner
@property (copy, readonly) SPSSystemEventsScreenCorner *topRightScreenCorner;  // the top right screen corner


@end

// a screen corner location for a specific expose or dashboard feature
@interface SPSSystemEventsScreenCorner : SPSSystemEventsItem

@property SPSSystemEventsEpac activity;  // activity for a specific screen corner
@property SPSSystemEventsEpmd modifiers;  // keyboard modifiers used for a specific screen corner, passed as string or list


@end

// a keyboard or mouse shortcut for a specific expose or dashboard feature
@interface SPSSystemEventsShortcut : SPSSystemEventsItem

@property SPSSystemEventsEpfk functionKey;  // keyboard key for a specific shortcut, not all keyboards support all possible function keys
@property SPSSystemEventsEpmd functionKeyModifiers;  // keyboard modifiers used for a specific function key, passed as string or list
@property NSInteger mouseButton;  // mouse button for a specific shortcut (between 2 and the users number of buttons, 0 or none to remove the property)
@property SPSSystemEventsEpmd mouseButtonModifiers;  // keyboard modifiers used for a specific mouse button, passed as string or list


@end

// user's spaces application bindings and navigation preferences
@interface SPSSystemEventsSpacesPreferencesObject : SPSSystemEventsItem

@property (copy) NSDictionary *applicationBindings;  // binding of applications to specific spaces
@property (copy, readonly) SPSSystemEventsSpacesShortcut *arrowKeyModifiers;  // keyboard modifiers used controlling the arrow key navigation through spaces
@property (copy, readonly) SPSSystemEventsSpacesShortcut *numbersKeyModifiers;  // keyboard modifiers used controlling the number key navigation through spaces
@property NSInteger spacesColumns;  // number of columns of spaces
@property BOOL spacesEnabled;  // is spaces enabled?
@property NSInteger spacesRows;  // number of rows of spaces


@end

// The keyboard modifiers for a specific spaces navigation shortcut
@interface SPSSystemEventsSpacesShortcut : SPSSystemEventsItem

@property SPSSystemEventsEpmd keyModifiers;  // modifiers used for a specific function key, passed as string or list


@end



/*
 * Type Definitions
 */

@interface SPSSystemEventsPrintSettings : SBObject

@property NSInteger copies;  // the number of copies of a document to be printed
@property BOOL collating;  // Should printed copies be collated?
@property NSInteger startingPage;  // the first page of the document to be printed
@property NSInteger endingPage;  // the last page of the document to be printed
@property NSInteger pagesAcross;  // number of logical pages laid across a physical page
@property NSInteger pagesDown;  // number of logical pages laid out down a physical page
@property (copy) NSDate *requestedPrintTime;  // the time at which the desktop printer should print the document
@property SPSSystemEventsEnum errorHandling;  // how errors are handled
@property (copy) NSString *faxNumber;  // for fax number
@property (copy) NSString *targetPrinter;  // for target printer

- (void) closeSaving:(SPSSystemEventsSavo)saving savingIn:(SPSSystemEventsAlias *)savingIn;  // Close an object.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy object(s) and put the copies at a new location.
- (BOOL) exists;  // Verify if an object exists.
- (void) moveTo:(SBObject *)to;  // Move object(s) to a new location.
- (void) saveAs:(NSString *)as in:(SPSSystemEventsAlias *)in_;  // Save an object.
- (void) start;  // start the screen saver
- (void) stop;  // stop the screen saver

@end

