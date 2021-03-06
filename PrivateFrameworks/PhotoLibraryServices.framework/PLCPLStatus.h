//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPLStatusDelegate.h"

@class CPLStatus, NSDate, NSProgress, NSString;

@interface PLCPLStatus : NSObject <CPLStatusDelegate>
{
    id _progressSubscriber;
    NSProgress *_progress;
    CPLStatus *_cplStatus;
    BOOL _isCPLDataClassEnabled;
    BOOL _isCPLDataClassEnabledValid;
    unsigned int _syncProgressState;
    id <PLCPLStatusDelegate> _delegate;
    unsigned int _numberOfImagesToUpload;
    unsigned int _numberOfVideosToUpload;
    unsigned int _numberOfImagesToDownload;
    unsigned int _numberOfVideosToDownload;
    unsigned int _numberOfPushedAsset;
    unsigned int _numberOfPulledAssets;
    unsigned int _totalAssetsOnServer;
    double _syncProgress;
}

+ (void)_setPulledItemsCount:(unsigned int)arg1;
+ (void)writeDict:(id)arg1 withFilename:(id)arg2;
+ (id)readPListWithFilename:(id)arg1;
+ (void)_prepareQueue;
+ (void)setPushedAssetCount:(unsigned int)arg1;
+ (void)setDownloadCountsForImages:(unsigned int)arg1 videos:(unsigned int)arg2;
+ (void)setUploadCountsForImages:(unsigned int)arg1 videos:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned int totalAssetsOnServer; // @synthesize totalAssetsOnServer=_totalAssetsOnServer;
@property(readonly, nonatomic) unsigned int numberOfPulledAssets; // @synthesize numberOfPulledAssets=_numberOfPulledAssets;
@property(readonly, nonatomic) unsigned int numberOfPushedAsset; // @synthesize numberOfPushedAsset=_numberOfPushedAsset;
@property(readonly, nonatomic) unsigned int numberOfImagesToDownload; // @synthesize numberOfImagesToDownload=_numberOfImagesToDownload;
@property(readonly, nonatomic) double syncProgress; // @synthesize syncProgress=_syncProgress;
@property(readonly, nonatomic) BOOL hasExitedCPL;
@property(readonly, nonatomic) BOOL isPreparing;
@property(readonly, nonatomic) BOOL isConnecting;
@property(readonly, nonatomic) BOOL isSyncing;
@property(readonly, nonatomic) BOOL diskIsLowOnSpace;
- (void)statusDidChange:(id)arg1;
- (void)_unsubscribeFromProgress;
- (void)_setSyncProgress:(double)arg1;
- (void)_updateSyncProgress;
- (void)_teardown;
@property(readonly, retain, nonatomic) NSDate *exitDeleteTime;
- (void)_loadPulledItemsCount;
- (void)_calculateNumberOfPulledAssets;
- (void)_calculateTotalAssetsOnServer;
- (void)_networkReachabilityChanged:(id)arg1;
- (void)accountStoreDidChange:(id)arg1;
- (void)_subscribeToProgress;
- (BOOL)_loadDownloadCounts;
- (BOOL)_loadUploadCounts;
@property(readonly, nonatomic) BOOL isExceedingQuota;
@property(readonly, retain, nonatomic) NSDate *lastSuccessfulSyncDate;
@property(readonly, nonatomic) unsigned int numberOfVideosToDownload; // @synthesize numberOfVideosToDownload=_numberOfVideosToDownload;
@property(readonly, nonatomic) unsigned int numberOfVideosToUpload; // @synthesize numberOfVideosToUpload=_numberOfVideosToUpload;
@property(readonly, nonatomic) unsigned int numberOfImagesToUpload; // @synthesize numberOfImagesToUpload=_numberOfImagesToUpload;
- (unsigned int)diskSpaceLevel;
- (void)_setup;
@property(retain, nonatomic, setter=_setProgress:) NSProgress *progress; // @synthesize progress=_progress;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) BOOL isEnabled;
@property(nonatomic) id <PLCPLStatusDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

