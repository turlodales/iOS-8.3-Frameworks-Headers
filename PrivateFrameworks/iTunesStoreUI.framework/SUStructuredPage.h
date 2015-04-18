//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SUItem, SUItemList, SUPageSectionGroup, SUStorePageProtocol;

@interface SUStructuredPage : NSObject <NSCopying>
{
    BOOL _artworkShouldFitWidth;
    float _artworkWidth;
    BOOL _didShowDialog;
    int _displayStyle;
    SUItem *_item;
    SUItemList *_itemList;
    SUStorePageProtocol *_protocol;
    SUPageSectionGroup *_sectionsGroup;
    BOOL _shouldHideSignInButton;
    NSString *_title;
    int _type;
    BOOL _wantsIndexBar;
}

+ (int)pageTypeForStorePageString:(id)arg1;
+ (int)pageTypeForStorePageDictionary:(id)arg1;
@property(readonly, nonatomic) BOOL wantsIndexBar; // @synthesize wantsIndexBar=_wantsIndexBar;
@property(readonly, nonatomic) BOOL shouldHideSignInButton; // @synthesize shouldHideSignInButton=_shouldHideSignInButton;
@property(retain, nonatomic) SUPageSectionGroup *sectionsGroup; // @synthesize sectionsGroup=_sectionsGroup;
@property(readonly, nonatomic) int displayStyle; // @synthesize displayStyle=_displayStyle;
@property(readonly, nonatomic) float artworkWidth; // @synthesize artworkWidth=_artworkWidth;
@property(readonly, nonatomic) BOOL artworkShouldFitWidth; // @synthesize artworkShouldFitWidth=_artworkShouldFitWidth;
- (int)_displayStyleForString:(id)arg1;
- (id)_copyItemFromDictionary:(id)arg1;
@property(readonly, nonatomic) BOOL didShowDialog; // @synthesize didShowDialog=_didShowDialog;
- (void)_parseProtocolFromDictionary:(id)arg1;
- (void)_parseTemplateParametersFromDictionary:(id)arg1;
- (void)_parseItemsFromDictionary:(id)arg1;
@property(readonly, nonatomic) BOOL hasDisplayableContent;
@property(retain, nonatomic) SUItemList *itemList; // @synthesize itemList=_itemList;
- (BOOL)loadFromDictionary:(id)arg1;
@property(retain, nonatomic) SUStorePageProtocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) SUItem *item; // @synthesize item=_item;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)dealloc;

@end

