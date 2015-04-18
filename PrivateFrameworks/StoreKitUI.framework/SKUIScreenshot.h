//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "SKUICacheCoding.h"

@class NSMutableDictionary, NSString;

@interface SKUIScreenshot : NSObject <NSCopying, SKUICacheCoding>
{
    NSString *_orientation;
    long long _uniqueIdentifier;
    NSMutableDictionary *_urls;
    NSMutableDictionary *_sizes;
}

- (id)URLForVariant:(id)arg1;
- (struct CGSize)sizeForVariant:(id)arg1;
- (id)initWithScreenshotDictionary:(id)arg1;
- (id)_firstVariant;
- (void)_addURLsFromDictionary:(id)arg1 withRemoteLocalKeysMap:(id)arg2;
- (id)_initSKUIScreenshot;
@property(readonly, nonatomic) int numberOfVariants;
- (void)setArtwork:(id)arg1 forVariant:(id)arg2;
@property(readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
@property(readonly, nonatomic) NSString *orientationString; // @synthesize orientationString=_orientation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

