//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AXElementGrouper : NSObject
{
    unsigned int _minimumGroupSize;
    unsigned int _maximumGroupSize;
    unsigned int _preferredGroupSize;
    float _thresholdForDeterminingEqualSize;
}

@property(nonatomic) float thresholdForDeterminingEqualSize; // @synthesize thresholdForDeterminingEqualSize=_thresholdForDeterminingEqualSize;
@property(nonatomic) unsigned int preferredGroupSize; // @synthesize preferredGroupSize=_preferredGroupSize;
@property(nonatomic) unsigned int maximumGroupSize; // @synthesize maximumGroupSize=_maximumGroupSize;
@property(nonatomic) unsigned int minimumGroupSize; // @synthesize minimumGroupSize=_minimumGroupSize;
- (BOOL)_frame:(struct CGRect)arg1 isApproximatelySameSizeAsFrame:(struct CGRect)arg2;
- (id)groupElementsInRootGroup:(id)arg1;
- (id)initWithPadInterfaceHeuristics:(BOOL)arg1;
- (id)_groupablesForItems:(id)arg1;
- (id)_groupRemovingImpossibleGroups:(id)arg1 isRootLevel:(BOOL)arg2;
- (id)_flattenHierarchyForGroup:(id)arg1 rootLevel:(BOOL)arg2;
- (id)_buildHierarchyForGroup:(id)arg1 indexOfKeyboard:(unsigned int *)arg2;

@end

