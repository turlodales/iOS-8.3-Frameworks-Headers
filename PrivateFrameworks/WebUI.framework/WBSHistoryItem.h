//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDate, NSMutableArray, NSMutableSet, NSSet, NSString, NSURL, WBSHistoryVisit;

@interface WBSHistoryItem : NSObject
{
    NSString *_urlString;
    WBSHistoryVisit *_lastVisit;
    NSMutableSet *_visitsPendingWriteToDataStore;
    int _databaseID;
    unsigned int _visitCount;
    struct Vector<int, 0, WTF::CrashOnOverflow> _dailyVisitCounts;
    struct Vector<int, 0, WTF::CrashOnOverflow> _weeklyVisitCounts;
    NSMutableArray *_redirectSourceItems;
    NSMutableArray *_autocompleteTriggers;
    NSMutableArray *_visits;
    BOOL _shouldRecomputeDerivedVisitCounts;
    NSURL *_url;
    NSString *_userVisibleURLString;
    float _cachedTopSitesURLPenalty;
    float _cachedTopSitesVisitScore;
    double _lastTimeTopSitesScoreWasComputed;
}

+ (double)timeIntervalForDailyAndWeeklyVisitCounts;
+ (id)synchronizationQueue;
+ (void)initialize;
@property(readonly, nonatomic) BOOL shouldRecomputeDerivedVisitCounts; // @synthesize shouldRecomputeDerivedVisitCounts=_shouldRecomputeDerivedVisitCounts;
@property(readonly, nonatomic) NSArray *visits; // @synthesize visits=_visits;
- (void)recordSynthesizedRedirectFrom:(id)arg1 to:(id)arg2;
- (void)recordExistingRedirectFrom:(id)arg1 to:(id)arg2;
- (void)recomputeDerivedVisitCountsWithVisitTimes:(id)arg1;
@property(readonly, nonatomic) NSData *autocompleteTriggersDataOnSynchronizationQueue;
@property(readonly, nonatomic) NSData *weeklyVisitCountsDataOnSynchronizationQueue;
@property(readonly, nonatomic) NSData *dailyVisitCountsDataOnSynchronizationQueue;
- (void)clearVisitsPendingWriteToDataStoreFromSynchronizationQueue;
@property(readonly, nonatomic) NSSet *visitsPendingWriteToDataStoreOnSynchronizationQueue;
@property(readonly, nonatomic) NSArray *autocompleteTriggers;
@property(readonly, nonatomic) WBSHistoryItem *endOfLastVisitRedirectChain;
@property(readonly, nonatomic) WBSHistoryItem *lastVisitRedirectDestinationItem;
@property(readonly, nonatomic) NSArray *redirectSourceItems;
@property(nonatomic) BOOL lastVisitWasFailure;
@property(readonly, nonatomic) NSDate *lastVisitedDate;
@property(readonly, nonatomic) NSString *simplifiedUserVisibleURLString;
- (id)initWithSQLiteRow:(id)arg1;
- (Vector_4bee0f08)_timesForVisits:(unsigned int)arg1 toSynthesizeBetweenStartTime:(double)arg2 endTime:(double)arg3;
- (void)_addVisit:(id)arg1;
- (void)_wasVisitedOnSynchronizationQueue:(id)arg1;
- (void)addRedirectSourceItemFromSynchronizationQueue:(id)arg1;
- (void)_padDailyCountsForNewVisitAtTime:(double)arg1 indexOfNewVisit:(int *)arg2;
@property(readonly, nonatomic) WBSHistoryVisit *lastVisitOnSynchronizationQueue;
- (BOOL)_addAutocompleteTriggerFromSynchronizationQueue:(id)arg1;
- (id)_autocompleteTriggersFromSynchronizationQueue;
- (id)_urlOnSynchronizationQueue;
@property(readonly, nonatomic) NSString *stringForUserTypedDomainExpansionOnSynchronizationQueue;
- (Vector_4bee0f08)_timesForSynthesizedVisitsPreceedingDailyAndWeeklyRange:(unsigned int)arg1;
- (Vector_4bee0f08)_timesOfVisitsToSynthesizeFromDailyAndWeeklyCounts;
- (void)_collapseDailyVisitsToWeekly;
- (void)_addExistingVisit:(id)arg1;
- (void)removeVisits:(id)arg1 candidateLastVisit:(id)arg2;
- (void)wasRedirectedFrom:(id)arg1 to:(id)arg2;
- (void)wasVisited:(id)arg1;
@property(readonly, nonatomic) NSString *stringForUserTypedDomainExpansion;
- (void)mergeDataFromItem:(id)arg1;
- (BOOL)addAutocompleteTrigger:(id)arg1;
@property(readonly, nonatomic) WBSHistoryVisit *lastVisit;
@property(readonly, nonatomic) BOOL lastVisitWasHTTPNonGet;
@property(nonatomic) double lastTimeTopSitesScoreWasComputed; // @synthesize lastTimeTopSitesScoreWasComputed=_lastTimeTopSitesScoreWasComputed;
@property(nonatomic) float cachedTopSitesVisitScore; // @synthesize cachedTopSitesVisitScore=_cachedTopSitesVisitScore;
@property(nonatomic) float cachedTopSitesURLPenalty; // @synthesize cachedTopSitesURLPenalty=_cachedTopSitesURLPenalty;
@property(readonly, nonatomic) unsigned int weeklyVisitCountsCountOnSynchronizationQueue;
@property(readonly, nonatomic) const int *weeklyVisitCountsPtrOnSynchronizationQueue;
@property(readonly, nonatomic) unsigned int dailyVisitCountsCountOnSynchronizationQueue;
@property(readonly, nonatomic) const int *dailyVisitCountsPtrOnSynchronizationQueue;
@property(readonly, nonatomic) NSString *urlStringOnSynchronizationQueue;
@property(readonly, nonatomic) unsigned int visitCount;
@property(readonly, nonatomic) NSString *userVisibleURLString; // @synthesize userVisibleURLString=_userVisibleURLString;
- (void)removeVisitsOnSynchronizationQueue:(id)arg1 candidateLastVisit:(id)arg2;
- (int)compareWithItemByLastVisitedTimeInterval:(id)arg1;
@property(readonly, nonatomic) double lastVisitedTimeInterval;
- (id)initWithDictionaryRepresentation:(id)arg1;
@property(nonatomic) int databaseID; // @synthesize databaseID=_databaseID;
- (id)initWithURLString:(id)arg1;
@property(readonly, nonatomic) NSString *urlString;
- (void).cxx_destruct;
- (id).cxx_construct;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;

@end

