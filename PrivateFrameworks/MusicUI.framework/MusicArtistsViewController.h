//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicUI/MusicTableViewController.h>

@interface MusicArtistsViewController : MusicTableViewController
{
    BOOL _allowsActions;
}

+ (id)itemPersistentIDPropertyForGroupingType:(int)arg1;
+ (int)containerItemType;
+ (id)actionCellConfigurationClasses;
+ (id)persistentIDPropertyForGroupingType:(int)arg1;
+ (int)groupingType;
- (void)_appDefaultsDidChangeNotification:(id)arg1;
- (id)_viewControllerForSelectedMediaEntity:(id)arg1;
- (BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (BOOL)music_appendCurrentUserActivityContainerItems:(id)arg1 previousViewController:(id)arg2 nextViewController:(id)arg3;
- (BOOL)shouldShowActionCellConfiguration:(Class)arg1;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (void)defaultsDidChange;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;
@property(nonatomic) BOOL allowsActions; // @synthesize allowsActions=_allowsActions;

@end

