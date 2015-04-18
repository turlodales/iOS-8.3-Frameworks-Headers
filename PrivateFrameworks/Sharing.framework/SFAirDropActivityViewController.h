//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SFAirDropBrowserDelegate.h"
#import "SFPersonCollectionViewCellDelegate.h"
#import "SFWirelessSettingsControllerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class ALAssetsLibrary, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<SFAirDropActivityViewControllerDelegate>, NSOperationQueue, NSString, SFAirDropActiveIconView, SFAirDropBrowser, SFAirDropIconView, SFCollectionViewFlowLayout, SFWirelessSettingsController, UICollectionView, UILabel;

@interface SFAirDropActivityViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, SFAirDropBrowserDelegate, SFPersonCollectionViewCellDelegate, SFWirelessSettingsControllerDelegate>
{
    int _attachmentCount;
    NSString *_sessionID;
    int _sharedItemsRequestID;
    UILabel *_titleLabel;
    SFAirDropIconView *_airDropIconView;
    NSLayoutConstraint *_airDropIconLeftConstraint;
    UILabel *_noWifiLabel;
    NSLayoutConstraint *_noWifiRightConstraint;
    SFAirDropActiveIconView *_airDropActiveIconView;
    NSLayoutConstraint *_airDropActiveIconLeftConstraint;
    UILabel *_instructionsLabel;
    NSLayoutConstraint *_instructionsRightConstraint;
    SFAirDropActiveIconView *_airDropInactiveIconView;
    NSLayoutConstraint *_airDropInactiveIconLeftConstraint;
    UILabel *_wirelessAccessPointLabel;
    NSLayoutConstraint *_wirelessAccessPointRightConstraint;
    UICollectionView *_collectionView;
    SFCollectionViewFlowLayout *_flowLayout;
    SFAirDropBrowser *_browser;
    id _progressToken;
    NSMutableDictionary *_personToProgress;
    NSMutableDictionary *_personToStoredTransferFinalState;
    NSMutableDictionary *_personToSharedItemsRequestID;
    NSMutableDictionary *_sharedItemsRequestIDToPreviewPhoto;
    SFWirelessSettingsController *_wirelessSettings;
    NSMutableSet *_cachedSharedItems;
    BOOL _itemsRequested;
    BOOL _itemsReady;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_objectChanges;
    ALAssetsLibrary *_assetsLibrary;
    int _generatedPreviews;
    BOOL _sharedItemsAvailable;
    BOOL _otherActivityViewPresented;
    BOOL _darkStyleOnLegacyApp;
    NSObject<SFAirDropActivityViewControllerDelegate> *_delegate;
}

+ (id)classesForItem:(id)arg1;
+ (BOOL)airDropActivityCanPerformActivityWithItems:(id)arg1;
+ (BOOL)isAirDropAvailable;
@property(nonatomic) BOOL otherActivityViewPresented; // @synthesize otherActivityViewPresented=_otherActivityViewPresented;
@property(nonatomic) BOOL sharedItemsAvailable; // @synthesize sharedItemsAvailable=_sharedItemsAvailable;
- (BOOL)createURLPayloadForData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)cellForPerson:(id)arg1;
- (BOOL)isValidPayload:(id)arg1 toPerson:(id)arg2 invalidMessage:(id *)arg3;
- (void)unpublishedProgressForPersonWithRealName:(id)arg1;
- (void)subscribedProgress:(id)arg1 forPersonWithRealName:(id)arg2;
- (void)generateSpecialPreviewPhotoForRequestID:(int)arg1;
- (void)startTransferForPeople:(id)arg1;
- (BOOL)isTetheredModeEnabled;
- (id)attributedStringWithTitle:(id)arg1 content:(id)arg2;
- (id)wifiBtHelpTextLocalizedStringKey;
- (void)enableAirDropRequiredFeatures;
- (void)adjustViewsToInterfaceOrientation:(int)arg1;
- (void)updateContentAreaAnimated:(BOOL)arg1;
- (void)startBrowsing;
- (void)unsubscribeToProgresses;
- (void)subscribeToProgresses;
- (void)personCollectionViewCellDidFinishTransfer:(id)arg1;
- (void)personCollectionViewCellDidTerminateTransfer:(id)arg1;
- (void)personCollectionViewCellDidStartTransfer:(id)arg1;
- (BOOL)isBluetoothEnabled;
- (void)wirelessSettingsDidChange:(id)arg1;
- (void)browserDidChangePeople:(id)arg1;
- (void)browser:(id)arg1 didInsertPersonAtIndex:(unsigned int)arg2;
- (void)browser:(id)arg1 didDeletePersonAtIndex:(unsigned int)arg2;
- (void)browserWillChangePeople:(id)arg1;
- (void)stopBrowsing;
- (void)setNeedsRequestingSharedItems;
@property(readonly, nonatomic) struct CGSize suggestedThumbnailSize;
- (BOOL)addData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5;
- (BOOL)addImage:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (BOOL)addURL:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (BOOL)addAttributedString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (BOOL)addString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL darkStyleOnLegacyApp; // @synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
@property(nonatomic) __weak NSObject<SFAirDropActivityViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (BOOL)isWifiEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

