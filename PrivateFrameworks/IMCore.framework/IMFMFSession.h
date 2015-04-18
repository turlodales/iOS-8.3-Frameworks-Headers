//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMFSessionDelegate.h"

@class FMFDevice, FMFSession, NSString;

@interface IMFMFSession : NSObject <FMFSessionDelegate>
{
    FMFSession *_session;
    NSString *_establishingAccountID;
    FMFDevice *_activeDevice;
}

+ (id)sharedInstance;
- (void)friendshipWasRemoved:(id)arg1;
- (void)friendshipRequestReceived:(id)arg1;
- (void)stopTrackingLocationForHandle:(id)arg1;
- (void)startTrackingLocationForHandle:(id)arg1;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
- (void)didUpdateHidingStatus:(BOOL)arg1;
- (void)didStopAbilityToGetLocationForHandle:(id)arg1;
- (void)didStartAbilityToGetLocationForHandle:(id)arg1;
- (void)didStopSharingMyLocationWithHandle:(id)arg1;
- (void)didStartSharingMyLocationWithHandle:(id)arg1;
- (void)didReceiveLocation:(id)arg1;
- (void)_postRelationshipStatusDidChangeNotificationWithHandle:(id)arg1;
@property(retain, nonatomic) FMFDevice *activeDevice; // @synthesize activeDevice=_activeDevice;
- (BOOL)fmfHandleIsFollowingMyLocation:(id)arg1;
- (BOOL)fmfHandleIsSharingLocationWithMe:(id)arg1;
- (void)_postNotification:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (id)locationForFMFHandle:(id)arg1;
- (id)_callerIDForChat:(id)arg1;
- (id)fmfGroupIdOneToOne;
- (id)fmfGroupIdGroup;
@property(retain, nonatomic) NSString *establishingAccountID; // @synthesize establishingAccountID=_establishingAccountID;
- (void)_updateActiveDevice;
- (Class)__FMFSessionClass;
- (void)stopTrackingLocationForChat:(id)arg1;
- (void)startTrackingLocationForChat:(id)arg1;
- (void)stopSharingWithChat:(id)arg1;
- (void)startSharingWithChat:(id)arg1 untilDate:(id)arg2;
- (BOOL)allChatParticipantsSharingLocationWithMe:(id)arg1;
- (BOOL)chatHasSiblingParticipantsSharingLocationWithMe:(id)arg1;
- (BOOL)chatHasParticipantsSharingLocationWithMe:(id)arg1;
- (BOOL)allChatParticipantsFollowingMyLocation:(id)arg1;
- (BOOL)chatHasParticipantsFollowingMyLocation:(id)arg1;
- (id)fmfHandlesForChat:(id)arg1;
- (BOOL)handleIsFollowingMyLocation:(id)arg1;
- (BOOL)handleIsSharingLocationWithMe:(id)arg1;
- (id)_bestAccountForAddresses:(id)arg1;
@property(retain, nonatomic) FMFSession *session; // @synthesize session=_session;
- (void)refreshLocationForHandle:(id)arg1 inChat:(id)arg2;
- (id)locationForHandle:(id)arg1;
- (void)makeThisDeviceActiveDevice;
- (id)locationForHandleOrSibling:(id)arg1;
- (id)timedOfferExpirationForChat:(id)arg1;
- (void)refreshLocationForChat:(id)arg1;
@property(readonly, nonatomic) BOOL restrictLocationSharing;
- (id)allSiblingFMFHandlesForChat:(id)arg1;
@property(readonly, nonatomic) BOOL disableLocationSharing;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

