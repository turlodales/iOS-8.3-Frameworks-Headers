//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIItem;

@interface SKUIGiftTemplateViewElement : SKUIViewElement
{
    int _giftType;
    NSString *_productBuyParams;
    long long _productItemIdentifier;
}

@property(readonly, nonatomic) SKUIItem *productItem;
@property(readonly, nonatomic) int giftType; // @synthesize giftType=_giftType;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (void).cxx_destruct;

@end

