//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptViewController.h>

@class SKUIItem;

@interface SUScriptGiftViewController : SUScriptViewController
{
    int _giftCategory;
    SKUIItem *_item;
}

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;
@property(readonly, nonatomic) int giftCategoryMedia;
@property(readonly, nonatomic) int giftCategoryBooks;
@property(readonly, nonatomic) int giftCategoryApps;
- (void)setProductGiftItem:(id)arg1;
- (void)setCreditGiftStyle:(int)arg1;
- (id)newNativeViewController;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;

@end

