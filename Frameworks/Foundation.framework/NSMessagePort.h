//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSPort.h>

@interface NSMessagePort : NSPort
{
    void *_port;
    id _delegate;
}

+ (void)_fixNSMessagePortLeak;
+ (BOOL)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned int)arg7;
- (void)finalize;
- (oneway void)release;
- (id)initWithName:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (BOOL)isValid;
- (void)invalidate;
- (id)name;
- (BOOL)setName:(id)arg1;
- (id)delegate;
- (unsigned int)retainCount;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)retain;
- (id)initWithRemoteName:(id)arg1;
- (BOOL)sendBeforeTime:(double)arg1 streamData:(void *)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;
- (BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned int)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned int)arg5;
- (BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned int)arg4;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;

@end

