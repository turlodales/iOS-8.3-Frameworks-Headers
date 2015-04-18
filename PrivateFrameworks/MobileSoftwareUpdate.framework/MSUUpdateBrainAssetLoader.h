//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASAsset;

@interface MSUUpdateBrainAssetLoader : NSObject
{
    ASAsset *_updateAsset;
}

- (id)initWithUpdateAsset:(id)arg1;
@property(retain, nonatomic) ASAsset *updateAsset; // @synthesize updateAsset=_updateAsset;
- (long long)requiredDiskSpace:(id *)arg1;
- (_Bool)purgeUpdateBrains:(id *)arg1;
- (void)adjustOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadUpdateBrainWithOptions:(id)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (BOOL)cancel:(id *)arg1;
- (void)dealloc;

@end

