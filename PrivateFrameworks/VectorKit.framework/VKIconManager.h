//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOResourceManifestTileGroupObserver.h"

@class NSArray, NSLock, NSMapTable, NSMutableDictionary, NSString, VKResourceManager, _VKLocalIconAtlas;

@interface VKIconManager : NSObject <GEOResourceManifestTileGroupObserver>
{
    _VKLocalIconAtlas *_localAtlas;
    unsigned int _tileGroupIdentifier;
    VKResourceManager *_resourceManager;
    NSMapTable *_atlases;
    NSLock *_atlasesLock;
    NSArray *_nonRegionalResourceNames;
    NSMutableDictionary *_nameToStyleManager;
}

+ (id)sharedManager;
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(float)arg3 size:(int)arg4 customIconID:(unsigned long long)arg5;
- (id)imageForName:(id)arg1 contentScale:(float)arg2;
- (id)_allResourceNames;
- (id)_forEachIconPackWithContentScale:(float)arg1 iconSize:(int)arg2 resourceNames:(id)arg3 visitUntilMatch:(CDUnknownBlockType)arg4;
- (id)_nonRegionalPacks;
- (id)_atlasForName:(id)arg1;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 attributeValue:(unsigned int)arg2 withResourceNames:(id)arg3 style:(CDStruct_5977520b *)arg4 contentScale:(float)arg5 size:(int)arg6;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 longAttributeValue:(unsigned long long)arg2 withResourceNames:(id)arg3 style:(CDStruct_5977520b *)arg4 contentScale:(float)arg5 size:(int)arg6;
- (id)artworkForFeatureID:(unsigned long long)arg1 withResourceNames:(id)arg2 style:(CDStruct_5977520b *)arg3 contentScale:(float)arg4 size:(int)arg5;
- (id)artworkForName:(id)arg1 withResourceNames:(id)arg2 style:(CDStruct_5977520b *)arg3 contentScale:(float)arg4 size:(int)arg5;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)initWithTileGroupIdentifier:(unsigned int)arg1 resourceManager:(id)arg2;
- (void)purge;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

