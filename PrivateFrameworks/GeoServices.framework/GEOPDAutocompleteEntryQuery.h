//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, PBUnknownFields;

@interface GEOPDAutocompleteEntryQuery : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_completion;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasCompletion;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) NSString *completion; // @synthesize completion=_completion;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

