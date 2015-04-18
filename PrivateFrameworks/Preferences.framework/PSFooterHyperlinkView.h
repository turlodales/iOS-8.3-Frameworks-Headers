//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PSHeaderFooterView.h"
#import "UITextViewDelegate.h"

@class NSString, NSURL, UITextView;

@interface PSFooterHyperlinkView : UIView <PSHeaderFooterView, UITextViewDelegate>
{
    UITextView *_textView;
    NSString *_text;
    NSURL *_URL;
    struct _NSRange _linkRange;
    id _target;
    SEL _action;
}

@property struct _NSRange linkRange;
- (void)_linkify;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
@property(retain) NSURL *URL;
@property SEL action; // @synthesize action=_action;
@property id target; // @synthesize target=_target;
@property(retain) NSString *text;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (float)preferredHeightForWidth:(float)arg1;
- (id)initWithSpecifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

