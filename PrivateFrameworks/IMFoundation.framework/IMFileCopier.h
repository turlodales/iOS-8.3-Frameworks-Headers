//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSURL;

@interface IMFileCopier : NSObject
{
    BOOL _shouldCancel;
    BOOL _didErrorOccur;
    BOOL _inProgress;
    id <IMFileCopierDelegate> _delegate;
    NSURL *_inputURL;
    NSURL *_outputURL;
    id _identifier;
    unsigned int _operation;
    void *_BOMCopier;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _callback;
}

@property CDUnknownBlockType _callback; // @synthesize _callback;
@property NSObject<OS_dispatch_queue> *_queue; // @synthesize _queue;
@property void *_BOMCopier; // @synthesize _BOMCopier;
@property BOOL inProgress; // @synthesize inProgress=_inProgress;
@property(readonly, nonatomic) BOOL didErrorOccur; // @synthesize didErrorOccur=_didErrorOccur;
@property(readonly, nonatomic) BOOL wasCancelled; // @synthesize wasCancelled=_shouldCancel;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned int)arg4 completionBlock:(CDUnknownBlockType)arg5 queue:(id)arg6;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned int)arg4 delegate:(id)arg5;
- (void)_main_copierFinishedWithResult:(id)arg1;
- (void)_worker_doCopy;
- (id)_temporaryCopierPath;
@property(readonly) NSURL *inputURL; // @synthesize inputURL=_inputURL;
- (void)_fillOutputURLFromInputURL;
- (void)cleanup;
- (void)start;
@property(readonly) id identifier; // @synthesize identifier=_identifier;
@property unsigned int operation; // @synthesize operation=_operation;
@property id <IMFileCopierDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)cancel;
@property(readonly) NSURL *outputURL; // @synthesize outputURL=_outputURL;

@end
