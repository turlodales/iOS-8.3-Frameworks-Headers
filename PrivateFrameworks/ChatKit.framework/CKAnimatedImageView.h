//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "CKAnimationTimerObserver.h"

@class CKAnimatedImage, NSArray, NSString;

@interface CKAnimatedImageView : UIImageView <CKAnimationTimerObserver>
{
    CKAnimatedImage *_animatedImage;
    NSArray *_frames;
}

- (void)animationTimerFired:(unsigned int)arg1;
@property(copy, nonatomic) NSArray *frames; // @synthesize frames=_frames;
- (void)updateAnimationTimerObserving;
@property(retain, nonatomic) CKAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

