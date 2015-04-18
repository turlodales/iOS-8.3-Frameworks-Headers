//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

#import "NSLayoutManagerDelegate.h"

@class NSAttributedString, NSString;

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate>
{
    BOOL _singleLine;
    NSAttributedString *_attributedText;
    float _capOffsetFromBoundsTop;
    float _lastLineBaselineOffsetFromBoundsTop;
}

@property(nonatomic, getter=isSingleLine) BOOL singleLine; // @synthesize singleLine=_singleLine;
@property(nonatomic) float lastLineBaselineOffsetFromBoundsTop; // @synthesize lastLineBaselineOffsetFromBoundsTop=_lastLineBaselineOffsetFromBoundsTop;
@property(nonatomic) float capOffsetFromBoundsTop; // @synthesize capOffsetFromBoundsTop=_capOffsetFromBoundsTop;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2 isSingleLine:(char *)arg3;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void)didMoveToWindow;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

