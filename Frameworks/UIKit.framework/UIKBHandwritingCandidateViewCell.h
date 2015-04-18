//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class TIKeyboardCandidate, UIKBThemedView, UILabel;

@interface UIKBHandwritingCandidateViewCell : UICollectionViewCell
{
    TIKeyboardCandidate *_candidate;
    CDStruct_961fb75c _visualStyling;
    UILabel *_label;
    UILabel *_secondaryLabel;
    UIKBThemedView *_themedView;
}

+ (id)secondaryLabelFont;
+ (id)labelFontForText:(id)arg1;
+ (float)widthForCandidate:(id)arg1 visualStyling:(CDStruct_961fb75c)arg2;
- (void)updateThemedView;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
- (void)updateLabels;
@property(retain, nonatomic) UIKBThemedView *themedView; // @synthesize themedView=_themedView;
@property(copy, nonatomic) TIKeyboardCandidate *candidate; // @synthesize candidate=_candidate;
@property(nonatomic) CDStruct_961fb75c visualStyling; // @synthesize visualStyling=_visualStyling;
- (void)_setRenderConfig:(id)arg1;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets;
- (void)reloadData;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

