//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKSource, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface EKUIInviteeAlternativeTimeSearcher : NSObject
{
    BOOL _availabilityRequestInProgress;
    BOOL _internalSearchingForMoreTimesWhenAllAttendeesCanAttend;
    BOOL _internalSearchingForMoreTimesWhenSomeAttendeesCanAttend;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSDate *_internalOriginalStartDate;
    NSDate *_internalOriginalEndDate;
    EKSource *_source;
    NSString *_ignoredEventID;
    NSOperationQueue *_availabilityRequestsQueue;
    NSMutableDictionary *_participantAddressesToParticipants;
    NSString *_organizerAddress;
    NSDate *_nextAvailabilityRangeStartDate;
    unsigned int _remainingSearchAttempts;
    NSMutableArray *_leftoverSpans;
    NSMutableArray *_internalTimesWhenAllAttendeesCanAttend;
    NSMutableArray *_internalTimesWhenSomeAttendeesCanAttend;
    NSMutableArray *_internalOriginalConflictedParticipants;
    CDUnknownBlockType _stateChanged;
    double _availabilitySearchDurationMultiplier;
}

+ (id)_findHighestRankedNonOptimalTimeSpans:(id)arg1;
+ (id)_rankNonOptimalTimeSpans:(id)arg1;
+ (void)_insertUniqueParticipants:(id)arg1 intoExistingParticipantsArray:(id)arg2;
+ (id)_allButFirstItemInArray:(id)arg1;
+ (id)_allButLastItemInArray:(id)arg1;
+ (BOOL)_span:(id)arg1 hasSameConflictedParticipantsAsSpan:(id)arg2;
+ (id)_addressesForParticipants:(id)arg1;
+ (void)_validateSpans:(id)arg1;
+ (int)_invalidBinarySearchIndex;
+ (int)_binarySearchForIndexOfTimeSpanInArray:(id)arg1 containingDate:(id)arg2;
+ (id)_findLeftoverSpans:(id)arg1 usingFreeTimes:(id)arg2 andNonOptimalTimes:(id)arg3;
+ (id)stateAsString:(int)arg1;
+ (id)_selfOrganizerForNewlyScheduledEventWithAddress:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void).cxx_destruct;
@property(retain, nonatomic) EKSource *source; // @synthesize source=_source;
- (void)dealloc;
@property(retain, nonatomic) NSString *organizerAddress; // @synthesize organizerAddress=_organizerAddress;
- (void)resetWithEvent:(id)arg1 organizerAddressForNewlyScheduledEvent:(id)arg2;
- (void)searchForMoreTimesWhenSomeAttendeesCanAttend;
- (void)searchForMoreTimesWhenAllAttendeesCanAttend;
@property(readonly, nonatomic) BOOL searchingForMoreTimesWhenSomeAttendeesCanAttend;
@property(readonly, nonatomic) BOOL searchingForMoreTimesWhenAllAttendeesCanAttend;
@property(readonly, nonatomic) NSArray *timesWhenSomeAttendeesCanAttend;
@property(readonly, nonatomic) NSArray *timesWhenAllAttendeesCanAttend;
- (id)initWithStateChangedCallback:(CDUnknownBlockType)arg1;
- (id)_filterOutUnreasonableTimeSlots:(id)arg1;
- (id)_generateNonOptimalTimesFromTimeSpans:(id)arg1;
- (id)_generateOpenFreeTimesFromTimeSpans:(id)arg1;
- (id)_mergeAdjacentSpansWithSameConflictedParticipants:(id)arg1;
- (id)_spliceLeftTimeSpans:(id)arg1 andNewTimeSpans:(id)arg2;
- (id)_generateTimeSpansForResults:(id)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3;
@property(copy, nonatomic) CDUnknownBlockType stateChanged; // @synthesize stateChanged=_stateChanged;
@property(nonatomic) unsigned int remainingSearchAttempts; // @synthesize remainingSearchAttempts=_remainingSearchAttempts;
- (void)_processResults:(id)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3;
@property(nonatomic) double availabilitySearchDurationMultiplier; // @synthesize availabilitySearchDurationMultiplier=_availabilitySearchDurationMultiplier;
@property(retain, nonatomic) NSDate *nextAvailabilityRangeStartDate; // @synthesize nextAvailabilityRangeStartDate=_nextAvailabilityRangeStartDate;
- (id)_participantforParticipantAddress:(id)arg1;
@property(retain, nonatomic) NSString *ignoredEventID; // @synthesize ignoredEventID=_ignoredEventID;
- (void)_transitionToConflictFoundStateAndSearch;
- (void)_sendStateChange:(int)arg1;
@property(retain, nonatomic) NSDate *internalOriginalEndDate; // @synthesize internalOriginalEndDate=_internalOriginalEndDate;
@property(retain, nonatomic) NSDate *internalOriginalStartDate; // @synthesize internalOriginalStartDate=_internalOriginalStartDate;
@property(retain, nonatomic) NSMutableArray *leftoverSpans; // @synthesize leftoverSpans=_leftoverSpans;
@property(retain, nonatomic) NSMutableDictionary *participantAddressesToParticipants; // @synthesize participantAddressesToParticipants=_participantAddressesToParticipants;
@property(nonatomic) BOOL internalSearchingForMoreTimesWhenSomeAttendeesCanAttend; // @synthesize internalSearchingForMoreTimesWhenSomeAttendeesCanAttend=_internalSearchingForMoreTimesWhenSomeAttendeesCanAttend;
- (void)_attemptSearch;
- (void)_resetSearchFallbackNumbers;
@property(nonatomic) BOOL internalSearchingForMoreTimesWhenAllAttendeesCanAttend; // @synthesize internalSearchingForMoreTimesWhenAllAttendeesCanAttend=_internalSearchingForMoreTimesWhenAllAttendeesCanAttend;
@property(retain, nonatomic) NSMutableArray *internalTimesWhenSomeAttendeesCanAttend; // @synthesize internalTimesWhenSomeAttendeesCanAttend=_internalTimesWhenSomeAttendeesCanAttend;
@property(retain, nonatomic) NSMutableArray *internalTimesWhenAllAttendeesCanAttend; // @synthesize internalTimesWhenAllAttendeesCanAttend=_internalTimesWhenAllAttendeesCanAttend;
@property(retain, nonatomic) NSMutableArray *internalOriginalConflictedParticipants; // @synthesize internalOriginalConflictedParticipants=_internalOriginalConflictedParticipants;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) NSOperationQueue *availabilityRequestsQueue; // @synthesize availabilityRequestsQueue=_availabilityRequestsQueue;
@property(readonly, nonatomic) NSArray *originalConflictedParticipants;
@property(readonly, nonatomic) NSDate *originalEndDate;
@property(nonatomic) BOOL availabilityRequestInProgress; // @synthesize availabilityRequestInProgress=_availabilityRequestInProgress;
@property(readonly, nonatomic) NSDate *originalStartDate;

@end

