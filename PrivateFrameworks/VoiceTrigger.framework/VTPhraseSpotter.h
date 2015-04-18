//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface VTPhraseSpotter : NSObject
{
    double _hardwareSampleRate;
    void *_ndetect;
    NSArray *_triggerPhrases;
    double _threshold;
    CDUnknownBlockType _readyCompletion;
    BOOL _isInactiveUser;
    BOOL _inactivityTimerSet;
    int _siriLastUseUpdatedNotificationToken;
    int _suggestedThreshold;
    int _suggestedThresholdChangedNotificationToken;
    BOOL _isMaximized;
    int _numFramesFromPreTrigger;
    double _thresholdSecondChance;
    double _thresholdSiriUp;
    double _thresholdInactiveUser;
    double _thresholdInactiveUserSecondChance;
    BOOL _audioLoggingEnabled;
    double _thresholdLogNearMisses;
    NSString *_audioFileDir;
    NSString *_languageCode;
    NSString *_configPath;
    NSString *_configData;
    NSString *_configLanguageCode;
    NSString *_configVersion;
    unsigned int _extraSamplesAtStart;
    NSString *_resourcePath;
    double _triggerThreshold;
    unsigned int _samplecount;
    unsigned int _samplecountAtLastTriggerStart;
    unsigned int _samplecountAtLastTriggerEnd;
    unsigned int _sampleCountAtFirstChance;
    unsigned int _lastEventEnd;
    int _earlyDetectResetTimer;
    int _secondChanceResetTimer;
    int _loggingResetTimer;
    int _loggingPreDelayTimer;
    double _lastUptime;
    double _lastDowntime;
    double _lastScore;
    double _earlyDetectTime;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    NSObject<OS_dispatch_queue> *_ndetectQueue;
    int _heartbeatCounter;
    int _languageCodeChangedNotificationToken;
    NSObject<OS_dispatch_source> *_languageCodeChangedSource;
    NSObject<OS_dispatch_queue> *_assetChangedQueue;
    NSMutableArray *_nonceTriggerEvents;
    int _nonceTriggerNotificationToken;
    BOOL _registeredForPhraseSpotterNotification;
    BOOL _phraseSpotterEnabled;
    int _hasTriggeredNotifyToken;
    unsigned long long _samplerate;
}

+ (void)initialize;
@property(readonly) unsigned long long samplerate; // @synthesize samplerate=_samplerate;
@property(readonly) double lastScore; // @synthesize lastScore=_lastScore;
- (void)_phraseSpotterEnabledDidChange;
- (id)initWithConfig:(id)arg1 resourcePath:(id)arg2 triggerThreshold:(double)arg3;
- (double)_thresholdFromNdetect:(void *)arg1 withName:(const char *)arg2 defaultTo:(double)arg3;
- (void)_safeConfigureWithNdetect:(void *)arg1 path:(id)arg2 data:(id)arg3 resourcePath:(id)arg4 threshold:(double)arg5;
- (void)_updateSuggestedThreshold;
- (void)_handleAssetChangeForLanguageCode:(id)arg1;
- (void)_updateLanguageCode:(id)arg1;
- (id)_capturePath:(BOOL)arg1;
- (void)_analyzeReset;
- (void)_logMetaData:(id)arg1;
- (id)_analyzeMakeResult:(const struct _ndresult *)arg1 isNearMiss:(BOOL)arg2 isSecondChance:(BOOL)arg3 effectiveThreshold:(double)arg4 isNonce:(BOOL)arg5;
- (id)_analyzeEvents:(const struct _ndresult *)arg1 shouldFireNonce:(BOOL)arg2 isTrigger:(char *)arg3;
- (void)_safeReconfig;
- (void)_unlistenForNonceTrigger;
- (void)_unlistenForSuggestedThreshold;
- (void)_unlistenForLanguageCodeUpdates;
- (void)_resetCounters;
- (void)_checkSiriIsActive;
- (void)_languageCodeChanged;
- (void)_assetsAvailable:(id)arg1;
- (void)_listenForNonceTrigger;
- (void)_listenForSuggestedThreshold;
- (void)_listenForLanguageCodeUpdates;
- (void)_performReadyCompletion;
- (BOOL)_configureWithDefaults;
- (void)_initSingleton;
- (id)initWithHardwareSampleRate:(double)arg1 readyCompletion:(CDUnknownBlockType)arg2;
- (BOOL)_configureWithConfig:(id)arg1 resourcePath:(id)arg2 triggerThreshold:(double)arg3;
- (void).cxx_destruct;
- (void)_commonInit;
@property(readonly) unsigned long long sampleCount;
- (id)init;
- (void)dealloc;
@property(readonly) unsigned long long sampleCountAtEndOfTrigger;
@property(readonly) unsigned long long sampleCountAtStartOfTrigger;
- (id)analyze:(struct AudioBuffer)arg1;
- (id)initWithHardwareSampleRate:(double)arg1;

@end

