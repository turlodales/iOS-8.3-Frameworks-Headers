//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AAGrandSlamSigner, ABMonogrammer, ACAccount, ACAccountStore, NSOperationQueue;

@interface AAUIProfilePictureStore : NSObject
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    ABMonogrammer *_monogrammer;
    NSOperationQueue *_networkingQueue;
    BOOL _didBeginUsingAddressBookSingleton;
    float _pictureDiameter;
    int _pictureStyle;
}

- (id)profilePictureForFamilyMember:(id)arg1;
@property(nonatomic) float pictureDiameter; // @synthesize pictureDiameter=_pictureDiameter;
@property(nonatomic) int pictureStyle; // @synthesize pictureStyle=_pictureStyle;
- (id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3;
- (void)setProfilePictureForAccountOwner:(id)arg1;
- (id)profilePictureForFamilyMemberWithFirstName:(id)arg1 lastName:(id)arg2 email:(id)arg3;
- (id)initWithAppleAccount:(id)arg1 store:(id)arg2;
- (id)profilePictureForPicture:(id)arg1 cropRect:(struct CGRect)arg2;
- (id)profilePictureForPicture:(id)arg1;
- (void)setProfilePictureForAccountOwner:(id)arg1 cropRect:(id)arg2;
- (void)fetchProfilePictureForFamilyMember:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchProfilePictureForAccountOwner:(CDUnknownBlockType)arg1;
- (id)profilePictureForAccountOwner;
- (id)_profilePictureForPicture:(id)arg1 crop:(BOOL)arg2 cropRect:(struct CGRect)arg3 cacheable:(BOOL)arg4;
- (void)_updateServerProfilePictureWithRequest:(id)arg1;
- (BOOL)_onAddressBookQueue_personSyncsWithiCloud:(void *)arg1;
- (void)_updateServerProfilePictureForAccountOwner:(id)arg1 cropRect:(id)arg2;
- (BOOL)_onAddressBookQueue_peopleLinkedToMeCardContainsRecordID:(int)arg1;
- (void *)_onAddressBookQueue_copyPersonWithImageDataMatchingFamilyMemberFirstAndLastNames:(id)arg1;
- (void *)_onAddressBookQueue_copyPersonWithImageDataMatchingFamilyMemberEmailAddress:(id)arg1;
- (void *)_onAddressBookQueue_copyPersonWithImageDataMatchingFamilyMember:(id)arg1;
- (id)_monogramPersonImage:(void *)arg1;
- (void)_fetchProfilePictureForFamilyMemberFromServer:(id)arg1 serverCacheTag:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_familyMemberPersonPicture:(id)arg1;
- (id)_profilePictureForFamilyMemberWithoutMonogramFallback:(id)arg1;
- (id)cacheablePictureForPicture:(id)arg1 cropRect:(struct CGRect)arg2;
- (void)_fetchProfilePictureWithRequest:(id)arg1 personID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchProfilePictureForAccountOwnerFromServer:(id)arg1 serverCacheTag:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_meCardPicture;
- (id)_correctlySizedImageFromImage:(id)arg1;
- (id)_fallbackProfilePictureForPersonWithFirstName:(id)arg1 lastName:(id)arg2;
- (id)profilePictureForAccountOwnerWithoutMonogramFallback;
- (id)_monogrammer;
- (void)_invalidateMonogrammer;
- (id)initWithGrandSlamSigner:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

