//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WebGeolocationPositionInternal;

@interface WebGeolocationPosition : NSObject
{
    WebGeolocationPositionInternal *_internal;
}

- (id)initWithGeolocationPosition:(PassRefPtr_1f71bc30)arg1;
- (id)initWithTimestamp:(double)arg1 latitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4;
- (void)dealloc;

@end

