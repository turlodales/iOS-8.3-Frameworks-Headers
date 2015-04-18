//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOSearchAttributionInfo, NSArray, NSString;

@interface GEOMapItemAttribution : NSObject
{
    GEOSearchAttributionInfo *_info;
    NSArray *_attributionURLs;
    NSString *_yelpID;
    NSString *_poiID;
}

- (id)_yelpHTTPURLForRequirement:(int)arg1 withUID:(id)arg2 writeAReview:(BOOL)arg3;
@property(readonly, nonatomic) BOOL requiresAttributionInCallout;
- (id)providerSnippetLogoPathForScale:(float)arg1;
- (id)providerLogoPathForScale:(float)arg1;
@property(readonly, nonatomic) NSString *webBaseActionURL;
@property(readonly, nonatomic) NSArray *attributionApps;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3;
@property(readonly, nonatomic) NSArray *attributionURLs; // @synthesize attributionURLs=_attributionURLs;
@property(readonly, nonatomic) NSString *providerName;
@property(readonly, nonatomic) NSString *providerID;
- (void)dealloc;

@end

