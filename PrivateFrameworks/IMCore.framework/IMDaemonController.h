//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMDaemonListener, IMLocalObject, IMRemoteObject<IMRemoteDaemonProtocol>, NSArray, NSLock, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSProtocolChecker, NSRecursiveLock, NSString;

@interface IMDaemonController : NSObject
{
    id _delegate;
    IMRemoteObject<IMRemoteDaemonProtocol> *_remoteObject;
    NSMutableDictionary *_listenerMap;
    IMLocalObject *_localObject;
    IMDaemonListener *_daemonListener;
    NSMutableArray *_services;
    NSProtocolChecker *_protocol;
    NSString *_listenerID;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    NSRecursiveLock *_connectionLock;
    NSArray *_servicesToAllow;
    NSArray *_servicesToDeny;
    struct __CFRunLoopSource *_runLoopSource;
    NSLock *_blockingLock;
    BOOL _hasCheckedForDaemon;
    BOOL _preventReconnect;
    BOOL _inBlockingConnect;
    BOOL _acquiringDaemonConnection;
    BOOL _autoReconnect;
    BOOL _blocksConnectionAtResume;
    BOOL _hasBeenSuspended;
    unsigned int _gMyFZListenerCapabilities;
    unsigned int _cachedCapabilities;
    unsigned int _lastUpdatedCapabilities;
}

+ (void)_setApplicationWillTerminate;
+ (BOOL)_applicationWillTerminate;
+ (void)_blockUntilSendQueueIsEmpty;
+ (id)sharedController;
+ (id)sharedInstance;
@property(readonly, nonatomic) BOOL isConnected;
@property(readonly, nonatomic) BOOL isConnecting;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_remoteMessageQueue; // @synthesize _remoteMessageQueue;
@property(retain, setter=_setServicesToDeny:) NSArray *_servicesToDeny; // @synthesize _servicesToDeny;
@property(retain, setter=_setServicesToAllow:) NSArray *_servicesToAllow; // @synthesize _servicesToAllow;
@property(retain, nonatomic, setter=_setListenerID:) NSString *_listenerID; // @synthesize _listenerID;
- (void)setDaemonLogsOutWithoutStatusListeners:(BOOL)arg1;
- (void)setDaemonTerminatesWithoutListeners:(BOOL)arg1;
- (void)listener:(id)arg1 setValue:(id)arg2 ofPersistentProperty:(id)arg3;
- (void)listener:(id)arg1 setValue:(id)arg2 ofProperty:(id)arg3;
- (void)listener:(id)arg1 setListenerCapabilities:(unsigned int)arg2;
- (BOOL)_acquiringDaemonConnection;
@property(nonatomic, setter=_setBlocksConnectionAtResume:) BOOL _blocksConnectionAtResume; // @synthesize _blocksConnectionAtResume;
- (void)setMyStatus:(unsigned int)arg1 message:(id)arg2;
- (void)setMyProfile:(id)arg1;
- (void)setMyPicture:(id)arg1 smallPictureData:(id)arg2;
- (id)_remoteObject;
- (BOOL)removeListenerID:(id)arg1;
- (BOOL)addListenerID:(id)arg1 capabilities:(unsigned int)arg2;
- (void)disconnectFromDaemon;
- (void)disconnectFromDaemonWithForce:(BOOL)arg1;
- (void)_handleDaemonException:(id)arg1;
- (void)_agentDidLaunchNotification:(id)arg1;
- (void)setMyStatus:(unsigned int)arg1 message:(id)arg2 forAccount:(id)arg3;
- (void)_listenerSetUpdated;
- (BOOL)setCapabilities:(unsigned int)arg1 forListenerID:(id)arg2;
- (BOOL)hasListenerForID:(id)arg1;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned int)arg2 blockUntilConnected:(BOOL)arg3;
- (void)_connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned int)arg2;
- (BOOL)_makeConnectionWithLaunch:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(setter=_setAutoReconnect:) BOOL _autoReconnect; // @synthesize _autoReconnect;
- (BOOL)connectToDaemon;
- (BOOL)localObjectExists;
- (void)_blockUntilSendQueueIsEmpty;
- (void)localObjectDiedNotification:(id)arg1;
- (void)remoteObjectDiedNotification:(id)arg1;
- (BOOL)remoteObjectExists;
- (BOOL)__isRemoteObjectValidOnQueue:(id)arg1;
- (BOOL)__isLocalObjectValidOnQueue:(id)arg1;
- (void)_disconnectFromDaemonWithForce:(BOOL)arg1;
- (void)_remoteObjectCleanup;
- (void)_localObjectCleanup;
@property(setter=__setCapabilities:) unsigned int _capabilities; // @synthesize _capabilities=_gMyFZListenerCapabilities;
- (void)_addressBookChanged:(id)arg1;
- (void)_noteSetupComplete;
- (void)sendABInformationToDaemon;
- (unsigned int)capabilitiesForListenerID:(id)arg1;
- (void)_setCapabilities:(unsigned int)arg1;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1;
- (void)blockUntilConnected;
@property(readonly, nonatomic) unsigned int capabilities;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
@property(readonly, nonatomic) IMDaemonListener *listener; // @synthesize listener=_daemonListener;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

@end

