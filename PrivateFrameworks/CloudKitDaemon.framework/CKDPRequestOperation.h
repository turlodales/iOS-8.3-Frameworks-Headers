//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPAssetUploadTokenRetrieveRequest, CKDPDeleteCommentRequest, CKDPDeleteContainerRequest, CKDPGetCommentRequest, CKDPGetCommentsRequest, CKDPGetLikesRequest, CKDPLikeRequest, CKDPMescalCertificateRequest, CKDPMescalSessionInfoRequest, CKDPMescalSignatureRequest, CKDPNotificationMarkReadRequest, CKDPNotificationSyncRequest, CKDPOperation, CKDPPkiRegisterRequest, CKDPPkiRetrieveRequest, CKDPPostCommentRequest, CKDPPromoteContainerSchemaRequest, CKDPPulseRequest, CKDPQueryRetrieveRequest, CKDPRecordDeleteRequest, CKDPRecordRetrieveChangesRequest, CKDPRecordRetrieveRequest, CKDPRecordRetrieveVersionsRequest, CKDPRecordSaveRequest, CKDPRequestOperationHeader, CKDPResetContainerRequest, CKDPSetBadgeCountRequest, CKDPShareAcceptRequest, CKDPShareDeleteRequest, CKDPShareRetrieveRequest, CKDPShareSaveRequest, CKDPShareTokenDeleteRequest, CKDPShareTokenRetrieveRequest, CKDPShareTokenSaveRequest, CKDPSubscriptionCreateRequest, CKDPSubscriptionDeleteRequest, CKDPSubscriptionRetrieveRequest, CKDPTokenRegistrationRequest, CKDPTokenUnregistrationRequest, CKDPUnlikeRequest, CKDPUserAvailableQuotaRequest, CKDPUserPrivacySettingsBatchLookupRequest, CKDPUserPrivacySettingsResetRequest, CKDPUserPrivacySettingsRetrieveRequest, CKDPUserPrivacySettingsUpdateRequest, CKDPUserQueryRequest, CKDPUserRetrieveRequest, CKDPWebAuthTokenRetrieveRequest, CKDPZoneDeleteRequest, CKDPZoneRetrieveChangesRequest, CKDPZoneRetrieveRequest, CKDPZoneSaveRequest;

@interface CKDPRequestOperation : PBCodable <NSCopying>
{
    CKDPAssetUploadTokenRetrieveRequest *_assetUploadTokenRetrieveRequest;
    CKDPDeleteCommentRequest *_deleteCommentRequest;
    CKDPDeleteContainerRequest *_deleteContainerRequest;
    CKDPGetCommentRequest *_getCommentRequest;
    CKDPGetCommentsRequest *_getCommentsRequest;
    CKDPGetLikesRequest *_getLikesRequest;
    CKDPRequestOperationHeader *_header;
    CKDPLikeRequest *_likeRequest;
    CKDPMescalCertificateRequest *_mescalCertificateRequest;
    CKDPMescalSessionInfoRequest *_mescalSessionInfoRequest;
    CKDPMescalSignatureRequest *_mescalSignatureRequest;
    CKDPNotificationMarkReadRequest *_notificationMarkReadRequest;
    CKDPNotificationSyncRequest *_notificationSyncRequest;
    CKDPPkiRegisterRequest *_pkiRegisterRequest;
    CKDPPkiRetrieveRequest *_pkiRetrieveRequest;
    CKDPPostCommentRequest *_postCommentRequest;
    CKDPPromoteContainerSchemaRequest *_promoteContainerSchemaRequest;
    CKDPPulseRequest *_pulseRequest;
    CKDPQueryRetrieveRequest *_queryRetrieveRequest;
    CKDPRecordDeleteRequest *_recordDeleteRequest;
    CKDPRecordRetrieveChangesRequest *_recordRetrieveChangesRequest;
    CKDPRecordRetrieveRequest *_recordRetrieveRequest;
    CKDPRecordRetrieveVersionsRequest *_recordRetrieveVersionsRequest;
    CKDPRecordSaveRequest *_recordSaveRequest;
    CKDPOperation *_request;
    CKDPResetContainerRequest *_resetContainerRequest;
    CKDPSetBadgeCountRequest *_setBadgeCountRequest;
    CKDPShareAcceptRequest *_shareAcceptRequest;
    CKDPShareDeleteRequest *_shareDeleteRequest;
    CKDPShareRetrieveRequest *_shareRetrieveRequest;
    CKDPShareSaveRequest *_shareSaveRequest;
    CKDPShareTokenDeleteRequest *_shareTokenDeleteRequest;
    CKDPShareTokenRetrieveRequest *_shareTokenRetrieveRequest;
    CKDPShareTokenSaveRequest *_shareTokenSaveRequest;
    CKDPSubscriptionCreateRequest *_subscriptionCreateRequest;
    CKDPSubscriptionDeleteRequest *_subscriptionDeleteRequest;
    CKDPSubscriptionRetrieveRequest *_subscriptionRetrieveRequest;
    CKDPTokenRegistrationRequest *_tokenRegistrationRequest;
    CKDPTokenUnregistrationRequest *_tokenUnregistrationRequest;
    CKDPUnlikeRequest *_unlikeRequest;
    CKDPUserAvailableQuotaRequest *_userAvailableQuotaRequest;
    CKDPUserPrivacySettingsBatchLookupRequest *_userPrivacySettingsBatchLookupRequest;
    CKDPUserPrivacySettingsResetRequest *_userPrivacySettingsResetRequest;
    CKDPUserPrivacySettingsRetrieveRequest *_userPrivacySettingsRetrieveRequest;
    CKDPUserPrivacySettingsUpdateRequest *_userPrivacySettingsUpdateRequest;
    CKDPUserQueryRequest *_userQueryRequest;
    CKDPUserRetrieveRequest *_userRetrieveRequest;
    CKDPWebAuthTokenRetrieveRequest *_webAuthTokenRetrieveRequest;
    CKDPZoneDeleteRequest *_zoneDeleteRequest;
    CKDPZoneRetrieveChangesRequest *_zoneRetrieveChangesRequest;
    CKDPZoneRetrieveRequest *_zoneRetrieveRequest;
    CKDPZoneSaveRequest *_zoneSaveRequest;
}

@property(retain, nonatomic) CKDPOperation *request; // @synthesize request=_request;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) CKDPRequestOperationHeader *header; // @synthesize header=_header;
@property(readonly, nonatomic) BOOL hasHeader;
@property(retain, nonatomic) CKDPMescalCertificateRequest *mescalCertificateRequest;
@property(readonly, nonatomic) BOOL hasMescalCertificateRequest;
@property(retain, nonatomic) CKDPMescalSessionInfoRequest *mescalSessionInfoRequest;
@property(readonly, nonatomic) BOOL hasMescalSessionInfoRequest;
@property(retain, nonatomic) CKDPPkiRetrieveRequest *pkiRetrieveRequest;
@property(readonly, nonatomic) BOOL hasPkiRetrieveRequest;
@property(retain, nonatomic) CKDPPkiRegisterRequest *pkiRegisterRequest;
@property(readonly, nonatomic) BOOL hasPkiRegisterRequest;
@property(retain, nonatomic) CKDPNotificationMarkReadRequest *notificationMarkReadRequest;
@property(readonly, nonatomic) BOOL hasNotificationMarkReadRequest;
@property(retain, nonatomic) CKDPNotificationSyncRequest *notificationSyncRequest;
@property(readonly, nonatomic) BOOL hasNotificationSyncRequest;
@property(retain, nonatomic) CKDPSetBadgeCountRequest *setBadgeCountRequest;
@property(readonly, nonatomic) BOOL hasSetBadgeCountRequest;
@property(retain, nonatomic) CKDPTokenUnregistrationRequest *tokenUnregistrationRequest;
@property(readonly, nonatomic) BOOL hasTokenUnregistrationRequest;
@property(retain, nonatomic) CKDPTokenRegistrationRequest *tokenRegistrationRequest;
@property(readonly, nonatomic) BOOL hasTokenRegistrationRequest;
@property(retain, nonatomic) CKDPUserPrivacySettingsRetrieveRequest *userPrivacySettingsRetrieveRequest;
@property(readonly, nonatomic) BOOL hasUserPrivacySettingsRetrieveRequest;
@property(retain, nonatomic) CKDPUserPrivacySettingsBatchLookupRequest *userPrivacySettingsBatchLookupRequest;
@property(readonly, nonatomic) BOOL hasUserPrivacySettingsBatchLookupRequest;
@property(retain, nonatomic) CKDPUserPrivacySettingsResetRequest *userPrivacySettingsResetRequest;
@property(readonly, nonatomic) BOOL hasUserPrivacySettingsResetRequest;
@property(retain, nonatomic) CKDPUserPrivacySettingsUpdateRequest *userPrivacySettingsUpdateRequest;
@property(readonly, nonatomic) BOOL hasUserPrivacySettingsUpdateRequest;
@property(retain, nonatomic) CKDPUserQueryRequest *userQueryRequest;
@property(readonly, nonatomic) BOOL hasUserQueryRequest;
@property(retain, nonatomic) CKDPSubscriptionDeleteRequest *subscriptionDeleteRequest;
@property(readonly, nonatomic) BOOL hasSubscriptionDeleteRequest;
@property(retain, nonatomic) CKDPSubscriptionRetrieveRequest *subscriptionRetrieveRequest;
@property(readonly, nonatomic) BOOL hasSubscriptionRetrieveRequest;
@property(retain, nonatomic) CKDPSubscriptionCreateRequest *subscriptionCreateRequest;
@property(readonly, nonatomic) BOOL hasSubscriptionCreateRequest;
@property(retain, nonatomic) CKDPPulseRequest *pulseRequest;
@property(readonly, nonatomic) BOOL hasPulseRequest;
@property(retain, nonatomic) CKDPGetLikesRequest *getLikesRequest;
@property(readonly, nonatomic) BOOL hasGetLikesRequest;
@property(retain, nonatomic) CKDPUnlikeRequest *unlikeRequest;
@property(readonly, nonatomic) BOOL hasUnlikeRequest;
@property(retain, nonatomic) CKDPLikeRequest *likeRequest;
@property(readonly, nonatomic) BOOL hasLikeRequest;
@property(retain, nonatomic) CKDPDeleteCommentRequest *deleteCommentRequest;
@property(readonly, nonatomic) BOOL hasDeleteCommentRequest;
@property(retain, nonatomic) CKDPGetCommentRequest *getCommentRequest;
@property(readonly, nonatomic) BOOL hasGetCommentRequest;
@property(retain, nonatomic) CKDPGetCommentsRequest *getCommentsRequest;
@property(readonly, nonatomic) BOOL hasGetCommentsRequest;
@property(retain, nonatomic) CKDPPostCommentRequest *postCommentRequest;
@property(readonly, nonatomic) BOOL hasPostCommentRequest;
@property(retain, nonatomic) CKDPWebAuthTokenRetrieveRequest *webAuthTokenRetrieveRequest;
@property(readonly, nonatomic) BOOL hasWebAuthTokenRetrieveRequest;
@property(retain, nonatomic) CKDPPromoteContainerSchemaRequest *promoteContainerSchemaRequest;
@property(readonly, nonatomic) BOOL hasPromoteContainerSchemaRequest;
@property(retain, nonatomic) CKDPResetContainerRequest *resetContainerRequest;
@property(readonly, nonatomic) BOOL hasResetContainerRequest;
@property(retain, nonatomic) CKDPDeleteContainerRequest *deleteContainerRequest;
@property(readonly, nonatomic) BOOL hasDeleteContainerRequest;
@property(retain, nonatomic) CKDPAssetUploadTokenRetrieveRequest *assetUploadTokenRetrieveRequest;
@property(readonly, nonatomic) BOOL hasAssetUploadTokenRetrieveRequest;
@property(readonly, nonatomic) BOOL hasQueryRetrieveRequest;
@property(retain, nonatomic) CKDPUserRetrieveRequest *userRetrieveRequest;
@property(readonly, nonatomic) BOOL hasUserRetrieveRequest;
@property(retain, nonatomic) CKDPUserAvailableQuotaRequest *userAvailableQuotaRequest;
@property(readonly, nonatomic) BOOL hasUserAvailableQuotaRequest;
@property(retain, nonatomic) CKDPRecordDeleteRequest *recordDeleteRequest;
@property(readonly, nonatomic) BOOL hasRecordDeleteRequest;
@property(retain, nonatomic) CKDPRecordRetrieveChangesRequest *recordRetrieveChangesRequest;
@property(readonly, nonatomic) BOOL hasRecordRetrieveChangesRequest;
@property(retain, nonatomic) CKDPRecordRetrieveVersionsRequest *recordRetrieveVersionsRequest;
@property(readonly, nonatomic) BOOL hasRecordRetrieveVersionsRequest;
@property(retain, nonatomic) CKDPRecordRetrieveRequest *recordRetrieveRequest;
@property(readonly, nonatomic) BOOL hasRecordRetrieveRequest;
@property(retain, nonatomic) CKDPRecordSaveRequest *recordSaveRequest;
@property(readonly, nonatomic) BOOL hasRecordSaveRequest;
@property(retain, nonatomic) CKDPZoneRetrieveChangesRequest *zoneRetrieveChangesRequest;
@property(readonly, nonatomic) BOOL hasZoneRetrieveChangesRequest;
@property(retain, nonatomic) CKDPZoneDeleteRequest *zoneDeleteRequest;
@property(readonly, nonatomic) BOOL hasZoneDeleteRequest;
@property(retain, nonatomic) CKDPZoneRetrieveRequest *zoneRetrieveRequest;
@property(readonly, nonatomic) BOOL hasZoneRetrieveRequest;
@property(retain, nonatomic) CKDPZoneSaveRequest *zoneSaveRequest;
@property(readonly, nonatomic) BOOL hasZoneSaveRequest;
@property(retain, nonatomic) CKDPShareTokenDeleteRequest *shareTokenDeleteRequest;
@property(readonly, nonatomic) BOOL hasShareTokenDeleteRequest;
@property(retain, nonatomic) CKDPShareTokenRetrieveRequest *shareTokenRetrieveRequest;
@property(readonly, nonatomic) BOOL hasShareTokenRetrieveRequest;
@property(retain, nonatomic) CKDPShareTokenSaveRequest *shareTokenSaveRequest;
@property(readonly, nonatomic) BOOL hasShareTokenSaveRequest;
@property(retain, nonatomic) CKDPShareAcceptRequest *shareAcceptRequest;
@property(readonly, nonatomic) BOOL hasShareAcceptRequest;
@property(retain, nonatomic) CKDPShareDeleteRequest *shareDeleteRequest;
@property(readonly, nonatomic) BOOL hasShareDeleteRequest;
@property(readonly, nonatomic) BOOL hasShareRetrieveRequest;
@property(retain, nonatomic) CKDPShareSaveRequest *shareSaveRequest;
@property(readonly, nonatomic) BOOL hasShareSaveRequest;
@property(readonly, nonatomic) BOOL hasRequest;
@property(readonly, nonatomic) BOOL hasMescalSignatureRequest;
@property(retain, nonatomic) CKDPShareRetrieveRequest *shareRetrieveRequest;
@property(retain, nonatomic) CKDPQueryRetrieveRequest *queryRetrieveRequest;
@property(retain, nonatomic) CKDPMescalSignatureRequest *mescalSignatureRequest;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

