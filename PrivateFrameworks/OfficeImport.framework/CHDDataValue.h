//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CHDDataValue : NSObject
{
    struct CHDDataPoint mDataPoint;
}

+ (id)dataValueWithIndex:(int)arg1 value:(struct EDValue *)arg2;
+ (id)dataValue;
- (void)setContentFormatWithResources:(id)arg1 resources:(id)arg2;
- (id)contentFormatWithResources:(id)arg1;
- (void)setDataPoint:(struct CHDDataPoint *)arg1;
- (struct CHDDataPoint *)dataPoint;
- (id)initWithIndex:(int)arg1 value:(struct EDValue *)arg2;
- (void)setContentFormatId:(unsigned int)arg1;
- (unsigned int)contentFormatId;
- (void)setIndex:(int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)index;
- (void)setValue:(struct EDValue *)arg1;
- (struct EDValue *)value;
- (id)init;

@end

