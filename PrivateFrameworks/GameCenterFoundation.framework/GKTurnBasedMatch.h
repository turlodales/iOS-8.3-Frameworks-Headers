//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GKSessionDelegate.h"

@class GKGame, GKPlayer, GKTurnBasedMatchInternal, GKTurnBasedParticipant, NSArray, NSData, NSDate, NSString;

@interface GKTurnBasedMatch : NSObject <GKSessionDelegate>
{
    GKTurnBasedMatchInternal *_internal;
    NSArray *_participants;
    NSArray *_exchanges;
    unsigned int _state;
}

+ (void)loadMatchWithID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadTurnBasedMatchSummaries:(CDUnknownBlockType)arg1;
+ (void)loadMatchesWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)_localizableMessageWithKey:(id)arg1 arguments:(id)arg2 defaultMessage:(id)arg3;
+ (void)loadTurnBasedMatchDetailsForMatchIDs:(id)arg1 loadGameData:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)matchesWithInternalRepresentations:(id)arg1;
+ (void)loadTurnBasedMatchSummariesIncludingCompatibleBundleID:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadMatchesIncludingCompatibleBundleID:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)getTurnBasedBadgeCountWithHandler:(CDUnknownBlockType)arg1;
+ (void)loadTurnBasedMatchWithDetailsForMatchID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)findMatchForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)keyPathsForValuesAffectingStatus;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
@property(readonly, nonatomic) GKTurnBasedParticipant *previousParticipantOrFirstKnownPlayer;
@property(readonly, nonatomic) GKTurnBasedParticipant *firstWinnerOrTiedOrLastLoser;
@property(readonly, retain, nonatomic) NSArray *activeExchanges;
@property(readonly, nonatomic) GKTurnBasedParticipant *localPlayerParticipant;
@property(readonly, nonatomic) GKTurnBasedParticipant *playingWithParticipantOrFirstKnownPlayer;
@property(retain, nonatomic) GKTurnBasedParticipant *currentParticipant;
@property(readonly, nonatomic) GKGame *game; // @dynamic game;
- (void)sendReminderToParticipants:(id)arg1 localizableMessageKey:(id)arg2 arguments:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendExchangeToParticipants:(id)arg1 data:(id)arg2 localizableMessageKey:(id)arg3 arguments:(id)arg4 timeout:(double)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)saveMergedMatchData:(id)arg1 withResolvedExchanges:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)saveCurrentTurnWithMatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)endMatchInTurnWithMatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)participantQuitOutOfTurnWithOutcome:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)participantQuitInTurnWithOutcome:(int)arg1 nextParticipant:(id)arg2 matchData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)endTurnWithNextParticipant:(id)arg1 matchData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadMatchDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) NSArray *completedExchanges;
@property(readonly, nonatomic) GKPlayer *showcasePlayer;
@property(readonly, nonatomic) BOOL localPlayerHasRecentTurn;
@property(readonly, nonatomic) BOOL isMyTurn; // @dynamic isMyTurn;
- (void)endMatchInTurnWithMatchData:(id)arg1 scores:(id)arg2 achievements:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)participantQuitInTurnWithOutcome:(int)arg1 nextParticipants:(id)arg2 turnTimeout:(double)arg3 matchData:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)indexesForParticipants:(id)arg1;
- (void)endTurnWithNextParticipants:(id)arg1 turnTimeout:(double)arg2 matchData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)declineInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) GKTurnBasedParticipant *previousParticipant;
@property(readonly, nonatomic) NSDate *dateSortKey;
@property(nonatomic) unsigned int matchDataMaximumSize; // @dynamic matchDataMaximumSize;
- (void)setLocalizableMessageWithKey:(id)arg1 arguments:(id)arg2;
@property(readonly, nonatomic) GKPlayer *currentPlayer; // @dynamic currentPlayer;
@property(readonly, retain, nonatomic) NSArray *exchanges; // @synthesize exchanges=_exchanges;
- (id)_exchangesForInternalRepresentation:(id)arg1 participants:(id)arg2;
- (id)_participantsForInternalRepresentation:(id)arg1;
- (void)_updateWithInternal:(id)arg1;
- (id)exchangeForID:(id)arg1;
- (void)acceptInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)rematchWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned int exchangeMaxInitiatedExchangesPerPlayer; // @dynamic exchangeMaxInitiatedExchangesPerPlayer;
@property(readonly, nonatomic) unsigned int exchangeDataMaximumSize; // @dynamic exchangeDataMaximumSize;
@property(retain) GKTurnBasedMatchInternal *internal; // @synthesize internal=_internal;
- (id)initWithInternalRepresentation:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) int status; // @dynamic status;
- (id)valueForUndefinedKey:(id)arg1;
@property(copy, nonatomic) NSString *message;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (int)compare:(id)arg1;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSString *bundleVersion; // @dynamic bundleVersion;
@property(readonly, retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSDate *lastTurnDate; // @dynamic lastTurnDate;
@property(readonly, retain, nonatomic) NSData *matchData; // @dynamic matchData;
@property(readonly, retain, nonatomic) NSString *matchID; // @dynamic matchID;
@property(readonly) Class superclass;
@property(readonly, nonatomic) int turnNumber; // @dynamic turnNumber;

@end

