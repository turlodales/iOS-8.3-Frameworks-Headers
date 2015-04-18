//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, SUDescriptor, SUDownload, SUScanOptions;

@protocol SUManagerClientInterface
- (void)installDidFinish:(SUDescriptor *)arg1;
- (void)installDidFail:(SUDescriptor *)arg1 withError:(NSError *)arg2;
- (void)installDidStart:(SUDescriptor *)arg1;
- (void)downloadDidFinish:(SUDownload *)arg1;
- (void)downloadDidFail:(SUDownload *)arg1 withError:(NSError *)arg2;
- (void)downloadProgressDidChange:(SUDownload *)arg1;
- (void)downloadDidStart:(SUDownload *)arg1;
- (void)downloadWasInvalidatedForNewUpdateAvailable:(SUDescriptor *)arg1;
- (void)automaticDownloadDidFailToStartForNewUpdateAvailable:(SUDescriptor *)arg1 withError:(NSError *)arg2;
- (void)scanDidCompleteWithNewUpdateAvailable:(SUDescriptor *)arg1 error:(NSError *)arg2;
- (void)scanRequestDidFinishForOptions:(SUScanOptions *)arg1 update:(SUDescriptor *)arg2 error:(NSError *)arg3;
- (void)scanRequestDidStartForOptions:(SUScanOptions *)arg1;
@end

