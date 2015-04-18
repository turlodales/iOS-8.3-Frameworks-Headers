//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate.h"

@class NSObject<UIDocumentPasswordViewDelegate>, NSString, UIDocumentPasswordField, UIImageView, UILabel, UITextField;

@interface UIDocumentPasswordView : UIView <UITextFieldDelegate>
{
    UIImageView *_iconView;
    UIDocumentPasswordField *_passwordTextField;
    UILabel *_label;
    NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate;
}

@property(nonatomic) NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate; // @synthesize passwordDelegate;
- (float)_textFieldWidth;
- (float)_labelHorizontalOffset;
- (struct CGRect)_iconRectForContainerRect:(struct CGRect)arg1;
- (void)_passwordEntered:(id)arg1;
- (id)_labelTextColor;
- (id)_labelFont;
- (id)initWithDocumentName:(id)arg1;
@property(readonly, nonatomic) UITextField *passwordField; // @synthesize passwordField=_passwordTextField;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)_canDrawContent;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

