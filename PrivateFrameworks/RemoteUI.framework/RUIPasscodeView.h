//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

#import "RUIPasscodeFieldDelegate.h"
#import "RUITableFooterDelegate.h"

@class RUIObjectModel, RUIPage, RUIPasscodeField, UIColor, UILabel, UIView;

@interface RUIPasscodeView : RUIElement <RUITableFooterDelegate, RUIPasscodeFieldDelegate>
{
    UIView *_view;
    UILabel *_label;
    UIView *_footer;
    RUIObjectModel *_objectModel;
    RUIPage *_page;
    RUIPasscodeField *_passcodeField;
    UIColor *_foregroundColor;
    int _keyboardAppearance;
}

- (id)passcodeView;
- (void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (void)submitPIN;
- (void)viewDidLayout;
@property(nonatomic) __weak RUIObjectModel *objectModel; // @synthesize objectModel=_objectModel;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (void)populatePostbackDictionary:(id)arg1;
@property(readonly, nonatomic) RUIPasscodeField *passcodeField; // @synthesize passcodeField=_passcodeField;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) __weak RUIPage *page; // @synthesize page=_page;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
@property(nonatomic) int keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;

@end

