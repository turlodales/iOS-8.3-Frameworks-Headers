//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _NSXPCConnectionExpectedReplies : NSObject
{
    struct __CFDictionary *_replyTable;
    int _lock;
    unsigned long long _sequence;
}

- (void)finalize;
- (id)init;
- (void)dealloc;
- (id)progressForSequence:(unsigned long long)arg1;
- (unsigned long long)sequenceWithProgress:(id)arg1;
- (void)removeSequence:(unsigned long long)arg1;

@end

