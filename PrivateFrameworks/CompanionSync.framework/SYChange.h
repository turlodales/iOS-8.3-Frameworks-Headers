//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString;

@interface SYChange : PBCodable <NSCopying>
{
    unsigned long long _version;
    NSData *_data;
    NSString *_objectId;
    int _type;
}

+ (id)changeWithObject:(id)arg1 updateType:(int)arg2 store:(id)arg3;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (id)objectForStore:(id)arg1;
@property(readonly, nonatomic) BOOL hasData;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end
