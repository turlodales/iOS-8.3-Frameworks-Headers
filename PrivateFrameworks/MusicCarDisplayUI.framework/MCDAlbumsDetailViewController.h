//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicCarDisplayUI/MCDTableViewController.h>

@interface MCDAlbumsDetailViewController : MCDTableViewController
{
    float _maximumDurationWidth;
}

+ (id)actionCellConfigurationClasses;
- (void)_updateTitle;
@property(readonly, nonatomic) float maximumDurationWidth;
- (BOOL)shouldShowActionCellConfiguration:(Class)arg1;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (void)viewDidLoad;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)reloadData;

@end

