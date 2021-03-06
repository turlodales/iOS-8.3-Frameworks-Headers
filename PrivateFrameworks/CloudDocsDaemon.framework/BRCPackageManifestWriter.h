//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCAccountSession, NSError, NSOutputStream, NSString, NSURL, PBMessageStreamWriter;

@interface BRCPackageManifestWriter : NSObject
{
    BRCAccountSession *_session;
    NSString *_stageID;
    PBMessageStreamWriter *_writer;
    NSOutputStream *_stream;
    NSURL *_url;
    BOOL _sharedZone;
    NSError *_error;
}

- (BOOL)stagePackageWithReader:(id)arg1 package:(id)arg2 stageItemURL:(id)arg3 livefd:(int)arg4;
- (id)initWithSession:(id)arg1 stageID:(id)arg2 url:(id)arg3 sharedZone:(BOOL)arg4;
- (BOOL)addLocalItem:(id)arg1;
- (BOOL)_stageExistingPackageItem:(id)arg1 withLiveFd:(int)arg2 stageFd:(int)arg3;
- (void)_applyDirectoryMetadataWithManifestItem:(id)arg1 packageRootFD:(int)arg2;
- (void)_applyFileMetadataWithManifestItem:(id)arg1 packageRootFD:(int)arg2;
- (BOOL)_packageItem:(id)arg1 matchesMode:(unsigned short)arg2;
- (unsigned short)_computedFileModeForPackageItem:(id)arg1;
- (void)_applyQuarantineMetadataWithManifestItem:(id)arg1 fd:(int)arg2;
- (void)_handleStreamError;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (BOOL)addItem:(id)arg1;
- (BOOL)done;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;

@end

