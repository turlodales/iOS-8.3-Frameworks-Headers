//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPSkipTrackCommandEvent : MPRemoteCommandEvent
{
    BOOL _requestingDefermentToPlaybackQueuePosition;
}

@property(readonly, nonatomic, getter=isRequestingDefermentToPlaybackQueuePosition) BOOL requestingDefermentToPlaybackQueuePosition; // @synthesize requestingDefermentToPlaybackQueuePosition=_requestingDefermentToPlaybackQueuePosition;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end

