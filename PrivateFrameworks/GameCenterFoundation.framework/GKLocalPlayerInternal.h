//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterFoundation/GKFriendPlayerInternal.h>

@class NSArray, NSNumber, NSString;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal
{
    NSString *_accountName;
    NSArray *_emailAddresses;
    NSString *_facebookUserID;
    NSNumber *_iCloudUserID;
    unsigned short _numberOfRequests;
    unsigned short _numberOfTurns;
    unsigned short _numberOfChallenges;
}

+ (id)secureCodedPropertyKeys;
- (id)accountName;
- (void)setEmailAddresses:(id)arg1;
- (id)emailAddresses;
- (BOOL)isUnderage;
- (BOOL)isPurpleBuddyAccount;
- (BOOL)isLocalPlayer;
- (BOOL)isFriend;
- (void)setNumberOfChallenges:(unsigned short)arg1;
- (void)setNumberOfTurns:(unsigned short)arg1;
- (void)setNumberOfRequests:(unsigned short)arg1;
- (void)setPhotoPending:(BOOL)arg1;
- (BOOL)isPhotoPending;
- (void)setFindable:(BOOL)arg1;
- (BOOL)isFindable;
- (void)setUnderage:(BOOL)arg1;
- (void)setPurpleBuddyAccount:(BOOL)arg1;
- (void)setICloudUserID:(id)arg1;
- (id)iCloudUserID;
- (void)setFacebookUserID:(id)arg1;
- (id)facebookUserID;
- (int)defaultFamiliarity;
- (unsigned short)numberOfTurns;
- (unsigned short)numberOfChallenges;
- (unsigned short)numberOfRequests;
- (void)setAccountName:(id)arg1;
- (void)dealloc;

@end

