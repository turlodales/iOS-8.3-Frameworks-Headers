//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RMSTouchRemoteSocketDelegate.h"

@class NSString, RMSDAAPRequestManager, RMSTouchRemoteSocket;

@interface RMSDAAPTouchRemoteManager : NSObject <RMSTouchRemoteSocketDelegate>
{
    RMSDAAPRequestManager *_requestManager;
    RMSTouchRemoteSocket *_socket;
    int _controlPromptRevision;
    int _encryptionKey;
    int _portSecret;
    int _port;
    float _touchDistanceMin;
    float _touchDistanceMax;
    unsigned long _touchTimeMin;
    unsigned long _touchTimeMax;
    id <RMSDAAPTouchRemoteManagerDelegate> _delegate;
}

- (void)_requestPortInfo;
- (void)_parsePortInfoItems:(id)arg1;
- (unsigned long)_timeForDirection:(int)arg1 repeatCount:(int)arg2;
- (struct CGPoint)_locationForDirection:(int)arg1 repeatCount:(int)arg2;
- (void)_requestPromptUpdate:(CDUnknownBlockType)arg1;
- (void)_createSocket;
- (void)initiateControlWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendNavigationCommand:(int)arg1;
- (void)sendTouchEndWithDirection:(int)arg1 repeatCount:(int)arg2;
- (void)sendTouchMoveWithDirection:(int)arg1 repeatCount:(int)arg2;
- (id)initWithRequestManager:(id)arg1;
- (void)touchRemoteSocketDidDisconnect:(id)arg1;
- (void)touchRemoteSocketDidConnect:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <RMSDAAPTouchRemoteManagerDelegate> delegate; // @synthesize delegate=_delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
