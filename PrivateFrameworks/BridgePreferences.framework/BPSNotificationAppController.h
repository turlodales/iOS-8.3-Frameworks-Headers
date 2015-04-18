//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

#import "BPSInternalGlanceObserverDelegate.h"

@class BBSectionInfo, BPSInternalGlanceManager, NGSGlance, NPSDomainAccessor, NSMutableArray, NSMutableDictionary, NSString, PSSpecifier;

@interface BPSNotificationAppController : PSListController <BPSInternalGlanceObserverDelegate>
{
    BOOL _mirrorSettings;
    NSMutableArray *_notificationSpecifiers;
    NSMutableDictionary *_sectionInfo;
    unsigned int _settingsMode;
    NSString *_bundleIdentifier;
    BBSectionInfo *_bbSectionInfo;
    NSMutableArray *_notificationApplicationSpecifiers;
    NGSGlance *_glance;
    BPSInternalGlanceManager *_manager;
    NPSDomainAccessor *_bbAppsSettings;
}

- (BOOL)shouldReloadSpecifiersOnResume;
- (id)specifiers;
- (int)alertType;
@property(retain, nonatomic) BPSInternalGlanceManager *manager; // @synthesize manager=_manager;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NPSDomainAccessor *bbAppsSettings; // @synthesize bbAppsSettings=_bbAppsSettings;
@property(retain, nonatomic) NGSGlance *glance; // @synthesize glance=_glance;
@property(retain, nonatomic) NSMutableArray *notificationApplicationSpecifiers; // @synthesize notificationApplicationSpecifiers=_notificationApplicationSpecifiers;
@property(retain, nonatomic) BBSectionInfo *bbSectionInfo; // @synthesize bbSectionInfo=_bbSectionInfo;
@property(nonatomic) unsigned int settingsMode; // @synthesize settingsMode=_settingsMode;
@property(readonly, nonatomic) BOOL mirrorSettings; // @synthesize mirrorSettings=_mirrorSettings;
@property(readonly, nonatomic) NSMutableArray *notificationSpecifiers; // @synthesize notificationSpecifiers=_notificationSpecifiers;
@property(readonly, nonatomic) PSSpecifier *previewSwitchSpecifier;
@property(readonly, nonatomic) BOOL showPreview;
- (id)showAlertsValue:(id)arg1;
- (void)setShowAlertsValue:(id)arg1 forSpecifier:(id)arg2;
- (void)_showSettingsNotifications;
- (id)glanceSpecifierForIdentifier:(id)arg1;
- (id)showPreviewValue:(id)arg1;
- (void)setShowPreviewValue:(id)arg1 forSpecifier:(id)arg2;
- (id)localizedPreviewChoiceTitle;
- (void)mirrorSettingsChanged:(BOOL)arg1;
- (void)writeSectionState;
- (id)localizedPaneTitle;
- (id)customGroupSpecifierForDescription:(id)arg1;
- (id)mirroredApplicationGroupSpecifiers;
- (id)localizedMirroringDetailFooter;
- (id)applicationGroupSpecifiers;
- (BOOL)suppressAllMirrorSpecifiers;
- (void)removeMirrorOptions;
- (BOOL)suppressMirrorOption;
- (id)vibrationValue:(id)arg1;
- (void)setVibrationValue:(id)arg1 forSpecifier:(id)arg2;
- (id)soundsValue:(id)arg1;
- (void)setSoundsValue:(id)arg1 forSpecifier:(id)arg2;
@property(readonly, nonatomic) BOOL showAlerts;
- (void)removeAlertOptions;
- (BOOL)suppressAlertSpecifiers;
- (void)updateSubsections;
- (BOOL)caresAboutSubsections;
- (void)setMirrorSettings:(BOOL)arg1;
- (id)sectionInfoForBBSectionInfo:(id)arg1;
- (id)bulletinBoardSettings;
- (id)applicationBundleIdentifier;
- (id)showsGlance:(id)arg1;
- (void)setShowsGlance:(id)arg1 forSpecifier:(id)arg2;
- (void)settingsManagerReloadedGlances:(id)arg1;
- (void).cxx_destruct;
- (id)bundle;
- (void)viewWillAppear:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) NSMutableDictionary *sectionInfo; // @synthesize sectionInfo=_sectionInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

