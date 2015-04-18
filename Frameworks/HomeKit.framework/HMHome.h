//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMMessageReceiver.h"
#import "NSSecureCoding.h"

@class HMHomeManager, HMMessageDispatcher, HMPendingRequests, HMRoom, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMHome : NSObject <NSSecureCoding, HMMessageReceiver>
{
    BOOL _primary;
    id <HMHomeDelegate> _delegate;
    NSString *_name;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMMessageDispatcher *_msgDispatcher;
    HMHomeManager *_homeManager;
    HMPendingRequests *_pendingRequests;
    HMRoom *_homeAsRoom;
    NSMutableArray *_currentAccessories;
    NSMutableArray *_currentRooms;
    NSMutableArray *_currentZones;
    NSMutableArray *_currentServiceGroups;
    NSMutableArray *_currentActionSets;
    NSMutableArray *_currentActions;
    NSMutableArray *_currentTriggers;
    NSMutableArray *_currentUsers;
    NSArray *_actions;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy, nonatomic) NSArray *triggers;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSMutableArray *currentRooms; // @synthesize currentRooms=_currentRooms;
@property(retain, nonatomic) HMPendingRequests *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) NSMutableArray *currentActions; // @synthesize currentActions=_currentActions;
- (void)writeCharacteristicValues:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)accessoryWithUUID:(id)arg1;
- (id)triggerWithUUID:(id)arg1;
- (id)triggerWithName:(id)arg1;
- (id)actionSetWithName:(id)arg1;
- (id)serviceGroupWithUUID:(id)arg1;
- (id)serviceGroupWithName:(id)arg1;
- (id)zoneWithUUID:(id)arg1;
- (id)zoneWithName:(id)arg1;
- (id)roomWithName:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *users;
@property(readonly, copy, nonatomic) NSArray *zones;
@property(readonly, copy, nonatomic) NSArray *rooms;
@property(readonly, copy, nonatomic) NSArray *serviceGroups;
- (id)roomForEntireHome;
- (id)roomWithUUID:(id)arg1;
@property(nonatomic) __weak HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) NSMutableArray *currentActionSets; // @synthesize currentActionSets=_currentActionSets;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)actionSetWithUUID:(id)arg1;
@property(retain, nonatomic) HMMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly, copy, nonatomic) NSArray *actionSets;
@property(nonatomic, getter=isPrimary) BOOL primary; // @synthesize primary=_primary;
@property(readonly, copy, nonatomic) NSArray *accessories;
- (id)initWithName:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void)invalidate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <HMHomeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)removeTrigger:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addTrigger:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)executeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addActionSetWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeUserWithoutConfirmation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addUserWithoutConfirmation:(id)arg1 privilege:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getPrivilegeForUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addUserWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_createFailedAccessoriesListFromError:(id)arg1;
- (void)_removeUser:(id)arg1 confirm:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_addUser:(id)arg1 privilege:(unsigned int)arg2 confirm:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)removeServiceGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addServiceGroupWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addZoneWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addRoomWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)readCharacteristicValues:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)unblockAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)servicesWithTypes:(id)arg1;
- (void)assignAccessory:(id)arg1 toRoom:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addAccessory:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSMutableArray *currentUsers; // @synthesize currentUsers=_currentUsers;
@property(retain, nonatomic) NSMutableArray *currentTriggers; // @synthesize currentTriggers=_currentTriggers;
@property(retain, nonatomic) NSMutableArray *currentServiceGroups; // @synthesize currentServiceGroups=_currentServiceGroups;
@property(retain, nonatomic) NSMutableArray *currentZones; // @synthesize currentZones=_currentZones;
@property(retain, nonatomic) NSMutableArray *currentAccessories; // @synthesize currentAccessories=_currentAccessories;
@property(retain, nonatomic) HMRoom *homeAsRoom; // @synthesize homeAsRoom=_homeAsRoom;
- (void)migrateDelegatesToHome:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)unconfigureHome;
- (void)configure:(id)arg1 uuid:(id)arg2 primary:(BOOL)arg3 messageDispatcher:(id)arg4 pendingRequests:(id)arg5;
- (void)_removeServices:(id)arg1;
- (void)_handleMultipleCharacteristicValuesUpdated:(id)arg1;
- (void)_handlePairedAccessoryErrorNotification:(id)arg1;
- (void)_handleBlockedStateNotification:(id)arg1;
- (void)handleUserRemovedNotification:(id)arg1;
- (void)handleUserAddedNotification:(id)arg1;
- (void)handleAccessoryRemovedNotification:(id)arg1;
- (void)handleAccessoryAddedNotification:(id)arg1;
- (void)handleTriggerRemovedNotification:(id)arg1;
- (void)handleTriggerAddedNotification:(id)arg1;
- (void)handleActionSetRemovedNotification:(id)arg1;
- (void)handleActionSetAddedNotification:(id)arg1;
- (void)handleServiceGroupRemovedNotification:(id)arg1;
- (void)handleServiceGroupAddedNotification:(id)arg1;
- (void)handleZoneRemovedNotification:(id)arg1;
- (void)handleZoneAddedNotification:(id)arg1;
- (void)handleRoomRemovedNotification:(id)arg1;
- (void)handleRoomAddedNotification:(id)arg1;
- (void)handleHomeRenamedNotification:(id)arg1;
- (void)removeServices:(id)arg1;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_registerNotificationHandlers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

