//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIKeyboardCandidateList.h"

@class NSArray, NSString, TIKeyboardCandidateResultSet, UIKBCandidateCollectionView;

@interface UIKeyboardCandidateRowViewController : UIViewController <UIKeyboardCandidateList, UICollectionViewDelegate, UICollectionViewDataSource>
{
    BOOL _showsHiddenCandidates;
    id <UIKeyboardCandidateRowViewControllerDelegate> _delegate;
    id <UIKeyboardCandidateListDelegate> _candidateListDelegate;
    TIKeyboardCandidateResultSet *_candidateSet;
    Class _cellClass;
}

+ (float)suggestedHeightForCellClass:(Class)arg1;
@property(retain, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(nonatomic) BOOL showsHiddenCandidates; // @synthesize showsHiddenCandidates=_showsHiddenCandidates;
- (struct CGSize)sizeOfDummyItemForCollectionView:(id)arg1 layout:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)loadView;
- (id)initWithCellClass:(Class)arg1;
- (void)revealHiddenCandidates;
- (void)candidatesDidChange;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect)arg4 maxX:(float)arg5 layout:(BOOL)arg6;
- (unsigned int)selectedSortIndex;
- (id)keyboardBehaviors;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (unsigned int)currentIndex;
- (id)currentCandidate;
- (void)showPreviousRow;
- (void)showNextRow;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (BOOL)showCandidate:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (BOOL)isHiddenCandidatesList;
- (BOOL)isExtendedList;
- (void)_reloadCandidates;
- (id)statisticsIdentifier;
@property(nonatomic) id <UIKeyboardCandidateListDelegate> candidateListDelegate; // @synthesize candidateListDelegate=_candidateListDelegate;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(float)arg4 layout:(BOOL)arg5;
@property(retain, nonatomic) TIKeyboardCandidateResultSet *candidateSet; // @synthesize candidateSet=_candidateSet;
- (BOOL)hasCandidates;
@property(readonly, nonatomic) UIKBCandidateCollectionView *collectionView;
- (void)showNextCandidate;
- (void)_stepSelectedCandidateInDirection:(BOOL)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) NSArray *candidates;
- (void)_showCandidateAtIndex:(unsigned int)arg1 scrollCellToVisible:(BOOL)arg2 animated:(BOOL)arg3;
- (float)suggestedHeight;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
@property(nonatomic) id <UIKeyboardCandidateRowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

