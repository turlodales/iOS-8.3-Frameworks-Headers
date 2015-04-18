//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUICatalog, CUIMutableCatalog, NSBundle, NSMapTable, NSString, UITraitCollection, _UICache;

@interface _UIAssetManager : NSObject
{
    _UICache *_imageCache;
    CUICatalog *_catalog;
    NSString *_assetManagerName;
    int _preferredIdiom;
    float _preferredScale;
    unsigned int _preferredIdiomSubtype;
    NSBundle *_bundle;
    NSMapTable *_assetMap;
    CUIMutableCatalog *_runtimeCatalog;
    long onceToken_runtimeCatalog;
    UITraitCollection *_preferredTraitCollection;
    _UIAssetManager *_starkAssetManager;
    long _starkAssetManagerOnceToken;
    BOOL _isStarkAssetManager;
    BOOL _managingUIKitAssets;
    _UIAssetManager *_nextAssetManager;
}

+ (id)sharedRuntimeCatalog;
+ (id)sharedRuntimeAssetMap;
+ (void)_convertTraitCollection:(id)arg1 toCUIScale:(float *)arg2 CUIIdiom:(int *)arg3 UIKitIdiom:(int *)arg4 subtype:(int *)arg5;
+ (int)_userInterfaceIdiomForDeviceClass:(unsigned int)arg1;
+ (id)createAssetNamed:(id)arg1 fromBundle:(id)arg2;
+ (id)assetManagerForBundle:(id)arg1;
@property(readonly, nonatomic, getter=_managingUIKitAssets) BOOL managingUIKitAssets; // @synthesize managingUIKitAssets=_managingUIKitAssets;
@property(retain, nonatomic) _UIAssetManager *nextAssetManager; // @synthesize nextAssetManager=_nextAssetManager;
@property(readonly, nonatomic) CUIMutableCatalog *runtimeCatalog;
- (void)_removeAssetFromMap:(id)arg1;
@property(readonly, nonatomic) NSString *carFileName;
- (id)_catalog;
- (id)imageNamed:(id)arg1 idiom:(int)arg2;
- (id)imageNamed:(id)arg1 idiom:(int)arg2 subtype:(unsigned int)arg3;
- (id)imageNamed:(id)arg1 scale:(float)arg2 idiom:(int)arg3 subtype:(unsigned int)arg4;
- (void)_insertAssetIntoMap:(id)arg1 forName:(id)arg2;
- (id)_assetFromMapForName:(id)arg1;
@property(retain, nonatomic) UITraitCollection *preferredTraitCollection; // @synthesize preferredTraitCollection=_preferredTraitCollection;
@property(nonatomic) float preferredScale; // @synthesize preferredScale=_preferredScale;
- (BOOL)_starkAssetManager;
- (id)imageNamed:(id)arg1 scale:(float)arg2 idiom:(int)arg3 subtype:(unsigned int)arg4 cachingOptions:(unsigned int)arg5 sizeClassPair:(CDStruct_79c71658)arg6 attachCatalogImage:(BOOL)arg7;
- (void)disableCacheFlushing;
- (void)_clearCachedResources:(id)arg1;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (BOOL)_imageBelongsToUIKit:(id)arg1;
- (id)dataNamed:(id)arg1;
- (id)imageNamed:(id)arg1;
- (id)imageNamed:(id)arg1 withTrait:(id)arg2;
- (id)initWithName:(id)arg1 inBundle:(id)arg2 idiom:(int)arg3;
- (id)description;
- (void)dealloc;

@end

