//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEOCarInfo : PBCodable <NSCopying>
{
    CDStruct_af817366 _screenResolution;
    int _interactionModel;
    NSString *_manufacturer;
    NSString *_model;
    struct {
        unsigned int screenResolution:1;
        unsigned int interactionModel:1;
    } _has;
}

+ (id)carInfoWithTraits:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) CDStruct_af817366 screenResolution; // @synthesize screenResolution=_screenResolution;
@property(nonatomic) BOOL hasScreenResolution;
@property(readonly, nonatomic) BOOL hasModel;
@property(readonly, nonatomic) BOOL hasManufacturer;
@property(nonatomic) BOOL hasInteractionModel;
@property(nonatomic) int interactionModel; // @synthesize interactionModel=_interactionModel;
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
- (id)initWithTraits:(id)arg1;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

