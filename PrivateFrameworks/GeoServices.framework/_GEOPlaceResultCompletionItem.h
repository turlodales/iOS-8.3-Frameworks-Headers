//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOCompletionItem.h"
#import "_GEOCompletionSearchHint.h"

@class GEOPlaceResult, NSArray, NSData, NSString;

@interface _GEOPlaceResultCompletionItem : NSObject <GEOCompletionItem, _GEOCompletionSearchHint>
{
    GEOPlaceResult *_placeResult;
    NSString *_query;
    NSData *_completionMetaData;
}

@property(readonly, nonatomic) NSData *metadata;
@property(readonly, nonatomic) id <GEOMapItem> geoMapItem;
- (id)completionLocation;
@property(readonly, nonatomic) NSData *entryMetadata;
- (void)sendFeedback;
- (BOOL)getCoordinate:(CDStruct_c3b9c2ee *)arg1;
- (id)highlightsForLine:(unsigned int)arg1;
- (id)queryLine;
- (id)calloutTitle;
@property(readonly, nonatomic) NSArray *displayLines;
- (id)initWithPlaceResult:(id)arg1 query:(id)arg2 completion:(id)arg3;
- (id)suggestionsOptions;
- (id)query;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

