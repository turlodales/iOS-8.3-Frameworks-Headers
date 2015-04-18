//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HAPMetadataConstraints, NSString;

@interface HAPCharacteristicMetadata : NSObject
{
    HAPMetadataConstraints *_constraints;
    NSString *_manufacturerDescription;
    NSString *_format;
    NSString *_units;
}

@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(copy, nonatomic) NSString *manufacturerDescription; // @synthesize manufacturerDescription=_manufacturerDescription;
- (BOOL)isEqualToCharacteristicMetadata:(id)arg1;
- (id)_generateValidConstraints:(id)arg1;
@property(retain, nonatomic) NSString *units; // @synthesize units=_units;
- (id)initWithConstraints:(id)arg1 description:(id)arg2 format:(id)arg3 units:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) HAPMetadataConstraints *constraints; // @synthesize constraints=_constraints;
- (id)description;

@end

