//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEOSearchAttributionSource : PBCodable <NSCopying>
{
    CDStruct_56d48c16 _attributionRequirements;
    NSMutableArray *_attributionApps;
    NSMutableArray *_localizedAttributions;
    NSString *_sourceIdentifier;
    unsigned int _sourceVersion;
    NSMutableArray *_supportedComponentActions;
    NSString *_webBaseActionURL;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
- (id)bestLocalizedAttribution;
@property(retain, nonatomic) NSMutableArray *supportedComponentActions; // @synthesize supportedComponentActions=_supportedComponentActions;
@property(retain, nonatomic) NSString *webBaseActionURL; // @synthesize webBaseActionURL=_webBaseActionURL;
@property(retain, nonatomic) NSMutableArray *attributionApps; // @synthesize attributionApps=_attributionApps;
@property(retain, nonatomic) NSMutableArray *localizedAttributions; // @synthesize localizedAttributions=_localizedAttributions;
@property(readonly, nonatomic) BOOL hasWebBaseActionURL;
- (void)setAttributionRequirements:(int *)arg1 count:(unsigned int)arg2;
@property(readonly, nonatomic) int *attributionRequirements;
- (id)supportedComponentActionsAtIndex:(unsigned int)arg1;
- (void)clearSupportedComponentActions;
- (unsigned int)supportedComponentActionsCount;
- (id)attributionAppsAtIndex:(unsigned int)arg1;
- (void)clearAttributionApps;
- (unsigned int)attributionAppsCount;
- (void)addAttributionRequirements:(int)arg1;
- (int)attributionRequirementsAtIndex:(unsigned int)arg1;
- (void)clearAttributionRequirements;
@property(readonly, nonatomic) unsigned int attributionRequirementsCount;
- (id)localizedAttributionAtIndex:(unsigned int)arg1;
- (void)clearLocalizedAttributions;
- (unsigned int)localizedAttributionsCount;
- (void)addSupportedComponentActions:(id)arg1;
- (void)addAttributionApps:(id)arg1;
- (void)addLocalizedAttribution:(id)arg1;
@property(nonatomic) unsigned int sourceVersion; // @synthesize sourceVersion=_sourceVersion;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

