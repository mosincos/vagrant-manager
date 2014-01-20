//
//  RegisterWindow.h
//  Vagrant Manager
//
//  Copyright (c) 2014 Lanayo. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface RegisterWindow : NSWindowController <NSTextFieldDelegate>

@property (weak) IBOutlet NSTextField *licenseTextField;
@property (weak) IBOutlet NSButton *validateButton;
@property (weak) IBOutlet NSButton *purchaseLicenseButton;

- (IBAction)validateButtonClicked:(id)sender;
- (IBAction)purchaseLicenseButtonClicked:(id)sender;

@end