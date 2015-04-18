//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSDictionary, NSString;

@interface PLCloudSharingInvitationChangeJob : PLCloudSharingJob
{
    NSArray *_MSASSharingRelationships;
    NSString *_albumGUID;
    NSString *_resendInvitationGUID;
    NSDictionary *_mstreamdInfoDictionary;
    long long _relationshipChangeType;
    long long _jobType;
}

+ (void)resendPendingInvitationWithGUID:(id)arg1 albumGUID:(id)arg2;
+ (void)saveServerStateLocallyForSharingInvitationRelationships:(id)arg1 changeType:(long long)arg2 info:(id)arg3;
+ (void)saveServerStateLocallyForSharingACLRelationships:(id)arg1 changeType:(long long)arg2 info:(id)arg3;
+ (void)sendServerPendingInvitationsForAlbumWithGUID:(id)arg1;
- (void)executeSendServerPendingInvitationsForAlbumWithGUID;
- (void)executeSaveServerStateLocallyForSharingInvitationRelationships;
- (void)executeSaveServerStateLocallyForSharingACLRelationships;
@property(retain, nonatomic) NSString *resendInvitationGUID; // @synthesize resendInvitationGUID=_resendInvitationGUID;
@property(nonatomic) long long relationshipChangeType; // @synthesize relationshipChangeType=_relationshipChangeType;
@property(retain, nonatomic) NSArray *MSASSharingRelationships; // @synthesize MSASSharingRelationships=_MSASSharingRelationships;
@property(retain, nonatomic) NSString *albumGUID; // @synthesize albumGUID=_albumGUID;
@property(nonatomic) long long jobType; // @synthesize jobType=_jobType;
@property(retain, nonatomic) NSDictionary *mstreamdInfoDictionary; // @synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary;
- (BOOL)shouldArchiveXPCToDisk;
- (long long)daemonOperation;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;
- (void)run;
- (id)description;
- (void)dealloc;

@end

