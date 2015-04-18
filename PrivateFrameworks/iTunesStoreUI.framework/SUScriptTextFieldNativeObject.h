//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptNativeObject.h>

#import "SUScriptTextFieldDelegate.h"

@class NSString, SUScriptTextFieldDelegate;

@interface SUScriptTextFieldNativeObject : SUScriptNativeObject <SUScriptTextFieldDelegate>
{
    SUScriptTextFieldDelegate *_textFieldDelegate;
}

- (void)_sendScriptDidChange;
- (void)_textDidEndEditingOnExit:(id)arg1;
- (void)_textDidChange:(id)arg1;
- (void)_setNativeObjectDelegate:(id)arg1;
- (id)_nativeObjectDelegate;
- (void)setupNativeObject;
- (void)destroyNativeObject;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
@property(nonatomic) float width;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
@property(copy, nonatomic) NSString *placeholder;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
@property(nonatomic) int keyboardType;
@property(nonatomic) int autocorrectionType;
@property(nonatomic) int autocapitalizationType;
@property(copy, nonatomic) NSString *value;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

