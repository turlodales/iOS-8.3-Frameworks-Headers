//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PUEditPluginHostViewControllerDataSource.h"
#import "PUEditPluginHostViewControllerDelegate.h"
#import "UIActivityGroupViewControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString, PHAsset, PUEditPlugin, PUEditPluginManager, UINavigationController, UIViewController;

@interface PUEditPluginSession : NSObject <PUEditPluginHostViewControllerDataSource, PUEditPluginHostViewControllerDelegate, UINavigationControllerDelegate, UIActivityGroupViewControllerDelegate>
{
    PUEditPluginManager *_pluginManager;
    UINavigationController *_pluginNavigationController;
    PUEditPlugin *_currentPlugin;
    BOOL _isAvailable;
    id <PUEditPluginSessionDataSource> _dataSource;
    id <PUEditPluginSessionDelegate> _delegate;
    PHAsset *_asset;
    int _adjustmentType;
    UIViewController *__hostViewController;
}

@property(readonly, nonatomic) int mediaType;
@property(nonatomic) BOOL isAvailable; // @synthesize isAvailable=_isAvailable;
@property(nonatomic) int adjustmentType; // @synthesize adjustmentType=_adjustmentType;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)activityGroupViewController:(id)arg1 didSelectActivity:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
@property(nonatomic) __weak id <PUEditPluginSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <PUEditPluginSessionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)init;
- (void)dealloc;
- (void)dismissSession;
- (void)_setAdjustmentType:(int)arg1;
@property(nonatomic, setter=_setHostViewController:) __weak UIViewController *_hostViewController; // @synthesize _hostViewController=__hostViewController;
- (void)_setAsset:(id)arg1;
- (void)_beginSessionWithAsset:(id)arg1 fromViewController:(id)arg2 sourceElement:(id)arg3;
- (void)_setIsAvailable:(BOOL)arg1;
- (void)_updateAvailability;
- (void)_pluginManagerPluginsDidChange:(id)arg1;
- (void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;
- (void)beginSessionWithAsset:(id)arg1 fromViewController:(id)arg2 sourceElement:(id)arg3;
- (void)editPluginHostViewController:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)editPluginHostViewController:(id)arg1 didFinishWithSuccess:(BOOL)arg2;
- (void)editPluginHostViewController:(id)arg1 loadItemProviderWithHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

