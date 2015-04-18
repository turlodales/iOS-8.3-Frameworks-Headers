//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SUClientInterface, SULinkControl, SUSubtitledButton, UIAlertView;

@interface SUTermsAndConditionsView : UIView
{
    UIAlertView *_accountButtonAlert;
    SUSubtitledButton *_button;
    SUClientInterface *_clientInterface;
    BOOL _hideAccountButton;
    float _rightMargin;
    int _style;
    SULinkControl *_termsAndConditionsControl;
    SUClientInterface *clientInterface;
}

@property(nonatomic) BOOL hideAccountButton; // @synthesize hideAccountButton=_hideAccountButton;
- (void)_termsAndConditionsAction:(id)arg1;
- (void)_clearButtonSelection:(id)arg1;
- (id)_termsAndConditionsControl;
- (float)_buttonHeightForStyle:(int)arg1;
- (int)_linkStyleForStyle:(int)arg1;
- (void)_destroyButton;
- (void)_accountsChangedNotification:(id)arg1;
- (void)_buttonAction:(id)arg1;
@property(retain, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface;
@property(nonatomic) float rightMargin; // @synthesize rightMargin=_rightMargin;
- (id)_button;
@property(nonatomic) int style; // @synthesize style=_style;
- (void)sizeToFit;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateButton;

@end

