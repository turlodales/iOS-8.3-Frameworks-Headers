//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFileProvider.h"

@class BRCAccountSession, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSURL;

@interface BRCFileProvider : NSObject <NSFileProvider>
{
    BRCAccountSession *_session;
    NSURL *_url;
    NSOperationQueue *_queue;
    NSMutableDictionary *_presentersIDsByURL;
    NSObject<OS_dispatch_queue> *_privQueue;
}

+ (id)prettyNameForFilePresenterID:(id)arg1;
@property(readonly) NSOperationQueue *_providedItemsOperationQueue;
@property(readonly, copy) NSURL *_providedItemsURL;
- (void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3;
- (void)_provideItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2;
- (id)_keyForURL:(id)arg1;
- (void)_unregisterPresenterForItemAtURL:(id)arg1 key:(id)arg2;
- (void)_registerPresenterForItemAtURL:(id)arg1 key:(id)arg2 session:(id)arg3;
- (id)_keyForURL:(id)arg1 andID:(id)arg2;
- (id)initWithURL:(id)arg1 name:(id)arg2;
@property(retain, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
- (void)dumpToContext:(id)arg1;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;

// Remaining properties
@property(readonly, copy) NSString *_fileReactorID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
