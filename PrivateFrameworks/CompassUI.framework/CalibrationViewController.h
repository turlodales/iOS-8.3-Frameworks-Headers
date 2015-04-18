//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class CAShapeLayer, CalibrationBallView, CompassBackgroundView, NSMutableArray, UIButton, UILabel;

@interface CalibrationViewController : UIViewController
{
    CompassBackgroundView *_compassBackgroundView;
    CAShapeLayer *_compassBackgroundViewMask;
    UILabel *_instructionLabel;
    UILabel *_titleLabel;
    UIButton *_cancelButton;
    CalibrationBallView *_ballView;
    struct CGPoint _compassOriginPoint;
    NSMutableArray *_calibrationConstraints;
    float *_ticsShowingArray;
    double _angleToRim;
    double _angleOfAwesome;
    int _quantizationType;
    double _previousTimestamp;
    double _startTicAngle;
    BOOL _ignoreMotionUpdates;
    BOOL _shouldCompleteTics;
    double _previousHorizontalAngle;
    struct Matrix<double, 3, 1> _previousGravity;
    unsigned int _numCompleteTics;
    float _compassRadius;
}

- (double)completeCircle;
- (void)setMotion:(id)arg1;
- (BOOL)circleIsCompleted;
- (void)showTicAtAngle:(double)arg1 withCredit:(double)arg2;
- (void)setBallAngle:(double)arg1 tiltAngle:(double)arg2;
- (double)_correctedAngleForCurrentOrientation:(double)arg1;
- (void)showTicsBetweenStartAngle:(double)arg1 endAngle:(double)arg2 withCredit:(double)arg3;
- (float)quantizedPercentage:(double)arg1 forAngle:(double)arg2;
- (void)updateMaskingPath;
- (void)hideAllTics;
- (id)updatedMaskingPath;
- (id)initWithOriginPoint:(struct CGPoint)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)reset;
- (BOOL)prefersStatusBarHidden;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)addConstraints;
- (void)userDefaultsChanged:(id)arg1;

@end

