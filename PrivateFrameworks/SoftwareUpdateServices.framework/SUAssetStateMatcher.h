//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SUAssetMatcher.h"

@class NSString;

@interface SUAssetStateMatcher : NSObject <SUAssetMatcher>
{
    NSString *_assetType;
    int _interestedStates;
}

@property(readonly, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(readonly, nonatomic) int interestedStates; // @synthesize interestedStates=_interestedStates;
- (id)initWithType:(id)arg1 interestedStates:(int)arg2;
- (id)findMatchFromCandidates:(id)arg1 error:(id *)arg2;
- (id)_findMatchFromCandidates:(id)arg1 error:(id *)arg2;
- (BOOL)_matchesFilterType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

