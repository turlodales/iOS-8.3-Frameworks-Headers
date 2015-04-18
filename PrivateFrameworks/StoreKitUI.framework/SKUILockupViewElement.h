//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIFullscreenImageViewElement;

@interface SKUILockupViewElement : SKUIViewElement
{
    BOOL _enabled;
    int _lockupViewType;
}

@property(readonly, nonatomic) BOOL containsElementGroups;
@property(readonly, nonatomic) int lockupViewType; // @synthesize lockupViewType=_lockupViewType;
@property(readonly, nonatomic) SKUIFullscreenImageViewElement *fullscreenImage;
- (int)pageComponentType;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (BOOL)isEnabled;

@end

