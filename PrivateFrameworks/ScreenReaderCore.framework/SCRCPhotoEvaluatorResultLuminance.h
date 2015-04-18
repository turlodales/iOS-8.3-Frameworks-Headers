//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCPhotoEvaluatorResult.h>

@interface SCRCPhotoEvaluatorResultLuminance : SCRCPhotoEvaluatorResult
{
    float _darknessLevel;
    float _brightnessLevel;
    float _averageLevel;
}

@property(readonly, nonatomic) float averageLevel; // @synthesize averageLevel=_averageLevel;
@property(readonly, nonatomic) float brightnessLevel; // @synthesize brightnessLevel=_brightnessLevel;
@property(readonly, nonatomic) float darknessLevel; // @synthesize darknessLevel=_darknessLevel;
- (id)initWithDarknessLevel:(float)arg1 brightnessLevel:(float)arg2 averageLevel:(float)arg3;
- (id)humanReadableResult;

@end

