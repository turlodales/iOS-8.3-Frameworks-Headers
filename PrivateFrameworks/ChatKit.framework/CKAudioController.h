//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKAudioPlayerDelegate.h"

@class CKAudioPlayer, CKMediaObject, NSArray, NSMutableArray, NSString;

@interface CKAudioController : NSObject <CKAudioPlayerDelegate>
{
    unsigned int _currentIndex;
    BOOL _shouldUseSpeaker;
    BOOL _playing;
    BOOL _paused;
    BOOL _interrupted;
    NSMutableArray *_mediaObjects;
    id <CKAudioControllerDelegate> _delegate;
    CKAudioPlayer *_audioPlayer;
}

@property(nonatomic, getter=isPlaying) BOOL playing; // @synthesize playing=_playing;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) double currentMediaObjectDuration;
- (void)addMediaObjects:(id)arg1;
- (void)audioPlayerCurrentTimeDidChange:(id)arg1;
@property(nonatomic) BOOL interrupted; // @synthesize interrupted=_interrupted;
- (void)playListenEndSound:(CDUnknownBlockType)arg1;
- (void)playListenSound:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) CKAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
- (void)audioPlayerDidFinishPlaying:(id)arg1;
@property(nonatomic) BOOL shouldUseSpeaker; // @synthesize shouldUseSpeaker=_shouldUseSpeaker;
- (void)audioSessionInterruption:(id)arg1;
@property(retain, nonatomic, setter=_setMediaObjects:) NSMutableArray *_mediaObjects; // @synthesize _mediaObjects;
- (void)addMediaObject:(id)arg1;
@property(readonly, nonatomic) double currentMediaObjectTime;
@property(readonly, retain, nonatomic) CKMediaObject *currentMediaObject;
- (id)initWithMediaObjects:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *mediaObjects;
- (void)pause;
- (void)stop;
@property(nonatomic) id <CKAudioControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)play;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
