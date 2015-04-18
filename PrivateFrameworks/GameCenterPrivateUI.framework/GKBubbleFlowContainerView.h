//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GKBubbleSet, NSArray, NSMutableArray;

@interface GKBubbleFlowContainerView : UIView
{
    struct CGRect _bubbleRestingRects[12];
    NSMutableArray *_bubbleSets;
    int _supportedBubbles;
}

- (void)addBubbleSet:(id)arg1;
- (void)setRestingRect:(struct CGRect)arg1 forBubbleType:(int)arg2;
@property(readonly, nonatomic) NSArray *bubbleSets; // @synthesize bubbleSets=_bubbleSets;
- (void)enumerateBubbles:(CDUnknownBlockType)arg1;
- (struct CGRect)restingRectForBubbleType:(int)arg1;
@property(readonly, nonatomic) int supportedBubbles; // @synthesize supportedBubbles=_supportedBubbles;
- (union _GLKVector3)worldPositionForBubble:(int)arg1;
@property(readonly, nonatomic) GKBubbleSet *primaryBubbleControls;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

