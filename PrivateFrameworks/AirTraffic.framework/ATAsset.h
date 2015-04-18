//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class ATStoreInfo, NSDictionary, NSError, NSString, NSURL;

@interface ATAsset : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_dataclass;
    NSString *_assetType;
    NSDictionary *_variantOptions;
    NSString *_localPath;
    NSURL *_icon;
    NSString *_prettyName;
    BOOL _isDownload;
    BOOL _isRestore;
    BOOL _bypassStore;
    BOOL _installOnly;
    BOOL _readyForStore;
    long long _storePID;
    unsigned int _priority;
    float _downloadProgress;
    float _installProgress;
    ATStoreInfo *_storeInfo;
    NSString *_storePlist;
    NSString *_infoPlist;
    NSError *_error;
    BOOL _installStarted;
    BOOL _legacy;
    BOOL _installed;
    unsigned int _completedAssetParts;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _progressBlock;
    unsigned long long _totalBytes;
    unsigned long long _bytesRemaining;
}

+ (id)assetWithSerializedAsset:(id)arg1;
+ (id)iCloudRestoreAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 assetType:(id)arg3 restorePath:(id)arg4 displayName:(id)arg5;
+ (id)uploadAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 sourcePath:(id)arg3 prettyName:(id)arg4;
+ (id)downloadAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 prettyName:(id)arg3;
+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isInstalled) BOOL installed; // @synthesize installed=_installed;
@property(retain, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(nonatomic) float downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(retain, nonatomic) NSString *infoPlist; // @synthesize infoPlist=_infoPlist;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) unsigned long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *dataclass; // @synthesize dataclass=_dataclass;
@property(nonatomic) BOOL readyForStore; // @synthesize readyForStore=_readyForStore;
@property(nonatomic) BOOL bypassStore; // @synthesize bypassStore=_bypassStore;
- (id)manifestEntry;
@property(nonatomic) BOOL installOnly; // @synthesize installOnly=_installOnly;
- (id)serializedAsset;
@property(nonatomic) unsigned long long bytesRemaining; // @synthesize bytesRemaining=_bytesRemaining;
@property(retain, nonatomic) NSDictionary *variantOptions; // @synthesize variantOptions=_variantOptions;
- (id)initWithIdentifier:(id)arg1 dataclass:(id)arg2 prettyName:(id)arg3;
@property(nonatomic) BOOL installStarted; // @synthesize installStarted=_installStarted;
@property(nonatomic) long long storePID; // @synthesize storePID=_storePID;
@property(retain, nonatomic) NSString *prettyName; // @synthesize prettyName=_prettyName;
@property(nonatomic) BOOL isRestore; // @synthesize isRestore=_isRestore;
@property(nonatomic) BOOL isDownload; // @synthesize isDownload=_isDownload;
@property(retain, nonatomic) NSString *storePlist; // @synthesize storePlist=_storePlist;
@property(retain, nonatomic) ATStoreInfo *storeInfo; // @synthesize storeInfo=_storeInfo;
@property(nonatomic) unsigned int completedAssetParts; // @synthesize completedAssetParts=_completedAssetParts;
- (unsigned int)assetParts;
@property(nonatomic) float installProgress; // @synthesize installProgress=_installProgress;
- (id)_variantDescription;
@property(nonatomic, getter=isLegacy) BOOL legacy; // @synthesize legacy=_legacy;
- (void).cxx_destruct;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
- (id)shortDescription;
@property(retain, nonatomic) NSString *path; // @synthesize path=_localPath;
@property(retain, nonatomic) NSURL *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

