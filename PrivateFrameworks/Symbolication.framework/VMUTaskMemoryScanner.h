//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VMUObjectIdentifier, VMUVMRegionIdentifier;

@interface VMUTaskMemoryScanner : NSObject
{
    unsigned int _task;
    unsigned int _suspensionToken;
    VMUObjectIdentifier *_objectIdentifier;
    VMUVMRegionIdentifier *_regionIdentifier;
    struct _VMUBlockNode *_blocks;
    unsigned int _blocksCount;
    unsigned int _blocksSize;
    struct _VMURegionNode *_regions;
    unsigned int _regionsCount;
    unsigned int _regionsSize;
    struct _VMURegionMap *_regionMap;
    struct _VMUZoneNode *_zones;
    unsigned int _zonesCount;
    unsigned int _zonesSize;
    struct _VMUThreadNode *_threads;
    unsigned int _threadsCount;
    id *_classInfos;
    unsigned int _classInfosCount;
    BOOL _exactScanningEnabled;
    unsigned long long _maxInteriorOffset;
    int _scanningMask;
    CDUnknownBlockType _referenceLogger;
    CDUnknownBlockType _nodeLogger;
}

@property(nonatomic) int scanningMask; // @synthesize scanningMask=_scanningMask;
@property(nonatomic) BOOL exactScanningEnabled; // @synthesize exactScanningEnabled=_exactScanningEnabled;
@property(nonatomic) unsigned long long maxInteriorOffset; // @synthesize maxInteriorOffset=_maxInteriorOffset;
- (id)referenceDescription:(CDStruct_df82e459)arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3 symbolicator:(struct _CSTypeRef)arg4 alignmentSpacing:(unsigned int)arg5;
@property(readonly, nonatomic) unsigned int mallocNodeCount;
- (id)labelForMallocNode:(unsigned int)arg1;
- (id)zoneNameForNode:(unsigned int)arg1;
- (id)scanNodesIntoGraph;
- (void)orderedNodeTraversal:(int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)addMallocNodesFromTask;
- (id)nodeDescription:(unsigned int)arg1;
- (id)nodeDescription:(unsigned int)arg1 withOffset:(unsigned long long)arg2;
- (void *)contentForNode:(unsigned int)arg1;
- (void)scanNodesForReferences:(CDUnknownBlockType)arg1;
- (CDStruct_599faf0f)nodeDetails:(unsigned int)arg1;
- (void)_withScanningContext:(CDUnknownBlockType)arg1;
- (void)_orderedScanWithScanner:(CDUnknownBlockType)arg1 recorder:(CDUnknownBlockType)arg2 keepMapped:(_Bool)arg3 actions:(CDUnknownBlockType)arg4;
- (void)_withOrderedNodeMapper:(CDUnknownBlockType)arg1;
- (void)_sortBlocks;
- (void)_fixupBlockIsas;
- (void)_callRemoteMallocEnumerators:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)_withMemoryReaderBlock:(CDUnknownBlockType)arg1;
- (void)setReferenceScanningLogger:(CDUnknownBlockType)arg1;
- (void)setNodeScanningLogger:(CDUnknownBlockType)arg1;
- (void)detachFromTask;
- (unsigned int)enumerateNodesWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned int nodeCount; // @synthesize nodeCount=_blocksCount;
- (void)removeRootReachableNodes;
- (void)addMallocNodes:(id)arg1;
- (void)addRootNodesFromTask;
- (void)dealloc;
- (BOOL)_suspend;
- (id)initWithTask:(unsigned int)arg1;

@end

