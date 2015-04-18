//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class BRCAccountSession, BRCBookmark, BRCGenerationID, BRCItemID, BRCLocalContainer, BRCServerZone, NSData, NSDirectoryEnumerator, NSNumber, NSString, NSURL;

@interface BRCRelativePath : NSObject <NSSecureCoding>
{
    NSString *_absolutePath;
    NSString *_relativePath;
    BRCRelativePath *_basePath;
    NSNumber *_volumeID;
    BRCBookmark *_bookmark;
    NSString *_symlinkContent;
    BRCGenerationID *_generationID;
    int _deviceID;
    BRCServerZone *_serverZone;
    BRCItemID *_sharedItemID;
    NSString *_sharedOwnerName;
    unsigned char _finderInfo[32];
    unsigned long long _fileID;
    unsigned short _mode;
    unsigned int _nlink;
    struct timespec _birthtime;
    struct timespec _mtime;
    long long _size;
    unsigned long long _parentFileID;
    unsigned int _documentID;
    unsigned int _fsGenerationID;
    unsigned int _flags;
    unsigned short _type;
    unsigned int _isExcluded:1;
    unsigned int _isInPackage:1;
    unsigned int _isPackageRoot:1;
    unsigned int _readFault:1;
    unsigned int _hasFinderTags:1;
    unsigned int _isBusy:1;
    unsigned int _isAlias:1;
    unsigned int _qtnResolved:1;
    int _fd;
    // Error parsing type: Ai, name: _openRefCount
    struct _opaque_pthread_rwlock_t _mutex;
    struct {
        int _field1;
        long _field2;
        long _field3;
        char *_field4;
        int _field5;
        long _field6;
        long _field7;
        int _field8;
        struct _opaque_pthread_mutex_t _field9;
        struct _telldir *_field10;
    } *_dir;
    NSDirectoryEnumerator *_descendantsEnumerator;
    BRCAccountSession *_session;
    NSData *_quarantineInfo;
}

+ (int)locateByFileID:(unsigned long long)arg1 zone:(id)arg2;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL isBusy;
@property(readonly) unsigned int parentHash;
@property(readonly, nonatomic) BRCBookmark *bookmark;
- (void)closeDirectoryScan;
- (id)nextDescendant;
- (BOOL)openDirectoryForRecursiveScan;
- (id)nextChild;
- (BOOL)openDirectoryForScanWithError:(int *)arg1;
- (BOOL)flock:(int)arg1;
@property(readonly, nonatomic) BOOL hasFinderTags;
@property(readonly, nonatomic) BOOL isHiddenFile;
@property(readonly, nonatomic) BOOL isHiddenExtension;
@property(readonly, nonatomic) unsigned int fsGenerationID;
@property(readonly, nonatomic) long birthTime;
@property(readonly, nonatomic) unsigned int hardlinkCount;
@property(readonly, nonatomic) BOOL isExcluded;
@property(readonly, nonatomic) NSString *sharedOwnerName;
- (id)logicalURLWithLogicalName:(id)arg1;
- (id)initWithPath:(id)arg1 zone:(id)arg2;
- (id)initWithRootPath:(id)arg1 session:(id)arg2;
- (BOOL)isEqualToRelativePath:(id)arg1;
- (BOOL)_resolveAndKeepOpenMustExist:(BOOL)arg1 error:(int *)arg2;
- (int)_resolveSymlinkRelativeTo:(int)arg1 path:(id)arg2;
@property(readonly, nonatomic) NSString *pathRelativeToPackageRoot;
- (int)_resolveWhenDoesntExist;
- (int)_resolveWhenExists;
- (int)_resolveBasePath;
- (BOOL)_shouldKeepBasePathOpen;
- (int)_resolvePathTypeAndContainer;
- (BOOL)_fixupRelativePath;
@property(readonly, nonatomic) NSNumber *volumeID;
@property(readonly, nonatomic) BOOL isSymLink;
@property(readonly, nonatomic) BOOL isPackageRoot;
@property(readonly, nonatomic) BOOL isUnixDir;
- (BOOL)isResolved;
@property(readonly, nonatomic) NSString *symlinkContent;
@property(readonly, nonatomic) NSData *quarantineInfo; // @synthesize quarantineInfo=_quarantineInfo;
@property(readonly, nonatomic) BOOL isWritable;
@property(readonly, nonatomic) BOOL isExecutable;
- (id)refreshFromPathMustExist:(BOOL)arg1;
- (id)_initWithPath:(id)arg1 relativeToRoot:(id)arg2;
- (BOOL)performOnOpenFileDescriptor:(CDUnknownBlockType)arg1 error:(int *)arg2;
- (id)pathWithChildAtPath:(id)arg1;
@property(readonly, nonatomic) NSString *pathRelativeToRoot;
@property(readonly, nonatomic) BRCItemID *sharedItemID;
- (id)pathOfPackageRoot;
@property(readonly, nonatomic) BOOL isInPackage;
- (BOOL)performOnOpenParentFileDescriptor:(CDUnknownBlockType)arg1 error:(int *)arg2;
- (BOOL)resolveAndKeepOpenMustExist:(BOOL)arg1 error:(int *)arg2;
- (id)initWithFileID:(unsigned long long)arg1 zone:(id)arg2;
@property(readonly, nonatomic) BRCGenerationID *generationID;
@property(readonly, nonatomic) unsigned long long fileID;
@property(readonly, nonatomic) unsigned int documentID;
- (void)_close;
@property(readonly, nonatomic) BRCServerZone *serverZone;
@property(readonly, nonatomic) BOOL isRoot;
- (BOOL)resolveMustExist:(BOOL)arg1 error:(int *)arg2;
@property(readonly, nonatomic) int deviceID;
@property(readonly, nonatomic) BRCRelativePath *root;
@property(readonly, nonatomic) unsigned long long parentFileID;
@property(readonly, nonatomic) BOOL isAlias;
@property(readonly, nonatomic) long modificationTime;
@property(readonly, nonatomic) BOOL isFile;
@property(readonly, nonatomic) NSNumber *fileObjectID;
@property(readonly, nonatomic) NSString *absolutePath;
@property(readonly, nonatomic) NSString *filename;
@property(readonly, nonatomic) NSString *faultDisplayName;
@property(readonly, nonatomic) BOOL isFault;
@property(readonly, nonatomic) BOOL isDocument;
@property(readonly, nonatomic) BOOL exists;
@property(readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) unsigned long fileType;
- (void).cxx_destruct;
- (void)close;
@property(readonly, nonatomic) BRCLocalContainer *container;
@property(readonly, nonatomic) unsigned short type;
@property(readonly, nonatomic) NSURL *url;
- (id)description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) long long size;
- (void)dealloc;

@end
