//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, SUScriptObject, WebScriptObject;

@interface SUScriptFunction : NSObject
{
    WebScriptObject *_function;
    NSLock *_lock;
    SUScriptObject *_thisObject;
}

@property __weak id thisObject;
- (id)_copyAdjustedArgumentsForArguments:(id)arg1;
- (BOOL)callWithArguments:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)callSynchronouslyWithArguments:(id)arg1;
@property(retain) WebScriptObject *scriptObject;
- (id)initWithScriptObject:(id)arg1;
- (BOOL)callWithArguments:(id)arg1;
- (void)unlock;
- (void)lock;
- (id)init;
- (void)dealloc;

@end

