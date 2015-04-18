//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMFDevice, FMFFriendshipRequest, FMFHandle, NSDate, NSNumber, NSSet, NSString;

@protocol FMFXPCServerProtocol <NSObject>
- (oneway void)setExpiredInitTimestamp;
- (oneway void)sessionWasCreatedRefresh;
- (oneway void)forceRefresh;
- (oneway void)getAllLocations:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)invalidateMappingPackets:(NSSet *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)importMappingPacket:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)stopSharingMyLocationToFamilyMemberWithDSID:(NSNumber *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)startSharingMyLocationToFamilyMemberWithDSID:(NSNumber *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)getHandlesWithPendingOffers:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)getOfferExpirationForHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 completion:(void (^)(NSDate *, NSError *))arg4;
- (oneway void)getPendingFriendshipRequestsWithCompletion:(void (^)(NSSet *, NSSet *, NSError *))arg1;
- (oneway void)stopSharingMyLocationWithHandles:(NSSet *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 completion:(void (^)(NSString *, NSError *))arg4;
- (oneway void)stopSharingMyLocationWithHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 completion:(void (^)(NSString *, NSError *))arg4;
- (oneway void)declineFriendshipRequest:(FMFFriendshipRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)approveFriendshipRequest:(FMFFriendshipRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)sendFriendshipInviteToHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 endDate:(NSDate *)arg4 completion:(void (^)(NSString *, NSError *))arg5;
- (oneway void)extendFriendshipOfferToHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 endDate:(NSDate *)arg4 completion:(void (^)(NSString *, NSError *))arg5;
- (oneway void)sendFriendshipOfferToHandles:(NSSet *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 endDate:(NSDate *)arg4 completion:(void (^)(NSString *, NSError *))arg5;
- (oneway void)removeDevice:(FMFDevice *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)getAbRecordIdForHandle:(FMFHandle *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (oneway void)getPrettyNameForHandle:(FMFHandle *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)isNetworkReachable:(void (^)(BOOL, NSError *))arg1;
- (oneway void)allDevices:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)deviceSharingLocation:(void (^)(FMFDevice *, NSError *))arg1;
- (oneway void)getPendingMappingPacketsForHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 completion:(void (^)(NSArray *, NSArray *, NSError *))arg3;
- (oneway void)canShareLocationWithHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 completion:(void (^)(BOOL, NSString *, NSError *))arg4;
- (oneway void)setActiveDevice:(FMFDevice *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)isMyLocationEnabled:(void (^)(BOOL, NSError *))arg1;
- (oneway void)setHideMyLocationEnabled:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)canGetLocationForHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 completion:(void (^)(BOOL, NSString *, NSError *))arg4;
- (oneway void)getHandlesSharingMyLocationWithGroupId:(NSString *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (oneway void)getHandlesSharingMyLocation:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)getHandlesSharingLocationsWithMeWithGroupId:(NSString *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (oneway void)getHandlesSharingLocationsWithMe:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)locationForHandle:(FMFHandle *)arg1 completion:(void (^)(FMFLocation *, NSString *, NSError *))arg2;
- (oneway void)getCurrentTrackedHandles:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)removeFriendHandles:(NSSet *)arg1;
- (oneway void)addFriendHandles:(NSSet *)arg1;
- (oneway void)fetchLocationForHandles:(NSSet *)arg1 callerId:(FMFHandle *)arg2 priority:(int)arg3 completion:(void (^)(NSError *, NSString *))arg4;
- (oneway void)fetchLocationForHandle:(FMFHandle *)arg1 callerId:(FMFHandle *)arg2 priority:(int)arg3 completion:(void (^)(NSError *, NSString *))arg4;
@end

