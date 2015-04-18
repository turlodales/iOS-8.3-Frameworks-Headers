//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSSecureCoding.h"

@class GKGame, GKPlayerInternal, NSArray, NSAttributedString, NSDate, NSString;

@interface GKPlayer : NSObject <NSCoding, NSSecureCoding>
{
    GKPlayerInternal *_internal;
    NSAttributedString *_whenString;
    NSArray *_friends;
}

+ (id)automatchPlayer;
+ (void)loadCompletePlayersForPlayers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)playerFromPlayerID:(id)arg1;
+ (id)unknownPlayer;
+ (id)anonymousPlayer;
+ (void)_loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)cacheKeyForPlayerID:(id)arg1;
+ (void)loadPlayersForLegacyIdentifiers:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)canonicalizedPlayerForInternal:(id)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *friends; // @synthesize friends=_friends;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)postChangeNotification;
- (void)_postChangeNotification;
- (id)emails;
- (id)email;
- (id)sortName;
@property(readonly, nonatomic) BOOL hasPhoto;
@property(retain, nonatomic) NSString *playerID; // @dynamic playerID;
- (void)loadFriendsAsPlayersWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) GKGame *lastPlayedGame;
@property(retain, nonatomic) NSAttributedString *whenString; // @synthesize whenString=_whenString;
- (void)loadRecentMatchesForGame:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) CDStruct_2f811cea stats;
- (id)displayNameWithOptions:(unsigned char)arg1;
- (id)minimalPlayer;
@property(readonly, nonatomic) BOOL isFriendRecommendation; // @dynamic isFriendRecommendation;
- (BOOL)isFriendablePlayer;
- (void)loadProfileWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadGamesPlayedDetailsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadGamesPlayed:(CDUnknownBlockType)arg1;
- (void)declineFriendRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)acceptFriendRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL isFamiliarFriend;
- (void)loadGamesPlayedIncludingInstalledGames:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadCommonFriends:(BOOL)arg1 asPlayersWithCompletionHandler:(CDUnknownBlockType)arg2;
@property(retain) GKPlayerInternal *internal; // @synthesize internal=_internal;
- (id)initWithInternalRepresentation:(id)arg1;
@property(readonly) NSString *referenceKey;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *cacheKey;
- (id)valueForUndefinedKey:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) NSString *alias; // @dynamic alias;
@property(readonly, nonatomic) NSString *firstName; // @dynamic firstName;
@property(readonly, nonatomic) BOOL isAnonymousPlayer; // @dynamic isAnonymousPlayer;
@property(readonly, nonatomic) BOOL isAutomatchPlayer; // @dynamic isAutomatchPlayer;
@property(nonatomic) BOOL isFriend; // @dynamic isFriend;
@property(readonly, nonatomic) BOOL isLocalPlayer; // @dynamic isLocalPlayer;
@property(readonly, nonatomic) BOOL isUnknownPlayer; // @dynamic isUnknownPlayer;
@property(readonly, nonatomic) NSString *lastName; // @dynamic lastName;
@property(readonly, nonatomic) NSDate *lastPlayedDate; // @dynamic lastPlayedDate;
@property(readonly, nonatomic, getter=isLoaded) BOOL loaded; // @dynamic loaded;
@property(nonatomic) unsigned int numberOfFriends; // @dynamic numberOfFriends;
@property(retain, nonatomic) NSString *reason; // @dynamic reason;
@property(retain, nonatomic) NSString *reason2; // @dynamic reason2;
@property(nonatomic) unsigned int rid; // @dynamic rid;
@property(nonatomic) int source; // @dynamic source;
@property(copy, nonatomic) NSString *status; // @dynamic status;

@end

