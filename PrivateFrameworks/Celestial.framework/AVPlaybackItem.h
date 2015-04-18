//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVItem, NSDictionary;

@interface AVPlaybackItem : NSObject
{
    id _delegate;
    AVItem *_avItem;
    struct OpaqueFigPlaybackItem *_fpItem;
    CDStruct_1b6d18a9 _currentDuration;
    struct CGSize _currentSize;
    BOOL _currentSizeIsValid;
    BOOL _isPreparingForInspectionInitialSamples;
    BOOL _isPreparingForInspectionAccurateDuration;
    BOOL _isInPlayQueue;
    double _bookmarkTime;
    NSDictionary *_streamStateNotificationInfo;
    NSDictionary *_lyricsNotificationInfo;
    NSDictionary *_inspectionNotificationInfo;
    NSDictionary *_playToEndNotificationInfo;
}

+ (id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)arg1 stringURLToNSURLWithKey:(id)arg2 inArrayOfDictionaries:(id)arg3;
- (id)attributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setBookmarkTime:(double)arg1;
- (void)removeFromPlayQueue:(struct OpaqueFigPlayer *)arg1;
- (BOOL)addToPlayQueue:(struct OpaqueFigPlayer *)arg1 afterItem:(struct OpaqueFigPlaybackItem *)arg2;
- (id)initWithDelegate:(id)arg1 item:(id)arg2;
- (void)fpItemNotificationInfo:(id)arg1;
@property BOOL isInPlayQueue; // @synthesize isInPlayQueue=_isInPlayQueue;
- (id)propertiesNeededForInspection;
@property BOOL isPreparingForInspectionAccurateDuration; // @synthesize isPreparingForInspectionAccurateDuration=_isPreparingForInspectionAccurateDuration;
@property BOOL isPreparingForInspectionInitialSamples; // @synthesize isPreparingForInspectionInitialSamples=_isPreparingForInspectionInitialSamples;
- (void)fpItemNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)applyBookmarkTime;
- (void)applyAttributesFromAVItemToFPItem:(id)arg1;
- (void)addFPListeners;
- (id)fpNotificationNames;
- (void)cacheCurrentSize;
- (void)cacheCurrentDuration;
@property(readonly) BOOL isPreparingForInspection;
@property(retain) NSDictionary *playToEndNotificationInfo; // @synthesize playToEndNotificationInfo=_playToEndNotificationInfo;
@property(retain) NSDictionary *inspectionNotificationInfo; // @synthesize inspectionNotificationInfo=_inspectionNotificationInfo;
@property(retain) NSDictionary *lyricsNotificationInfo; // @synthesize lyricsNotificationInfo=_lyricsNotificationInfo;
@property(retain) NSDictionary *streamStateNotificationInfo; // @synthesize streamStateNotificationInfo=_streamStateNotificationInfo;
- (void)removeFPListeners;
- (void)stealControlOfAVItem;
- (void)makeReadyForInspection;
- (struct OpaqueFigPlaybackItem *)fpItem;
- (void)ensureFPItem;
- (id)avItem;
- (id)evenlySpacedThumbnailTimesFromStartTime:(double)arg1 toEndTime:(double)arg2 maxCount:(int)arg3;
- (id)nextThumbnailTimesStartingAt:(double)arg1 minimumInterval:(double)arg2 forwards:(BOOL)arg3 maxCount:(int)arg4;
- (id)formatDetailsForTracks;
- (void)setItemAttribute:(id)arg1 value:(id)arg2 forKey:(id)arg3 error:(id *)arg4;
- (id)itemAttribute:(id)arg1 forKey:(id)arg2;
- (void)dealloc;

@end
