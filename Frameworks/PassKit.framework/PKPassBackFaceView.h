//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKit/PKPassFaceView.h>

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class BluetoothManager, NSArray, NSMutableDictionary, NSString, NSTimer, PKLinkedAppView, PKSettingTableCell, UIButton, UILabel, UIRefreshControl, UITableView, UIView;

@interface PKPassBackFaceView : PKPassFaceView <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate>
{
    UIRefreshControl *_refreshControl;
    BOOL _tall;
    UILabel *_updateDateLabel;
    UIButton *_doneButton;
    PKLinkedAppView *_linkedApp;
    UIView *_locationHelpView;
    UITableView *_bodyTable;
    PKSettingTableCell *_automaticUpdates;
    PKSettingTableCell *_showInLockScreen;
    NSArray *_rowCountBySection;
    unsigned int _settingsSection;
    unsigned int _linkedAppSection;
    unsigned int _fieldsSection;
    NSMutableDictionary *_fieldCellsByIndexPath;
    NSTimer *_refreshTimeoutTimer;
    BluetoothManager *_btManager;
    BOOL _isBluetoothEnabled;
    BOOL _isLocationEnabled;
    BOOL _isWifiEnabled;
    BOOL _showsDelete;
    BOOL _showsLinkedApp;
    BOOL _showsSettings;
    BOOL _showsLinks;
}

+ (id)_linkTextAttributes;
+ (id)_linkColor;
+ (BOOL)isWifiEnabled;
- (void)_doneButtonPressed:(id)arg1;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)willMoveToSuperview:(id)arg1;
- (struct CGSize)contentSize;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)dealloc;
@property(nonatomic) PKLinkedAppView *linkedApp; // @synthesize linkedApp=_linkedApp;
@property(nonatomic) BOOL showsSettings; // @synthesize showsSettings=_showsSettings;
@property(nonatomic) BOOL showsLinkedApp; // @synthesize showsLinkedApp=_showsLinkedApp;
@property(nonatomic) BOOL showsDelete; // @synthesize showsDelete=_showsDelete;
- (BOOL)showBackgroundMatte;
- (BOOL)_isBluetoothEnabled;
@property(nonatomic) BOOL showsLinks; // @synthesize showsLinks=_showsLinks;
- (void)setupRefreshControl:(id)arg1;
- (BOOL)_settingsAvailable;
- (BOOL)_linkedAppAvailable;
- (BOOL)showUpdateDateLabel;
- (BOOL)deleteEnabled;
- (void)_deleteButtonPressed:(id)arg1;
- (void)refreshControlValueChanged:(id)arg1;
- (BOOL)shouldAllowRefresh;
- (id)_updateLabelAttributedStringWithString:(id)arg1;
- (id)_updateLabelAttributedStringWithDate:(id)arg1;
- (void)_refreshTimeoutFired;
- (void)pushSettingsFromViewToModel;
- (id)_fieldForIndexPath:(id)arg1;
- (id)_locationHelpViewForTableView:(id)arg1;
- (id)_fieldCellForIndexPath:(id)arg1;
- (id)_settingsCellForRow:(unsigned int)arg1;
- (id)_locationRelevancyHelpText;
- (void)_bluetoothPowerChanged:(id)arg1;
- (void)_wifiChanged:(id)arg1;
- (void)createBodyInvariantViews;
- (id)_relevantBuckets;
- (BOOL)isFrontFace;
- (id)initTall:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

