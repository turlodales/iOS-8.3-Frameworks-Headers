//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoard/FBTransaction.h>

#import "FBApplicationProcessObserver.h"

@class FBApplicationProcess, FBProcessExecutionContext, FBProcessManager, FBWaitForProcessDeathTransaction, NSString;

@interface FBApplicationProcessLaunchTransaction : FBTransaction <FBApplicationProcessObserver>
{
    FBProcessManager *_processManager;
    NSString *_bundleID;
    FBApplicationProcess *_process;
    CDUnknownBlockType _executionContextProvider;
    FBWaitForProcessDeathTransaction *_deathTransaction;
    FBProcessExecutionContext *_executionContext;
    BOOL _processIsValid;
    BOOL _failedLaunch;
    BOOL _exited;
}

- (void)_queue_noteExited;
- (void)_queue_launchProcess:(id)arg1;
@property(readonly, nonatomic) BOOL failedLaunch; // @synthesize failedLaunch=_failedLaunch;
@property(readonly, nonatomic) BOOL exited; // @synthesize exited=_exited;
- (id)initWithApplicationProcess:(id)arg1;
- (void)applicationProcessDidLaunch:(id)arg1;
- (void)applicationProcessWillLaunch:(id)arg1;
- (void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2;
- (void)_begin;
- (id)_customizedDescriptionProperties;
- (BOOL)_canBeInterrupted;
- (void)_didComplete;
- (void)_childTransactionDidComplete:(id)arg1;
@property(readonly, retain, nonatomic) FBApplicationProcess *process; // @synthesize process=_process;
- (id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(CDUnknownBlockType)arg2;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

