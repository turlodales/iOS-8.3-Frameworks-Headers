//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableOrderedSet, NSString;

@interface SPSearchResultSection : PBCodable <NSCopying>
{
    NSString *_category;
    NSString *_displayIdentifier;
    unsigned int _domain;
    int _flags;
    NSString *_icon;
    NSMutableOrderedSet *_resultSet;
    NSString *_scheme;
    struct {
        unsigned int domain:1;
        unsigned int flags:1;
    } _has;
}

@property(nonatomic) BOOL hasDomain;
@property(nonatomic) BOOL hasFlags;
- (id)resultSet;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasEquivalentResults:(id)arg1;
- (void)removeResultsAtIndex:(unsigned int)arg1;
- (void)addResults:(id)arg1 atIndex:(unsigned int)arg2;
@property(readonly, nonatomic) BOOL hasScheme;
@property(readonly, nonatomic) BOOL hasDisplayIdentifier;
- (void)clearResults;
@property(retain, nonatomic) NSString *displayIdentifier; // @synthesize displayIdentifier=_displayIdentifier;
- (void)addResults:(id)arg1;
@property(nonatomic) unsigned int domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) BOOL hasCategory;
@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
- (id)resultsAtIndex:(unsigned int)arg1;
- (unsigned int)resultsCount;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (id)results;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (unsigned int)indexOfResult:(id)arg1;
@property(readonly, nonatomic) BOOL hasIcon;

@end

