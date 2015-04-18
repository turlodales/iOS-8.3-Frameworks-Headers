//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Preferences/PSKeychainSyncViewController.h>

#import "KeychainSyncPasscodeFieldDelegate.h"

@class NSString, PSSpecifier, PSTableCell, UIView<UIKeyInput>;

@interface KeychainSyncTextEntryController : PSKeychainSyncViewController <KeychainSyncPasscodeFieldDelegate>
{
    PSTableCell *_textEntryCell;
    UIView<UIKeyInput> *_textEntryView;
    PSSpecifier *_textEntrySpecifier;
    BOOL _hidesNextButton;
    BOOL _secureTextEntry;
    BOOL _textFieldHasRoundBorder;
    BOOL _convertsNumeralsToASCII;
    int _textEntryType;
    NSString *_textValue;
}

@property(nonatomic) BOOL secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) BOOL textFieldHasRoundBorder; // @synthesize textFieldHasRoundBorder=_textFieldHasRoundBorder;
- (id)getTextValueForSpecifier:(id)arg1;
- (void)setTextValue:(id)arg1 forSpecifier:(id)arg2;
- (id)textEntrySpecifier;
@property(retain, nonatomic) NSString *textValue; // @synthesize textValue=_textValue;
@property(nonatomic) BOOL hidesNextButton; // @synthesize hidesNextButton=_hidesNextButton;
@property(nonatomic) BOOL convertsNumeralsToASCII; // @synthesize convertsNumeralsToASCII=_convertsNumeralsToASCII;
- (void)passcodeField:(id)arg1 didUpdateEnteredPasscode:(id)arg2;
- (unsigned int)numberOfPasscodeFields;
- (void)didFinishEnteringText:(id)arg1;
- (void)textEntryViewDidChange:(id)arg1;
- (id)textEntryText;
- (void)setTextEntryText:(id)arg1;
- (void)updateNextButton;
- (id)textEntryView;
- (void)nextPressed;
- (id)textEntryCell;
- (Class)textEntryCellClass;
@property(nonatomic) int textEntryType; // @synthesize textEntryType=_textEntryType;
- (id)specifiers;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)becomeFirstResponder;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)placeholderText;
- (void)textFieldChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

