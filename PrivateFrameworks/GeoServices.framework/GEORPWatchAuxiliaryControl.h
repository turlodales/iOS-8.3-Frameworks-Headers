//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEORPWatchAuxiliaryControl : PBCodable <NSCopying>
{
    NSString *_hardwareIdentifier;
    NSString *_osBuild;
    NSString *_osVersion;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasOsBuild;
@property(readonly, nonatomic) BOOL hasOsVersion;
@property(readonly, nonatomic) BOOL hasHardwareIdentifier;
@property(retain, nonatomic) NSString *hardwareIdentifier; // @synthesize hardwareIdentifier=_hardwareIdentifier;
@property(retain, nonatomic) NSString *osBuild; // @synthesize osBuild=_osBuild;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

