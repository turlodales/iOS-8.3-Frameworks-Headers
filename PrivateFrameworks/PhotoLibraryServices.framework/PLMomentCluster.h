//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSArray, NSCountedSet, NSDate, NSMutableArray, NSMutableSet, NSObject<NSCopying>, NSString;

@interface PLMomentCluster : NSObject
{
    short _generationType;
    NSString *__title;
    NSObject<NSCopying> *__objectID;
    NSDate *__startingDate;
    NSDate *__endingDate;
    CLLocation *__approximateLocation;
    NSMutableArray *__mutableNodes;
    NSMutableSet *__nodesWithLocation;
    NSCountedSet *__splitTags;
    NSCountedSet *__mergeTags;
}

+ (double)nameOccurrenceCutoff;
@property(retain, nonatomic, setter=_setMergeTags:) NSCountedSet *_mergeTags; // @synthesize _mergeTags=__mergeTags;
@property(retain, nonatomic, setter=_setSplitTags:) NSCountedSet *_splitTags; // @synthesize _splitTags=__splitTags;
@property(copy, nonatomic, setter=_setNodes:) NSMutableArray *_mutableNodes; // @synthesize _mutableNodes=__mutableNodes;
- (unsigned int)expandFromNode:(id)arg1 withNeighbors:(id)arg2 inClustering:(id)arg3 minimumNumberOfPoints:(unsigned int)arg4;
- (void)removeNodesFromCluster:(id)arg1;
- (void)removeNodes:(id)arg1;
- (void)addNodes:(id)arg1;
- (void)addNodesFromCluster:(id)arg1;
- (id)mergeTags;
- (id)mergeTagAboveCutoff:(double)arg1;
- (id)splitTags;
- (void)_correctStartAndEndDates;
- (void)removeNode:(id)arg1 nilCluster:(BOOL)arg2;
- (void)addNode:(id)arg1;
- (BOOL)isTagged;
@property(readonly, nonatomic) NSMutableSet *_nodesWithLocation; // @synthesize _nodesWithLocation=__nodesWithLocation;
- (void)_setEndingDate:(id)arg1;
- (void)_setStartingDate:(id)arg1;
- (BOOL)hasMerges;
- (BOOL)hasSplits;
@property(readonly, copy, nonatomic) NSArray *nodes;
@property(retain, nonatomic) NSDate *endingDate; // @synthesize endingDate=__endingDate;
@property(retain, nonatomic) NSDate *startingDate; // @synthesize startingDate=__startingDate;
- (id)initWithObjectID:(id)arg1;
- (void)commonPLMomentClusterInitialization;
- (id)initWithMoment:(id)arg1;
@property(nonatomic) short generationType; // @synthesize generationType=_generationType;
@property(readonly, nonatomic) CLLocation *approximateLocation; // @synthesize approximateLocation=__approximateLocation;
@property(readonly, nonatomic) NSObject<NSCopying> *objectID; // @synthesize objectID=__objectID;
@property(retain, nonatomic) NSString *title; // @synthesize title=__title;
- (id)description;
- (id)init;
- (void)dealloc;

@end

