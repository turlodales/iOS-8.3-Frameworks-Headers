//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@class NSIndexPath;

@interface UIKeyboardCandidateGridCellAttributes : UICollectionViewLayoutAttributes
{
    BOOL _dummy;
    BOOL _groupHeader;
    BOOL _needsPaddingForIndexScrubber;
    BOOL _groupShowsAlternativeText;
    BOOL _secondaryCandidateAppearance;
    BOOL _emphasizedAppearance;
    NSIndexPath *_candidateIndexPath;
    CDStruct_961fb75c _visualStyling;
    int _candidatesVisualStyle;
    unsigned int _candidateNumber;
    unsigned int _rowIndex;
    unsigned int _edges;
    struct CGSize _rowSize;
}

@property(nonatomic) BOOL groupShowsAlternativeText; // @synthesize groupShowsAlternativeText=_groupShowsAlternativeText;
@property(nonatomic) struct CGSize rowSize; // @synthesize rowSize=_rowSize;
@property(nonatomic) unsigned int rowIndex; // @synthesize rowIndex=_rowIndex;
@property(nonatomic) BOOL groupHeader; // @synthesize groupHeader=_groupHeader;
@property(retain, nonatomic) NSIndexPath *candidateIndexPath; // @synthesize candidateIndexPath=_candidateIndexPath;
@property(nonatomic) BOOL emphasizedAppearance; // @synthesize emphasizedAppearance=_emphasizedAppearance;
@property(nonatomic) BOOL secondaryCandidateAppearance; // @synthesize secondaryCandidateAppearance=_secondaryCandidateAppearance;
@property(nonatomic) unsigned int candidateNumber; // @synthesize candidateNumber=_candidateNumber;
@property(nonatomic) BOOL needsPaddingForIndexScrubber; // @synthesize needsPaddingForIndexScrubber=_needsPaddingForIndexScrubber;
@property(nonatomic) unsigned int edges; // @synthesize edges=_edges;
@property(nonatomic) BOOL dummy; // @synthesize dummy=_dummy;
@property(nonatomic) int candidatesVisualStyle; // @synthesize candidatesVisualStyle=_candidatesVisualStyle;
@property(nonatomic) CDStruct_961fb75c visualStyling; // @synthesize visualStyling=_visualStyling;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)representedElementCategory;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;

@end

