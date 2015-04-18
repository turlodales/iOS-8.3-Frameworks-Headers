//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKPlayerPickerViewController.h>

@class GKInvitePickerDataSource, NSSet;

@interface GKInvitePickerViewController : GKPlayerPickerViewController
{
    GKInvitePickerDataSource *_invitePickerDataSource;
    NSSet *_hiddenPlayers;
}

@property(retain, nonatomic) GKInvitePickerDataSource *invitePickerDataSource; // @synthesize invitePickerDataSource=_invitePickerDataSource;
- (void)updateNoContentTitles;
- (void)configureNearbyDataSource;
- (void)setSupportsNearby:(BOOL)arg1;
- (id)splitingDataSource;
- (id)initWithGame:(id)arg1 hiddenPlayers:(id)arg2;
@property(retain, nonatomic) NSSet *hiddenPlayers; // @synthesize hiddenPlayers=_hiddenPlayers;
- (void)didEnterLoadedState;
- (void)dataSource:(id)arg1 didUpdatePlaceholderVisibility:(BOOL)arg2;
- (void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned int)arg2 didSelectDataSourceWithIndex:(int)arg3;
- (void)didEnterNoContentState;
- (void)configureDataSource;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;

@end

