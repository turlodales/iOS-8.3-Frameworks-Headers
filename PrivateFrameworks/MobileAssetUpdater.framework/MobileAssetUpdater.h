//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASAsset, ASAssetQuery, NSString;

@interface MobileAssetUpdater : NSObject
{
    ASAsset *_asset;
    ASAssetQuery *_query;
    NSString *_assetType;
    NSString *_overrideFile;
    NSString *_purgeOverrideFile;
    BOOL _assetDownloaded;
    BOOL _requireAssetMetadata;
    CDUnknownBlockType _logger;
}

@property(retain) NSString *assetType; // @synthesize assetType=_assetType;
@property(copy) CDUnknownBlockType logger; // @synthesize logger=_logger;
@property(readonly) BOOL assetDownloaded; // @synthesize assetDownloaded=_assetDownloaded;
@property(retain) NSString *purgeOverrideFile; // @synthesize purgeOverrideFile=_purgeOverrideFile;
@property(retain) NSString *overrideFile; // @synthesize overrideFile=_overrideFile;
- (id)downloadAsset:(CDUnknownBlockType)arg1;
@property(readonly) BOOL assetAvailable;
- (id)findAsset:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadComplete:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadProgress:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)filterAsset:(id)arg1 osBuild:(id)arg2 osVersion:(id)arg3;
@property BOOL requireAssetMetadata; // @synthesize requireAssetMetadata=_requireAssetMetadata;
- (id)filterFoundAssets:(id)arg1;
- (void)queryComplete:(id)arg1 remote:(BOOL)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)validateAsset;
- (id)validateAssetAttributes:(id)arg1;
- (id)assetWithMaxVersion:(id)arg1;
- (id)queryPredicate;
- (id)overrideQueryPredicateFromDict:(id)arg1;
- (void)doneWithAsset;
@property(retain) ASAsset *asset; // @synthesize asset=_asset;
- (id)initWithAssetType:(id)arg1;
@property(retain) ASAssetQuery *query; // @synthesize query=_query;
- (void)dealloc;
- (void)log:(int)arg1 format:(id)arg2;

@end

