//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MKLocationManagerObserver.h"

@class MKLocationManager, NSString, UILabel;

@interface MKStarkCompassView : UIView <MKLocationManagerObserver>
{
    UIView *_contentsView;
    BOOL _monitoringCourse;
    UILabel *_label;
    MKLocationManager *_locationManager;
    int _compassPoint;
    double _heading;
}

@property(nonatomic) double heading; // @synthesize heading=_heading;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (id)initWithEffectiveBundleIdentifier:(id)arg1;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)dealloc;
- (void)_createSubviews;
@property(nonatomic) int compassPoint; // @synthesize compassPoint=_compassPoint;
- (id)initWithSharedMKLocationManager;
- (void)_updateDisplayedHeadingWithHeading:(double)arg1;
- (void)_updateContents;
- (void)_updateStyling;
- (void)_startLocationUpdates;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
