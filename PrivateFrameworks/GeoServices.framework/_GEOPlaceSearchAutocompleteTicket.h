//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOMapServiceCompletionTicket.h"

@class GEOMapServiceTraits, GEOPDPlaceRequest, GEOPDPlaceResponse, NSString;

@interface _GEOPlaceSearchAutocompleteTicket : NSObject <GEOMapServiceCompletionTicket>
{
    GEOPDPlaceRequest *_request;
    GEOPDPlaceResponse *_response;
    GEOMapServiceTraits *_traits;
    BOOL _canceled;
    NSString *_searchQuery;
}

@property(readonly, nonatomic, getter=isCanceled) BOOL canceled; // @synthesize canceled=_canceled;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 searchQuery:(id)arg3;
- (BOOL)matchesFragment:(id)arg1;
- (void)submitWithAutoCompletionHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
- (void)dealloc;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

