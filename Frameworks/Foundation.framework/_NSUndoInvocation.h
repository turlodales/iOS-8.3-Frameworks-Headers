//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/_NSUndoObject.h>

@class NSInvocation;

@interface _NSUndoInvocation : _NSUndoObject
{
    NSInvocation *_invocation;
}

- (void)invoke;
- (id)description;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 invocation:(id)arg2;

@end

