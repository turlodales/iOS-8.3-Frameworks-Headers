//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIControlCenterButton.h"

#import "MPUTransportButton.h"
#import "SBUIControlCenterButtonDelegate.h"

@class MPUTransportButtonEventHandler, NSString;

@interface MPUTransportControlCenterButton : SBUIControlCenterButton <SBUIControlCenterButtonDelegate, MPUTransportButton>
{
    MPUTransportButtonEventHandler *_transportButtonEventHandler;
}

@property(readonly, nonatomic) MPUTransportButtonEventHandler *transportButtonEventHandler;
- (void)applyTransportButtonAttributes:(id)arg1;
- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)shouldTrack;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (BOOL)isEnabled;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

