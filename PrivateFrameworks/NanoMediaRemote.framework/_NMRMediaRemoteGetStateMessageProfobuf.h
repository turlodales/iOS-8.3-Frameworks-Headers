//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

@interface _NMRMediaRemoteGetStateMessageProfobuf : PBCodable <NSCopying>
{
    double _timestamp;
    NSData *_applicationInfoDigest;
    NSData *_knownDigest;
    NSData *_nowPlayingInfoDigest;
    int _state;
    NSData *_supportedCommandsDigest;
    CDStruct_9b124259 _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSData *knownDigest; // @synthesize knownDigest=_knownDigest;
@property(readonly, nonatomic) BOOL hasSupportedCommandsDigest;
@property(readonly, nonatomic) BOOL hasApplicationInfoDigest;
@property(readonly, nonatomic) BOOL hasNowPlayingInfoDigest;
@property(readonly, nonatomic) BOOL hasKnownDigest;
@property(retain, nonatomic) NSData *supportedCommandsDigest; // @synthesize supportedCommandsDigest=_supportedCommandsDigest;
@property(retain, nonatomic) NSData *applicationInfoDigest; // @synthesize applicationInfoDigest=_applicationInfoDigest;
@property(retain, nonatomic) NSData *nowPlayingInfoDigest; // @synthesize nowPlayingInfoDigest=_nowPlayingInfoDigest;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) BOOL hasState;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int state; // @synthesize state=_state;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end
