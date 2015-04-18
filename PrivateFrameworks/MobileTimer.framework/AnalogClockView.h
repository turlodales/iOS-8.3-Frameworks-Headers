//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "Clock.h"

@class NSCalendar, NSDate, NSTimeZone, UIImage, UIImageView, UIView<HandView>;

@interface AnalogClockView : UIView <Clock>
{
    int _runMode;
    UIImage *_faceDayImage;
    UIImage *_faceNightImage;
    UIImageView *_faceView;
    UIView<HandView> *_dayHands[3];
    UIView<HandView> *_nightHands[3];
    UIImageView *_middleDotDay;
    UIImageView *_middleDotNight;
    UIImageView *_middleRedDot;
    NSDate *_time;
    BOOL _nighttime;
    double _seconds;
    int _flutterIndex;
    BOOL _isRenderStateStale;
    NSCalendar *_calendar;
    BOOL _minuteHourAnimationTriggered;
}

+ (struct CGPoint)shadowRotationalCenterForHand:(int)arg1;
+ (id)overSecondHandDotColor;
+ (struct UIEdgeInsets)insetsForStyle:(int)arg1;
+ (struct CGSize)sizeForStyle:(int)arg1;
+ (BOOL)isClockRegistered:(id)arg1;
+ (id)overSecondHandDotImage;
+ (BOOL)hasOverSecondHandDot;
+ (id)overHourHandDotForDayTime:(BOOL)arg1;
+ (BOOL)hasOverHourHandDot;
+ (id)clockHand:(int)arg1 daytime:(BOOL)arg2;
+ (id)clockFaceForDaytime:(BOOL)arg1;
+ (float)overSecondHandDotSize;
+ (id)makeDotImageSize:(float)arg1 color:(id)arg2;
+ (id)nightTimeOverHourHandDotColor;
+ (id)dayTimeOverHourHandDotColor;
+ (float)overHourHandDotSize;
+ (id)imageForType:(int)arg1 dayTime:(BOOL)arg2 generation:(CDUnknownBlockType)arg3;
+ (void)adjustNumberalCenter:(struct CGPoint *)arg1 forNumeralIndex:(int)arg2;
+ (id)numeralFont;
+ (struct ShadowInfo)shadowInfoAtIndex:(unsigned int)arg1;
+ (id)nightTimeTextColor;
+ (id)nightTimeFaceColor;
+ (id)dayTimeTextColor;
+ (id)dayTimeFaceColor;
+ (id)imageCacheNameForType:(int)arg1 daytime:(BOOL)arg2;
+ (id)cacheVersionedPath;
+ (float)secondHandLength;
+ (float)minuteHandLength;
+ (float)minuteHandWidth;
+ (float)hourHandLength;
+ (float)secondHandWidth;
+ (float)hourHandWidth;
+ (struct CGSize)clockSize;
+ (Class)classForStyle:(int)arg1;
+ (void)unregisterSweepingClock:(id)arg1;
+ (void)unregisterTickingClock:(id)arg1;
+ (void)updateTimeForAllSweeping;
+ (void)updateTimeForAllTicking;
+ (void)registerSweepingClock:(id)arg1;
+ (void)registerTickingClock:(id)arg1;
+ (void)updateFlutterForAllTicking;
+ (id)cacheVersionHash;
+ (id)cacheTopLevelPath;
+ (void)unregisterClock:(id)arg1;
+ (void)registerClock:(id)arg1;
+ (id)analogClockWithStyle:(int)arg1;
+ (float)numeralInset;
+ (id)makeOverSecondHandDotImage;
+ (id)overHourHandDotImageForDaytime:(BOOL)arg1;
+ (id)makeClockHand:(int)arg1 daytime:(BOOL)arg2;
+ (id)makeClockFaceForDaytime:(BOOL)arg1;
+ (BOOL)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(BOOL)arg2;
+ (struct CGPoint)handRotationalCenterForHand:(int)arg1;
+ (BOOL)doesFaceHaveShadow;
+ (float)faceRadius;
+ (id)imageInBundleForName:(id)arg1;
+ (id)resourcePath;
+ (int)style;
+ (void)initialize;
+ (struct UIEdgeInsets)shadowInsets;
- (void)updateTime;
@property(readonly, nonatomic, getter=isNighttime) BOOL nighttime; // @synthesize nighttime=_nighttime;
@property(readonly, nonatomic) UIImageView *faceView; // @synthesize faceView=_faceView;
- (void)setNighttime:(BOOL)arg1;
- (void)setTime:(id)arg1 animated:(BOOL)arg2;
- (void)updateTimeAnimated:(BOOL)arg1;
- (void)setHandAngle:(float)arg1 forHandIndex:(int)arg2;
- (void)setHandTransformForHandIndex:(int)arg1;
@property(nonatomic) int runMode; // @synthesize runMode=_runMode;
- (void)updateTimeContinuously:(int)arg1;
- (void)updateFlutter;
- (double)coarseUpdateInterval;
@property(readonly, nonatomic, getter=isStarted) BOOL started;
@property(readonly, nonatomic) int minute;
@property(retain, nonatomic) NSTimeZone *timeZone;
- (double)updateInterval;
- (void)start;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, nonatomic) int hour;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) int style;
- (void)stop;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end

