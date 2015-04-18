//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/_HKMetadataFilter.h>

@class NSSet;

@interface _HKContainsMetadataFilter : _HKMetadataFilter
{
    NSSet *_allowedValues;
}

+ (BOOL)supportsSecureCoding;
+ (id)filterWithKey:(id)arg1 operatorType:(unsigned int)arg2 values:(id)arg3;
+ (BOOL)_acceptsOperatorType:(unsigned int)arg1;
@property(readonly, nonatomic) NSSet *allowedValues; // @synthesize allowedValues=_allowedValues;
- (BOOL)acceptsDataObject:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithKey:(id)arg1 values:(id)arg2 operatorType:(unsigned int)arg3;

@end

