//
//  OSICustomImageAnnotations.h
//  ImageAnnotations
//
//  Created by joris on 23/07/07.
//  Copyright 2007 OsiriX Team. All rights reserved.
//

//#import <Cocoa/Cocoa.h>
#import <PreferencePanes/PreferencePanes.h>
#import <SecurityInterface/SFAuthorizationView.h>

#import "CIALayoutController.h"
#import "CIALayoutView.h"
#import "CIAPlaceHolder.h"
#import "CIAAnnotation.h"
#import "RWTokenField.h"


@interface OSICustomImageAnnotations : NSPreferencePane {
	
	CIALayoutController *layoutController;
	IBOutlet NSWindow *window;
	
	IBOutlet NSPopUpButton *modalitiesPopUpButton;
	IBOutlet CIALayoutView *layoutView;
	IBOutlet NSTextField *titleLabelTextField, *titleTextField, *contentLabeltextField;
	IBOutlet RWTokenField *contentTokenField;
	IBOutlet NSTokenField *dicomNameTokenField;
	IBOutlet NSTextField *dicomGroupTextField, *dicomElementTextField;
	IBOutlet NSTextField *groupLabel, *elementLabel, *nameLabel;
	IBOutlet NSButton *addCustomDICOMFieldButton, *addDICOMFieldButton, *addDatabaseFieldButton, *addSpecialFieldButton;
	IBOutlet NSPopUpButton *DICOMFieldsPopUpButton, *databaseFieldsPopUpButton, *specialFieldsPopUpButton;
	IBOutlet NSBox *contentBox;
}

- (IBAction)addAnnotation:(id)sender;
- (IBAction)removeAnnotation:(id)sender;
- (IBAction)setTitle:(id)sender;
- (IBAction)addFieldToken:(id)sender;
- (IBAction)validateTokenTextField:(id)sender;
- (IBAction)saveAnnotationLayout:(id)sender;
- (IBAction)switchModality:(id)sender;

- (CIALayoutController*)layoutController;

- (NSWindow*)window;
- (NSTextField*)titleTextField;
- (RWTokenField*)contentTokenField;
- (NSTokenField*)dicomNameTokenField;
- (NSTextField*)dicomGroupTextField;
- (NSTextField*)dicomElementTextField;
- (NSTextField*)groupLabel;
- (NSTextField*)elementLabel;
- (NSTextField*)nameLabel;
- (NSButton*)addCustomDICOMFieldButton;
- (NSButton*)addDICOMFieldButton;
- (NSButton*)addDatabaseFieldButton;
- (NSButton*)addSpecialFieldButton;
- (NSPopUpButton*)DICOMFieldsPopUpButton;
- (NSPopUpButton*)databaseFieldsPopUpButton;
- (NSPopUpButton*)specialFieldsPopUpButton;
- (NSBox*)contentBox;


@end
