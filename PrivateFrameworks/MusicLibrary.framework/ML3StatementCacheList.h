//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ML3StatementCacheNode;

@interface ML3StatementCacheList : NSObject
{
    ML3StatementCacheNode *_firstNode;
    ML3StatementCacheNode *_lastNode;
}

@property(readonly, nonatomic) ML3StatementCacheNode *lastNode; // @synthesize lastNode=_lastNode;
- (void)deleteAllNodes;
- (void)deleteOldestNode;
- (id)oldestNode;
- (void)appendNode:(id)arg1;
- (void)promoteNodeWithDictionaryKey:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) ML3StatementCacheNode *firstNode; // @synthesize firstNode=_firstNode;
- (id)description;
@property(readonly, nonatomic) unsigned int count;

@end

