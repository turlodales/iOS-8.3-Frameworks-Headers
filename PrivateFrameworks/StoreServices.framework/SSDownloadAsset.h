//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreServices/SSEntity.h>

@class NSArray, NSString, NSURLRequest, SSURLRequestProperties;

@interface SSDownloadAsset : SSEntity
{
    int _assetType;
    SSURLRequestProperties *_localProperties;
}

+ (id)assetWithURL:(id)arg1 type:(int)arg2;
+ (long long)_setValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_existsMessage;
- (id)initWithURLRequestProperties:(id)arg1;
@property(readonly) SSURLRequestProperties *URLRequestProperties;
@property(readonly) NSString *finalizedPath;
@property(readonly) NSString *downloadPath;
@property(readonly) NSString *downloadFileName;
- (int)assetType;
- (id)initWithURLRequest:(id)arg1 type:(int)arg2;
- (long long)bytesUploadTotal;
- (long long)bytesUploaded;
- (id)_copyURLRequestProperties;
- (void)_resetLocalIVars;
- (int)_legacyAssetType;
@property(readonly) long long fileSize;
- (id)copyXPCEncoding;
@property(readonly, getter=isExternal) BOOL external;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1;
- (long long)bytesDownloaded;
@property(readonly, retain) NSURLRequest *URLRequest;
@property(readonly) NSArray *sinfs;

@end

