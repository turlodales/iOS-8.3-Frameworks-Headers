//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@interface SKUITomatoRatingViewElement : SKUIViewElement
{
    int _freshness;
    float _tomatoRating;
}

@property(readonly, nonatomic) float tomatoRating; // @synthesize tomatoRating=_tomatoRating;
@property(readonly, nonatomic) int freshness; // @synthesize freshness=_freshness;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

