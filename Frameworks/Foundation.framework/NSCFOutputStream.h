//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutputStream.h"

@interface NSCFOutputStream : NSOutputStream
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (oneway void)release;
- (id)initToFileAtPath:(id)arg1 append:(BOOL)arg2;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (id)streamError;
- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;
- (void)open;
- (BOOL)hasSpaceAvailable;
- (void)close;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)delegate;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (BOOL)isEqual:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)retain;
- (id)initToBuffer:(char *)arg1 capacity:(unsigned int)arg2;
- (id)initToMemory;
- (id)initWithURL:(id)arg1 append:(BOOL)arg2;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (BOOL)_setCFClientFlags:(unsigned long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_60d14f2d *)arg3;
- (unsigned int)streamStatus;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;

@end

