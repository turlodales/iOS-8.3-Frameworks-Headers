//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPStoreDownload, MPStoreDownloadManager, NSArray;

@protocol MPStoreDownloadManagerObserver <NSObject>

@optional
- (void)downloadManager:(MPStoreDownloadManager *)arg1 downloadPurchaseDidFinish:(MPStoreDownload *)arg2;
- (void)downloadManager:(MPStoreDownloadManager *)arg1 downloadDidProgress:(MPStoreDownload *)arg2;
- (void)downloadManager:(MPStoreDownloadManager *)arg1 downloadDidFinish:(MPStoreDownload *)arg2;
- (void)downloadManager:(MPStoreDownloadManager *)arg1 didAddDownloads:(NSArray *)arg2 removeDownloads:(NSArray *)arg3;
@end

