//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, SKUIViewReusePool;

@interface SKUIViewModification : NSObject
{
    SKUIViewReusePool *_viewPool;
    NSMutableArray *_views;
}

- (id)addBarRatingWithElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (id)_addImageViewWithReuseIdentifier:(id)arg1 viewElement:(id)arg2 context:(id)arg3;
- (void)_styleItemOfferButton:(id)arg1 forElement:(id)arg2 context:(id)arg3;
- (id)_itemStateForButton:(id)arg1;
- (id)addTextViewWithElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (id)addLabelViewWithOrdinalElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (id)addOfferViewWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (id)addHorizontalListWithElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (id)addHeaderViewWithElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (id)addStarRatingViewWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (id)addStarRatingControlViewWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (id)addTomatoRatingViewWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (id)addDividerWithElement:(id)arg1 context:(id)arg2;
- (void)addView:(id)arg1;
- (id)addMenuButtonWithTitleItem:(id)arg1 width:(float)arg2 context:(id)arg3;
- (id)addBadgeViewWithElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (id)addLabelViewWithElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (id)addButtonWithElement:(id)arg1 width:(float)arg2 context:(id)arg3;
@property(readonly, nonatomic) NSArray *views; // @synthesize views=_views;
- (id)initWithViewReusePool:(id)arg1;
- (id)addImageViewWithElement:(id)arg1 context:(id)arg2;
- (id)addImageViewWithVideoElement:(id)arg1 context:(id)arg2;
- (id)addReusableViewWithReuseIdentifier:(id)arg1;
- (void).cxx_destruct;

@end

