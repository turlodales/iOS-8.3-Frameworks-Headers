//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface CKDPZoneRetrieveResponse : PBCodable <NSCopying>
{
    NSMutableArray *_zoneSummarys;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSMutableArray *zoneSummarys; // @synthesize zoneSummarys=_zoneSummarys;
- (id)zoneSummaryAtIndex:(unsigned int)arg1;
- (void)clearZoneSummarys;
- (unsigned int)zoneSummarysCount;
- (void)addZoneSummary:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

