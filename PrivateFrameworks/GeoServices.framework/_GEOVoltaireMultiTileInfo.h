//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOTileKeyList, NSURL;

@interface _GEOVoltaireMultiTileInfo : NSObject
{
    GEOTileKeyList *_keys;
    NSURL *_url;
    BOOL _useStatusCodes;
}

- (void)appendKey:(struct _GEOTileKey *)arg1;
- (id)initWithURL:(id)arg1 useStatusCodes:(BOOL)arg2;
@property(readonly, nonatomic) BOOL useStatusCodes; // @synthesize useStatusCodes=_useStatusCodes;
@property(readonly, nonatomic) GEOTileKeyList *keys; // @synthesize keys=_keys;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)dealloc;

@end

