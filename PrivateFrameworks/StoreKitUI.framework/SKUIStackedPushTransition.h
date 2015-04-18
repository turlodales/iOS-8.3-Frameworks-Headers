//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString, SKUIStackedBar;

@interface SKUIStackedPushTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    float _split;
    SKUIStackedBar *_fromBar;
    SKUIStackedBar *_toBar;
}

@property(retain, nonatomic) SKUIStackedBar *toBar; // @synthesize toBar=_toBar;
@property(retain, nonatomic) SKUIStackedBar *fromBar; // @synthesize fromBar=_fromBar;
@property(nonatomic) float split; // @synthesize split=_split;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

