//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSProgress.h>

@interface _NSProgressProxy : NSProgress
{
    id <NSProgressPublisher> _forwarder;
    BOOL _isOld;
    CDUnknownBlockType _unpublishingHandler;
}

- (void)setLocalizedDescription:(id)arg1;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setCancellable:(BOOL)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)setKind:(id)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)pause;
- (void)setCancellationHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)cancel;
- (void)resignCurrent;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)_invokeUnpublishingHandler;
- (void)_invokePublishingHandler:(CDUnknownBlockType)arg1;
- (id)_initWithForwarder:(id)arg1 values:(id)arg2 isOld:(BOOL)arg3;
- (void)_acknowledgeWithSuccess:(BOOL)arg1;
- (void)setPrioritizationHandler:(CDUnknownBlockType)arg1;
- (void)setPrioritizable:(BOOL)arg1;
- (BOOL)isOld;
- (void)acknowledgeWithSuccess:(BOOL)arg1;
- (void)unpublish;
- (void)publish;
- (void)setPausable:(BOOL)arg1;
- (void)prioritize;
- (void)setPausingHandler:(CDUnknownBlockType)arg1;

@end

