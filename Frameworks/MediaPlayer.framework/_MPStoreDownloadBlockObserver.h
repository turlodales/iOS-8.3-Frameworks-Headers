//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPStoreDownloadManagerObserver.h"

@class MPStoreDownload, NSString;

@interface _MPStoreDownloadBlockObserver : NSObject <MPStoreDownloadManagerObserver>
{
    CDUnknownBlockType _didFinishDownloadHandler;
    CDUnknownBlockType _didFinishPurchaseHandler;
    MPStoreDownload *_download;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MPStoreDownload *download; // @synthesize download=_download;
@property(copy, nonatomic) CDUnknownBlockType didFinishPurchaseHandler; // @synthesize didFinishPurchaseHandler=_didFinishPurchaseHandler;
@property(copy, nonatomic) CDUnknownBlockType didFinishDownloadHandler; // @synthesize didFinishDownloadHandler=_didFinishDownloadHandler;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (id)initWithDownload:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

