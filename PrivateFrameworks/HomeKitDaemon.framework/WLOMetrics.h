//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WLOMetrics : NSObject
{
}

+ (void)LogConfigurationMetric:(id)arg1;
+ (void)LogResultMetric:(unsigned int)arg1 resultCode:(int)arg2 duration:(double)arg3 transportType:(unsigned int)arg4 isClient:(BOOL)arg5 serviceTypes:(id)arg6 characteristicTypes:(id)arg7;
+ (void)LogEventMetric:(unsigned int)arg1;

@end
