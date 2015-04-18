//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@class CPLResource, NSString;

@interface CPLEngineResourceDownloadTask : CPLResourceTransferTask
{
    BOOL _backgroundTask;
    BOOL _cancelledByEngine;
    BOOL _wantsTransportTask;
    BOOL _transportOwnsTask;
    CPLResource *_cloudResource;
    unsigned int _taskIdentifierForQueue;
    NSString *_clientBundleID;
    id <CPLEngineTransportTask> _transportTask;
    CDUnknownBlockType _launchHandler;
    CDUnknownBlockType _cancelHandler;
    CDUnknownBlockType _didStartHandler;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
}

- (void)cancelTask;
@property(readonly, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(readonly, nonatomic) CDUnknownBlockType launchHandler; // @synthesize launchHandler=_launchHandler;
@property(nonatomic) unsigned int taskIdentifierForQueue; // @synthesize taskIdentifierForQueue=_taskIdentifierForQueue;
@property(nonatomic, getter=isCancelledByEngine) BOOL cancelledByEngine; // @synthesize cancelledByEngine=_cancelledByEngine;
@property(nonatomic) BOOL transportOwnsTask; // @synthesize transportOwnsTask=_transportOwnsTask;
@property(nonatomic, getter=isBackgroundTask) BOOL backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(retain, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(retain, nonatomic) CPLResource *cloudResource; // @synthesize cloudResource=_cloudResource;
@property(nonatomic) BOOL wantsTransportTask; // @synthesize wantsTransportTask=_wantsTransportTask;
@property(retain, nonatomic) id <CPLEngineTransportTask> transportTask; // @synthesize transportTask=_transportTask;
@property(readonly, nonatomic) CDUnknownBlockType didStartHandler; // @synthesize didStartHandler=_didStartHandler;
- (id)initWithLaunchHandler:(CDUnknownBlockType)arg1 cancelHandler:(CDUnknownBlockType)arg2 didStartHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
- (void)launch;

@end
