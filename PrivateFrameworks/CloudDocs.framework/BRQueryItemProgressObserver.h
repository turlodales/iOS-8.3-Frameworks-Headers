//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRQueryItem, NSObject<OS_dispatch_queue>, NSProgress;

@interface BRQueryItemProgressObserver : NSObject
{
    BRQueryItem *_item;
    NSObject<OS_dispatch_queue> *_queue;
    id _subscriber;
    NSProgress *_progress;
    BOOL _stopped;
    BOOL _isUpload;
    CDUnknownBlockType _progressHandler;
}

@property(nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)start;
- (id)initWithItem:(id)arg1;
- (void)stop;
@property(readonly, nonatomic) BRQueryItem *item; // @synthesize item=_item;
- (id)description;
- (void)dealloc;

@end

