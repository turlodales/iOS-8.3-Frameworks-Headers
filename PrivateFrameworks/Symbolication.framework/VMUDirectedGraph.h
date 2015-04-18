//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary;

@interface VMUDirectedGraph : NSObject <NSCopying>
{
    unsigned int _nodeCount;
    unsigned int _edgeCount;
    unsigned int _edgeCapacity;
    unsigned int _externalEdges;
    void *_deadNodes;
    unsigned int _nextNodeName;
    unsigned int _nextEdgeName;
    unsigned int *_nodeAdjIndex;
    struct _VMUDirectedGraphEdge *_edges;
    NSDictionary *_additionalProperties;
    unsigned int _indexedNodeSpace;
    unsigned int _indexedEdges;
    BOOL _insideSearch;
    BOOL _inverted;
}

+ (id)_unarchivedObject:(id)arg1 options:(unsigned int)arg2;
+ (id)_archivedObject:(id)arg1 options:(unsigned int)arg2;
+ (id)_archivedBytes:(const void *)arg1 length:(unsigned int)arg2 options:(unsigned int)arg3;
+ (void *)_copyUnarchived:(id)arg1 length:(unsigned int *)arg2 options:(unsigned int)arg3;
+ (void)initialize;
- (BOOL)inverted;
@property(copy, nonatomic) NSDictionary *additionalProperties; // @synthesize additionalProperties=_additionalProperties;
@property(readonly, nonatomic) unsigned int edgeNamespaceSize; // @synthesize edgeNamespaceSize=_nextEdgeName;
- (id)invertedGraph;
- (id)renormalizedGraph;
- (id)subgraphWithMarkedNodes:(void *)arg1;
- (void)invertEdges;
- (void)_dumpAdjacencyList;
- (void)stronglyConnectedComponentSearch:(CDUnknownBlockType)arg1;
- (void)breadthFirstSearch:(unsigned int)arg1 nodeVisitBlock:(CDUnknownBlockType)arg2 edgeVisitBlock:(CDUnknownBlockType)arg3;
- (void)withEdgeMarkingMap:(CDUnknownBlockType)arg1;
- (void)withNodeMarkingMap:(CDUnknownBlockType)arg1;
- (unsigned int)enumerateEdgesOfNode:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned int edgeCount;
- (void)ungroupNode:(unsigned int)arg1;
- (unsigned int)addGroupNodeForNodes:(const unsigned int *)arg1 count:(unsigned int)arg2;
- (void)removeMarkedEdges:(void *)arg1;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2;
- (unsigned int)addNode;
- (id)plistRepresentationWithOptions:(unsigned int)arg1;
- (id)initWithPlistRepresentation:(id)arg1;
- (void)_renormalize;
- (void)removeMarkedNodes:(void *)arg1;
- (void)depthFirstSearch:(unsigned int)arg1 nodeVisitBlock:(CDUnknownBlockType)arg2 edgeVisitBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) unsigned int nodeNamespaceSize; // @synthesize nodeNamespaceSize=_nextNodeName;
- (void)_searchMainLoop:(unsigned int)arg1 action:(CDUnknownBlockType)arg2;
- (unsigned int)enumerateEdgesWithBlock:(CDUnknownBlockType)arg1;
- (void)_renameWithNodeMap:(unsigned int *)arg1 nodeNamespace:(unsigned int)arg2 edgeMap:(unsigned int *)arg3 edgeNamespace:(unsigned int)arg4;
- (void)_removeEdges:(CDUnknownBlockType)arg1;
- (void)_faultDeadNodeMap;
- (void)_internalAddEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2 withName:(unsigned int)arg3;
- (id)initWithNodes:(unsigned int)arg1;
- (void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned int)arg2;
- (void)_adjustAdjacencyMap;
- (id)initWithArchived:(id)arg1 options:(unsigned int)arg2;
- (unsigned int)enumerateNodesWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned int nodeCount; // @synthesize nodeCount=_nodeCount;
- (void)setInverted:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end
