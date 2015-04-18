//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCLocalItem, BRCRelativePath, BRCServerItem, BRCServerZone, NSURL;

@interface BRCItemToPathLookup : NSObject
{
    BRCLocalItem *_item;
    BRCServerItem *_serverItem;
    BRCServerZone *_serverZone;
    BRCRelativePath *_parentPath;
    BRCRelativePath *_matchByFileID;
    BRCRelativePath *_matchByDocumentID;
    BRCRelativePath *_matchByEnclosure;
    BRCRelativePath *_matchByPath;
    unsigned long long _parentFileID;
    BOOL _fileSystemIDMayStillExist;
    BOOL _cleanupFaults;
    struct {
        unsigned int byFileID:1;
        unsigned int byDocumentID:1;
        unsigned int byEnclosure:1;
        unsigned int byPath:1;
        unsigned int parent:1;
    } _fetched;
}

+ (id)resolveEnclosureWithPath:(id)arg1 cleanupFaults:(BOOL)arg2;
+ (id)lookupForServerItem:(id)arg1 cleanupFaults:(BOOL)arg2;
+ (id)lookupForItem:(id)arg1;
+ (id)_resolveEnclosureWithEnclosureFd:(int)arg1 serverZone:(id)arg2 expectedDocumentID:(unsigned int)arg3 expectedFileName:(id)arg4 cleanupFaults:(BOOL)arg5;
@property(readonly, nonatomic) BOOL fileSystemIDMayStillExist;
- (BOOL)_fetchByEnclosure;
- (BOOL)computeLogicalPath:(id *)arg1 physicalPath:(id *)arg2 isDirectory:(char *)arg3;
@property(readonly, nonatomic) BRCRelativePath *parentPath;
- (void)_fetchParent;
- (id)initWithServerItem:(id)arg1 cleanupFaults:(BOOL)arg2;
@property(readonly, nonatomic) BRCRelativePath *byPath;
- (BOOL)_fetchByDocumentID;
- (BOOL)_fetchByFileID;
- (BOOL)_fetchByPath;
- (void)closePaths;
@property(readonly, nonatomic) BRCRelativePath *byFileSystemID;
@property(readonly, nonatomic) NSURL *coordinationURL;
- (void).cxx_destruct;
- (id)initWithItem:(id)arg1;
- (id)description;
- (void)dealloc;

@end

