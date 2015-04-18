//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, UIImage;

@interface MusicArtworkTiler : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    UIImage *_placeholderImage;
    NSString *_cacheIdentifier;
    id _context;
    struct CGSize _imageSize;
}

@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void)requestTiledArtworkForPlaylist:(id)arg1 tileCount:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestTiledArtworkForCatalogs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (void).cxx_destruct;
@property(nonatomic) __weak id context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *cacheIdentifier; // @synthesize cacheIdentifier=_cacheIdentifier;

@end

