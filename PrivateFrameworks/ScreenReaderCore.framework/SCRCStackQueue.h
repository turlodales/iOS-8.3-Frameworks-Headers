//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCRCStackQueue : NSObject
{
    struct _SCRCStackNode *_firstNode;
    struct _SCRCStackNode *_lastNode;
    unsigned int _count;
}

- (id)topObject;
- (void)pushArray:(id)arg1;
- (id)popObjectRetained;
- (id)dequeueObjectRetained;
- (id)popObject;
- (void)pushObject:(id)arg1;
- (id)dequeueObject;
- (void)enqueueObject:(id)arg1;
- (id)objectEnumerator;
- (BOOL)isEmpty;
- (id)description;
- (void)removeAllObjects;
- (unsigned int)count;
- (void)dealloc;

@end

