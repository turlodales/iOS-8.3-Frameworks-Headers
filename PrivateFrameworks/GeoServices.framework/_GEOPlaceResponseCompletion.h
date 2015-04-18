//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOCompletion.h"

@class GEOPlaceSearchResponse, NSArray, NSString;

@interface _GEOPlaceResponseCompletion : NSObject <GEOCompletion>
{
    GEOPlaceSearchResponse *_response;
    NSArray *_groups;
}

- (id)metadata;
- (id)initWithPlaceSearchResponse:(id)arg1 query:(id)arg2 traits:(id)arg3;
@property(readonly, nonatomic) NSArray *groups;
- (id)response;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

