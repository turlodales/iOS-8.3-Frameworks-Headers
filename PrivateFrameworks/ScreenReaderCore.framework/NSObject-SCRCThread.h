//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (SCRCThread)
+ (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned long)arg3 objects:(id)arg4;
+ (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned long)arg4 count:(unsigned long)arg5 objects:(id)arg6;
- (id)valueForBlock:(CDUnknownBlockType)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (id)valueForSelector:(SEL)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3 copyValue:(BOOL)arg4 withObjects:(id)arg5;
- (id)copyValueForKeyPath:(id)arg1 forThreadKey:(id)arg2;
- (id)valueForKeyPath:(id)arg1 forThreadKey:(id)arg2;
- (id)copyValueForKeyPathOnMainThread:(id)arg1;
- (id)valueForKeyPathOnMainThread:(id)arg1;
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned long)arg3 objects:(id)arg4;
- (void)_scr_safeGetValueForBlock:(id)arg1 lock:(id)arg2;
- (void)_scr_safeGetValueForSelector:(id)arg1 lock:(id)arg2;
- (id)copyValueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (id)_getRetainedValueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3 copy:(BOOL)arg4;
- (id)valueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned long)arg4 count:(unsigned long)arg5 objects:(id)arg6;
- (id)_getRetainedValueForKeyPathOnMainThread:(id)arg1 copy:(BOOL)arg2;
- (void)_scr_safeGetValueForKeyPath:(id)arg1;
- (void)_scr_safeGetValueForKeyPath:(id)arg1 lock:(id)arg2;
- (id)performSelector:(SEL)arg1 withObjectsAsArray:(id)arg2;
- (id)threadDescription;
@end

