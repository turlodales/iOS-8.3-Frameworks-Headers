//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, NSURL, SUPlayerStatus;

@interface SUScriptAudioPlayer : SUScriptObject
{
    SUPlayerStatus *_playerStatus;
    NSURL *_url;
    NSURL *_keyUrl;
    NSURL *_certificateUrl;
}

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;
@property(readonly) int playerStateUnplayed;
@property(readonly) int playerStatePaused;
@property(readonly) int playerStateFinished;
@property(readonly) int playerStateFailed;
@property(readonly) int playerStateBuffering;
@property(readonly) int playerStateActive;
@property(readonly) NSString *nowPlayingKeyTitle;
@property(readonly) NSString *nowPlayingKeyPlaybackDuration;
@property(readonly) NSString *nowPlayingKeyPersistentID;
@property(readonly) NSString *nowPlayingKeyGenre;
@property(readonly) NSString *nowPlayingKeyDiscNumber;
@property(readonly) NSString *nowPlayingKeyDiscCount;
@property(readonly) NSString *nowPlayingKeyComposer;
@property(readonly) NSString *nowPlayingKeyArtwork;
@property(readonly) NSString *nowPlayingKeyArtist;
@property(readonly) NSString *nowPlayingKeyAlbumTrackNumber;
@property(readonly) NSString *nowPlayingKeyAlbumTrackCount;
@property(readonly) NSString *nowPlayingKeyAlbumTitle;
- (id)initWithURL:(id)arg1 keyURL:(id)arg2 certificateURL:(id)arg3;
- (void)_audioPlayerStateChangeNotification:(id)arg1;
- (void)setValue:(id)arg1 forNowPlayingKey:(id)arg2;
@property(readonly) NSString *keyURL;
@property(readonly) NSString *certificateURL;
- (id)attributeKeys;
@property(readonly) double currentTime;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)pause;
@property(readonly) NSString *URL;
- (void)stop;
@property(readonly) double duration;
@property(readonly) int state;
- (void)dealloc;
- (void)play;

@end

