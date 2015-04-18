//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSArray, UIColor;

@interface SKUIMenuViewController : UITableViewController
{
    UIColor *_borderColor;
    id <SKUIMenuViewControllerDelegate> _delegate;
    int _indexOfCheckedTitle;
    NSArray *_menuTitles;
    NSArray *_menuImages;
    int _menuStyle;
}

@property(nonatomic) int menuStyle; // @synthesize menuStyle=_menuStyle;
@property(nonatomic) int indexOfCheckedTitle; // @synthesize indexOfCheckedTitle=_indexOfCheckedTitle;
@property(readonly, nonatomic) NSArray *menuImages; // @synthesize menuImages=_menuImages;
- (void)_reloadViewStyling;
- (id)initWithMenuTitles:(id)arg1 images:(id)arg2;
@property(readonly, nonatomic) NSArray *menuTitles; // @synthesize menuTitles=_menuTitles;
- (id)initWithMenuTitles:(id)arg1;
- (void).cxx_destruct;
- (void)loadView;
@property(nonatomic) __weak id <SKUIMenuViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end

