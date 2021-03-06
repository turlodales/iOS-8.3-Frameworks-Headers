//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray, NSMutableDictionary;

@interface UICollectionViewTransitionLayout : UICollectionViewLayout
{
    UICollectionViewLayout *_fromLayout;
    UICollectionViewLayout *_toLayout;
    struct CGRect _fromVisibleBounds;
    struct CGRect _toVisibleBounds;
    struct CGSize _contentSize;
    BOOL _haveValidInfos;
    float _transitionProgress;
    NSMutableDictionary *_transitionInformationsDict;
    NSMutableDictionary *_currentLayoutInfos;
    BOOL _layoutIsValid;
    NSMutableArray *_disappearingLayoutAttributes;
    NSMutableArray *_appearingLayoutAttributes;
    float _accuracy;
}

- (float)valueForAnimatedKey:(id)arg1;
- (void)updateValue:(float)arg1 forAnimatedKey:(id)arg2;
- (id)interpolatedLayoutAttributesFromLayoutAttributes:(id)arg1 toLayoutAttributes:(id)arg2 progress:(float)arg3;
@property(nonatomic) float transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property(readonly, nonatomic) UICollectionViewLayout *nextLayout; // @synthesize nextLayout=_toLayout;
@property(readonly, nonatomic) UICollectionViewLayout *currentLayout; // @synthesize currentLayout=_fromLayout;
- (id)initWithCurrentLayout:(id)arg1 nextLayout:(id)arg2;
- (void)_finalizeLayoutTransition;
- (BOOL)_supportsAdvancedTransitionAnimations;
- (void)_prepareForTransitionFromLayout:(id)arg1;
- (void)_prepareForTransitionToLayout:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (void)_setCollectionView:(id)arg1;
- (struct CGRect)_newVisibleBounds;
- (struct CGRect)_oldVisibleBounds;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)invalidateLayout;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)dealloc;

@end

