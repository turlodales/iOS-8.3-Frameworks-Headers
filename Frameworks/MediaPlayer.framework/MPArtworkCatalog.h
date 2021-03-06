//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSString;

@interface MPArtworkCatalog : NSObject
{
    struct CGSize _fittingSize;
    BOOL _loadingRepresentation;
    float _destinationScale;
    id _token;
    id <MPArtworkDataSource> _dataSource;
    NSString *_cacheIdentifier;
    id _requestingContext;
    id _destination;
    CDUnknownBlockType _configurationBlock;
}

+ (void)setCachePurgesWhenEnteringBackground:(BOOL)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3;
+ (void)setCacheLimit:(unsigned int)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3;
+ (id)_artworkCacheForIdentifier:(id)arg1 requestingContext:(id)arg2;
@property(retain, nonatomic) id token; // @synthesize token=_token;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType configurationBlock; // @synthesize configurationBlock=_configurationBlock;
@property(readonly, nonatomic) NSCache *cache;
@property(nonatomic) __weak id destination; // @synthesize destination=_destination;
@property(nonatomic) __weak id <MPArtworkDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)setCacheIdentifier:(id)arg1 forRequestingContext:(id)arg2;
- (BOOL)isArtworkVisuallyIdenticalToCatalog:(id)arg1;
- (void)setDestination:(id)arg1 configurationBlock:(CDUnknownBlockType)arg2;
- (id)bestImageFromDisk;
- (void)requestImageWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) struct CGSize fittingSize; // @synthesize fittingSize=_fittingSize;
@property(readonly, nonatomic) struct CGSize scaledFittingSize;
@property(nonatomic) float destinationScale; // @synthesize destinationScale=_destinationScale;
- (void)_loadBestRepresentationIfNeeded;
- (void)_updateWithRepresentation:(id)arg1;
@property(nonatomic) __weak id requestingContext; // @synthesize requestingContext=_requestingContext;
@property(copy, nonatomic) NSString *cacheIdentifier; // @synthesize cacheIdentifier=_cacheIdentifier;
- (void)_updateRepresentation;
@property(getter=isLoadingRepresentation) BOOL loadingRepresentation; // @synthesize loadingRepresentation=_loadingRepresentation;
- (id)initWithToken:(id)arg1 dataSource:(id)arg2;

@end

