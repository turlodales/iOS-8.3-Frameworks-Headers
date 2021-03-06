//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

#import "FMFSessionDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FMFDevice, FMFSession, NSMutableArray, NSString;

@interface FMFActiveDeviceSelectionViewController : PSListController <FMFSessionDelegate, UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_deviceList;
    FMFDevice *_currentActiveDevice;
    FMFDevice *_nowActiveDevice;
    FMFSession *_fmfSession;
    int _specifierStartIndex;
}

- (id)specifiers;
- (void)didUpdateActiveDeviceList:(id)arg1;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
@property(retain, nonatomic) NSMutableArray *deviceList; // @synthesize deviceList=_deviceList;
@property(retain, nonatomic) FMFDevice *currentActiveDevice; // @synthesize currentActiveDevice=_currentActiveDevice;
- (void)cancelActiveDeviceSelection;
- (void)saveActiveDeviceSelection;
@property(retain, nonatomic) FMFDevice *nowActiveDevice; // @synthesize nowActiveDevice=_nowActiveDevice;
- (BOOL)_hasThisDeviceAtIndex:(unsigned int)arg1;
- (BOOL)_hasActiveDeviceAtIndex:(unsigned int)arg1;
- (id)_specifierForRowIndex:(int)arg1;
@property(nonatomic) int specifierStartIndex; // @synthesize specifierStartIndex=_specifierStartIndex;
- (void)sortDevicesList;
@property(retain, nonatomic) FMFSession *fmfSession; // @synthesize fmfSession=_fmfSession;
- (void)reloadSpecifiersOnMainQueue;
- (id)initWithSession:(id)arg1;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

