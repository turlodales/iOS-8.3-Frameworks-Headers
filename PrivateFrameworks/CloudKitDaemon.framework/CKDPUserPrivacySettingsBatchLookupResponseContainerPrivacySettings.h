//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPUserPrivacySettings, NSMutableArray, NSString;

@interface CKDPUserPrivacySettingsBatchLookupResponseContainerPrivacySettings : PBCodable <NSCopying>
{
    NSMutableArray *_applicationBundles;
    NSString *_applicationContainer;
    int _applicationContainerEnvironment;
    CKDPUserPrivacySettings *_userPrivacySettings;
    struct {
        unsigned int applicationContainerEnvironment:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings; // @synthesize userPrivacySettings=_userPrivacySettings;
@property(retain, nonatomic) NSMutableArray *applicationBundles; // @synthesize applicationBundles=_applicationBundles;
@property(retain, nonatomic) NSString *applicationContainer; // @synthesize applicationContainer=_applicationContainer;
@property(readonly, nonatomic) BOOL hasUserPrivacySettings;
@property(nonatomic) BOOL hasApplicationContainerEnvironment;
@property(nonatomic) int applicationContainerEnvironment; // @synthesize applicationContainerEnvironment=_applicationContainerEnvironment;
@property(readonly, nonatomic) BOOL hasApplicationContainer;
- (id)applicationBundleAtIndex:(unsigned int)arg1;
- (void)clearApplicationBundles;
- (unsigned int)applicationBundlesCount;
- (void)addApplicationBundle:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end
