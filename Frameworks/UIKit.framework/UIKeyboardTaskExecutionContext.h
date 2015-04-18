//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIKeyboardTaskQueue;

@interface UIKeyboardTaskExecutionContext : NSObject
{
    UIKeyboardTaskExecutionContext *_parentExecutionContext;
    CDUnknownBlockType _continuation;
    id _info;
    UIKeyboardTaskQueue *_executionQueue;
}

- (id)initWithExecutionQueue:(id)arg1;
@property(retain, nonatomic) id info; // @synthesize info=_info;
- (id)initWithParentContext:(id)arg1 continuation:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UIKeyboardTaskQueue *executionQueue; // @synthesize executionQueue=_executionQueue;
- (void)returnExecutionToParentWithInfo:(id)arg1;
- (void)transferExecutionToMainThreadWithTask:(CDUnknownBlockType)arg1;
- (id)childWithContinuation:(CDUnknownBlockType)arg1;
- (void)returnExecutionToParent;
- (id)init;
- (void)dealloc;

@end

