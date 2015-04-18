//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UICollectionViewCompositionLayout.h"

#import "SKUIStorePageCollectionViewLayout.h"

@class NSArray, NSMapTable, NSMutableArray, NSString;

@interface SKUIStorePageSplitCollectionViewLayout : _UICollectionViewCompositionLayout <SKUIStorePageCollectionViewLayout>
{
    NSString *_backdropGroupName;
    NSMutableArray *_orderedSublayouts;
    BOOL _rendersWithPerspective;
    NSMapTable *_sublayoutToSectionsToIndexRanges;
}

- (void)_createSectionsToIndexRangesMapTableIfNeededForSublayout:(id)arg1;
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
- (id)pinnedLayoutAttributesForItemsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForUnpinnedItemAtIndexPath:(id)arg1;
- (void)addSublayoutsUsingSplitsDescription:(id)arg1;
@property(nonatomic) BOOL rendersWithPerspective; // @synthesize rendersWithPerspective=_rendersWithPerspective;
@property(readonly, nonatomic) NSArray *indexPathsForPinningItems;
- (id)_newStorePageCollectionViewLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void).cxx_destruct;
- (void)removeSublayout:(id)arg1;
- (void)addSublayout:(id)arg1 forElementKinds:(id)arg2;
- (void)addSublayout:(id)arg1 forItems:(id)arg2 inSection:(int)arg3 offset:(struct CGPoint)arg4 relativeToEdges:(unsigned int)arg5 fromSiblingLayout:(id)arg6;
- (void)addSublayout:(id)arg1 forSections:(id)arg2 offset:(struct CGPoint)arg3 relativeToEdges:(unsigned int)arg4 fromSiblingLayout:(id)arg5;
- (struct CGRect)_frameForLayout:(id)arg1 offset:(struct CGPoint)arg2 relativeToEdges:(unsigned int)arg3 fromSiblingLayout:(id)arg4;
- (id)sublayouts;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

