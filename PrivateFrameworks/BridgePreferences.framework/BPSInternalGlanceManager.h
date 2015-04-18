//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NGSSettingsManagerDelegate.h"

@class NGSSettingsManager, NSHashTable, NSString;

@interface BPSInternalGlanceManager : NSObject <NGSSettingsManagerDelegate>
{
    BOOL _settingsAreValid;
    NGSSettingsManager *_glanceManager;
    NSHashTable *_observers;
}

+ (id)sharedGlanceManager;
- (void)invalidateSettings;
@property(nonatomic) BOOL settingsAreValid; // @synthesize settingsAreValid=_settingsAreValid;
@property(readonly, nonatomic) NGSSettingsManager *glanceManager; // @synthesize glanceManager=_glanceManager;
- (void)settingsManagerReloadedGlances:(id)arg1;
- (void)loadSettingsIfNeeded;
- (void)_loadSettings;
- (void)addObserver:(id)arg1;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

