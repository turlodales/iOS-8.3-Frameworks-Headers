//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUNavigationItem.h>

@class NSNumber;

@interface SUDelayedNavigationItem : SUNavigationItem
{
    id _delayedBackButtonTitle;
    id _delayedLeftBarButtonItems;
    NSNumber *_delayedLeftItemsSupplementBackButton;
    id _delayedTitle;
    id _delayedTitleView;
    id _delayedRightBarButtonItems;
    BOOL _shouldDelayChanges;
    SUNavigationItem *_wrappedNavigationItem;
}

@property(retain, nonatomic) SUNavigationItem *wrappedNavigationItem; // @synthesize wrappedNavigationItem=_wrappedNavigationItem;
- (void)_scheduleCommit;
@property(nonatomic) BOOL shouldDelayChanges; // @synthesize shouldDelayChanges=_shouldDelayChanges;
- (void)_prepareButtonItemForDisplay:(id)arg1;
- (void)commitDelayedChanges;
- (void)setTitleView:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftItemsSupplementBackButton:(BOOL)arg1;
- (void)setBackButtonTitle:(id)arg1;
- (id)rightBarButtonItem;
- (id)leftBarButtonItem;
- (void)setTitleView:(id)arg1;
- (void)setRightBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setRightBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (id)initWithNavigationItem:(id)arg1;
- (id)titleView;
- (id)rightBarButtonItems;
- (id)backButtonTitle;
- (id)title;
- (BOOL)leftItemsSupplementBackButton;
- (id)leftBarButtonItems;
- (id)navigationBar;
- (void)setTitle:(id)arg1;
- (void)dealloc;

@end
