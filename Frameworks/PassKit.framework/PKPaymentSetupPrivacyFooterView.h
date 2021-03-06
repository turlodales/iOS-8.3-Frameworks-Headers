//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class NSString, UITextView;

@interface PKPaymentSetupPrivacyFooterView : UIView <UITextViewDelegate>
{
    id <PKPaymentSetupPrivacyFooterViewDelegate> _delegate;
    UITextView *_message;
    int _context;
}

- (id)_textAttributes;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
@property(retain, nonatomic) UITextView *message; // @synthesize message=_message;
@property(nonatomic) int context; // @synthesize context=_context;
@property(nonatomic) id <PKPaymentSetupPrivacyFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 context:(int)arg2;
- (id)_linkTextAttributes;
- (id)_linkColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

