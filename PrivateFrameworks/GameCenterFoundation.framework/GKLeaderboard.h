//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKLeaderboardInternal, GKScore, NSArray, NSString;

@interface GKLeaderboard : NSObject
{
    int _timeScope;
    int _playerScope;
    NSArray *_players;
    NSArray *_scores;
    GKScore *_localPlayerScore;
    id <GKLeaderboardDelegate> _weakDelegate;
    GKLeaderboardInternal *_internal;
    int _loadingCount;
    int _lock;
    struct _NSRange _range;
}

+ (void)setDefaultLeaderboard:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadLeaderboardWithIdentifier:(id)arg1 forGame:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (void)loadLeaderboardsWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)loadCategoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)loadLeaderboardsForGame:(id)arg1 withPlayer:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)loadLeaderboardsForGame:(id)arg1 forSet:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)loadScoresForGame:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithPlayers:(id)arg1;
@property(nonatomic) int timeScope; // @synthesize timeScope=_timeScope;
@property(retain, nonatomic) NSArray *players; // @synthesize players=_players;
@property(nonatomic) int loadingCount; // @synthesize loadingCount=_loadingCount;
@property(retain, nonatomic) GKScore *localPlayerScore; // @synthesize localPlayerScore=_localPlayerScore;
@property(nonatomic) int playerScope; // @synthesize playerScope=_playerScope;
- (void)loadScoresWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithPlayerIDs:(id)arg1;
- (void)decrementLoadingCountAtomically;
- (void)loadScoresForRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSArray *scores; // @synthesize scores=_scores;
- (id)scoreRequestForGame:(id)arg1;
- (void)incrementLoadingCountAtomically;
@property(retain) GKLeaderboardInternal *internal; // @synthesize internal=_internal;
- (id)initWithInternalRepresentation:(id)arg1;
@property(nonatomic) int lock; // @synthesize lock=_lock;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, getter=isLoading) BOOL loading; // @dynamic loading;
- (id)valueForUndefinedKey:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
@property(nonatomic) id <GKLeaderboardDelegate> delegate; // @synthesize delegate=_weakDelegate;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property(readonly, nonatomic) int friendRank; // @dynamic friendRank;
@property(readonly, nonatomic) int friendRankCount; // @dynamic friendRankCount;
@property(readonly, retain, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(readonly, retain, nonatomic) NSString *localizedTitle; // @dynamic localizedTitle;
@property(readonly, nonatomic) unsigned int maxRange; // @dynamic maxRange;
@property(readonly, nonatomic) int overallRank; // @dynamic overallRank;
@property(readonly, nonatomic) int overallRankCount; // @dynamic overallRankCount;
@property(readonly, copy, nonatomic) NSString *title; // @dynamic title;

@end

