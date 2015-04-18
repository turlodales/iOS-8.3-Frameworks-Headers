//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MPUCellConfiguration : NSObject
{
}

+ (float)tableViewCellHeight;
+ (id)tableViewBackgroundColor;
+ (void)configureView:(id)arg1 asynchronously:(BOOL)arg2 forEntity:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
+ (void)configureCellForSizing:(id)arg1;
+ (id)tableViewCellBackgroundColor;
+ (void)configureDownloadStatusForCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned int)arg4 animated:(BOOL)arg5;
+ (int)tableViewSeparatorStyle;
+ (struct UIEdgeInsets)tableViewSeparatorInset;
+ (id)tableViewSeparatorColor;
+ (void)configureCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned int)arg4 animated:(BOOL)arg5;
+ (id)mediaEntityPropertiesToFetch;
+ (BOOL)wantsScrollViewDidEndDecelerating;
+ (BOOL)wantsScrollViewDidScrollInScrollView;
+ (BOOL)wantsScrollViewDidScroll;
+ (float)expandedTableViewCellHeight;
+ (void)didEndDisplayingCell:(id)arg1 withViewController:(id)arg2 atIndex:(unsigned int)arg3;
+ (void)willDisplayCell:(id)arg1 inTableView:(id)arg2 withViewController:(id)arg3 atIndex:(unsigned int)arg4;
+ (void)configureCellAfterDeceleration:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned int)arg4 animated:(BOOL)arg5;
+ (void)handleScrollViewDidEndDeceleratingForCell:(id)arg1 viewController:(id)arg2;
+ (void)handleScrollViewDidScrollForCell:(id)arg1 inScrollView:(id)arg2 viewController:(id)arg3;
+ (void)handleScrollViewDidScrollForCell:(id)arg1 viewController:(id)arg2;
+ (id)reuseIdentifier;
+ (Class)tableViewCellClass;

@end

