//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface _NMRNowPlayingApplicationStateProtobuf : PBCodable <NSCopying>
{
    NSString *_companionBundleIdentifier;
    NSString *_localizedDisplayName;
    unsigned int _playbackState;
    NSString *_watchBundleIdentifier;
    struct {
        unsigned int playbackState:1;
    } _has;
}

@property(retain, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) BOOL hasPlaybackState;
@property(readonly, nonatomic) BOOL hasWatchBundleIdentifier;
@property(readonly, nonatomic) BOOL hasLocalizedDisplayName;
@property(readonly, nonatomic) BOOL hasCompanionBundleIdentifier;
@property(retain, nonatomic) NSString *watchBundleIdentifier; // @synthesize watchBundleIdentifier=_watchBundleIdentifier;
@property(retain, nonatomic) NSString *companionBundleIdentifier; // @synthesize companionBundleIdentifier=_companionBundleIdentifier;
@property(nonatomic) unsigned int playbackState; // @synthesize playbackState=_playbackState;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

