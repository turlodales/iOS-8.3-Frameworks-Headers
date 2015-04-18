//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface ICCameraFileProperties : NSObject
{
    long long _fileSize;
    BOOL _hasThumbnail;
    BOOL _hasMetadata;
    BOOL _raw;
    int _fetchingThumbnailLock;
    BOOL _fetchingThumbnail;
    int _fetchingMetadataLock;
    BOOL _fetchingMetadata;
    struct CGImage *_originalThumbnail;
    struct CGImage *_thumbnail;
    NSMutableDictionary *_metadata;
    NSMutableDictionary *_metadata_hidden;
    unsigned int _orientation;
    BOOL _hasOverriddenOrientation;
    double _duration;
    NSString *_burstUUID;
    BOOL _burstFavorite;
    BOOL _burstPicked;
    BOOL _highFramerate;
    BOOL _timeLapse;
    NSMutableArray *_sidecarFiles;
}

- (void)finalize;
@property long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain) NSMutableArray *sidecarFiles; // @synthesize sidecarFiles=_sidecarFiles;
@property(retain) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
@property(getter=isRaw) BOOL raw; // @synthesize raw=_raw;
@property BOOL timeLapse; // @synthesize timeLapse=_timeLapse;
@property BOOL highFramerate; // @synthesize highFramerate=_highFramerate;
@property BOOL burstFavorite; // @synthesize burstFavorite=_burstFavorite;
@property BOOL burstPicked; // @synthesize burstPicked=_burstPicked;
@property(retain) NSString *burstUUID; // @synthesize burstUUID=_burstUUID;
@property BOOL hasOverriddenOrientation; // @synthesize hasOverriddenOrientation=_hasOverriddenOrientation;
@property(retain) NSMutableDictionary *metadata_hidden; // @synthesize metadata_hidden=_metadata_hidden;
@property BOOL hasMetadata; // @synthesize hasMetadata=_hasMetadata;
@property BOOL fetchingMetadata;
@property BOOL fetchingThumbnail;
@property struct CGImage *originalThumbnail; // @dynamic originalThumbnail;
@property BOOL hasThumbnail; // @synthesize hasThumbnail=_hasThumbnail;
@property struct CGImage *thumbnail; // @dynamic thumbnail;
@property unsigned int orientation; // @synthesize orientation=_orientation;
@property double duration; // @synthesize duration=_duration;
- (void)dealloc;

@end

