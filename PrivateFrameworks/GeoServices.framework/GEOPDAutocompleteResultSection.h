//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEOPDAutocompleteResultSection : PBCodable <NSCopying>
{
    NSMutableArray *_entries;
    NSString *_name;
    int _type;
    CDStruct_f953fb60 _has;
}

- (id)entriesAtIndex:(unsigned int)arg1;
- (void)clearEntries;
- (unsigned int)entriesCount;
- (void)addEntries:(id)arg1;
@property(retain, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
@property(readonly, nonatomic) BOOL hasName;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) BOOL hasType;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

