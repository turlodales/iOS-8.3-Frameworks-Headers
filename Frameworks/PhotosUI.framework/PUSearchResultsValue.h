//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PUSearchResult.h"

@class NSArray, NSAttributedString, NSObject<OS_dispatch_queue>, NSString, PSIGroupResult;

@interface PUSearchResultsValue : NSObject <PUSearchResult>
{
    NSObject<OS_dispatch_queue> *_queue;
    double _score;
    NSAttributedString *_attributedDisplayTitle;
    NSString *_displaySubtitle;
    NSArray *_uuids;
    id _albumUUID;
    unsigned int _approximateCount;
    id <PUSearchResultsValueDelegate> _delegate;
    PSIGroupResult *_groupResult;
}

@property(readonly) double score;
@property(retain) NSArray *uuids; // @synthesize uuids=_uuids;
@property(retain) id albumUUID; // @synthesize albumUUID=_albumUUID;
@property unsigned int approximateCount; // @synthesize approximateCount=_approximateCount;
- (BOOL)isFinished;
- (void).cxx_destruct;
@property(readonly, copy) NSString *searchString;
@property(readonly, copy) NSString *displayTitle;
- (int)compare:(id)arg1;
@property(nonatomic) __weak id <PUSearchResultsValueDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
@property(retain, setter=_setGroupResult:) PSIGroupResult *groupResult; // @synthesize groupResult=_groupResult;
- (void)_setApproximateCount:(unsigned int)arg1;
- (void)_setAlbumUUID:(id)arg1;
- (void)_computeScoreWithMaxGroupedResultsCount:(unsigned int)arg1;
- (void)fetchRemainingUUIDs:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *displaySubtitle;
- (id)displayTitleWithDefaultAttributes:(id)arg1 highlightedAttributes:(id)arg2;
- (void)_setUUIDs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

