//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SUScriptTextFieldDelegate.h"

@class NSHashTable, NSString;

@interface SUScriptTextFieldDelegate : NSObject <SUScriptTextFieldDelegate>
{
    NSHashTable *_delegates;
}

@property(readonly, nonatomic) int numberOfDelegates;
- (void)removeDelegate:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)init;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dealloc;
- (void)addDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

