//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface VSKeepAlive : NSObject
{
    NSXPCConnection *_serverConnection;
    int _audioType;
    BOOL _active;
    BOOL _keepAudioSessionActive;
}

@property(nonatomic) BOOL keepAudioSessionActive; // @synthesize keepAudioSessionActive=_keepAudioSessionActive;
@property(nonatomic) int audioType; // @synthesize audioType=_audioType;
- (id)_remoteKeepAlive;
- (void)_ensureKeepAliveMaintenance;
- (id)_serverConnection;
- (void).cxx_destruct;
@property(nonatomic) BOOL active; // @synthesize active=_active;
- (void)dealloc;

@end

