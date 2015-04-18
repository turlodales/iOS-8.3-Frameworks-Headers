//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEOPhotoInfo : PBCodable <NSCopying>
{
    int _size;
    NSString *_url;
    struct {
        unsigned int size:1;
    } _has;
}

@property(nonatomic) BOOL hasSize;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)initWithPlaceDataPhotoContent:(id)arg1;
@property(readonly, nonatomic) BOOL hasUrl;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int size; // @synthesize size=_size;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
