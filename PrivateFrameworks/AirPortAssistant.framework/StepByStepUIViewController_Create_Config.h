//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AirPortAssistant/StepByStepUIViewController.h>

#import "TableViewManagerDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class NSString, RecommendationActionController;

@interface StepByStepUIViewController_Create_Config : StepByStepUIViewController <TableViewManagerDelegate, UIPopoverControllerDelegate>
{
    NSString *_wifiName;
    NSString *_personalizedBaseName;
    NSString *_basePassword;
    NSString *_basePasswordVerify;
    NSString *_wifiPassword;
    NSString *_wifiPasswordVerify;
    NSString *_diskPassword;
    NSString *_diskPasswordVerify;
    BOOL useSinglePassword;
    BOOL hasDisk;
    BOOL useDifferentDiskPassword;
    RecommendationActionController *actionController;
}

- (void)updateSinglePasswordSwitchExplanation:(BOOL)arg1;
- (void)addDiskPasswordSection;
- (void)updateTableForMultiplePasswords;
- (void)updateTableForSinglePassword;
- (BOOL)validateAndSetValues;
@property(copy, nonatomic) NSString *diskPasswordVerify; // @synthesize diskPasswordVerify=_diskPasswordVerify;
@property(nonatomic) BOOL useDifferentDiskPassword; // @synthesize useDifferentDiskPassword;
@property(copy, nonatomic) NSString *basePasswordVerify; // @synthesize basePasswordVerify=_basePasswordVerify;
@property(copy, nonatomic) NSString *wifiPasswordVerify; // @synthesize wifiPasswordVerify=_wifiPasswordVerify;
- (void)validateAndUpdateNextButton;
- (void)updateTable;
@property(copy, nonatomic) NSString *wifiName; // @synthesize wifiName=_wifiName;
@property(retain, nonatomic) RecommendationActionController *actionController; // @synthesize actionController;
@property(nonatomic) BOOL useSinglePassword; // @synthesize useSinglePassword;
@property(copy, nonatomic) NSString *diskPassword; // @synthesize diskPassword=_diskPassword;
@property(nonatomic) BOOL hasDisk; // @synthesize hasDisk;
@property(copy, nonatomic) NSString *basePassword; // @synthesize basePassword=_basePassword;
@property(copy, nonatomic) NSString *wifiPassword; // @synthesize wifiPassword=_wifiPassword;
@property(copy, nonatomic) NSString *personalizedBaseName; // @synthesize personalizedBaseName=_personalizedBaseName;
- (void)setupTable;
- (void)setupInitialTableHeaderConfiguration;
- (void)textFieldDidChangeAtIndexPath:(id)arg1;
- (void)switchTouchedInCellAtIndexPath:(id)arg1 forSwitchIndex:(unsigned int)arg2 isOn:(BOOL)arg3;
- (BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned int)arg3 toString:(id)arg4;
- (void)touchInCellAtIndexPath:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

