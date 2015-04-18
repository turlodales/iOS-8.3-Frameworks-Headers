//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIImageView;

@interface PKPaymentSetupHeroView : UIView
{
    int _context;
    unsigned int _screenType;
    BOOL _isAnimating;
    UIImageView *_heroImageView;
    UIImageView *_presentedCard;
    NSMutableArray *_cardViews;
}

- (void)startAnimation;
- (void)stopAnimation;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithContext:(int)arg1 screenType:(unsigned int)arg2;
- (void)_transitionFromCard:(id)arg1 toCard:(id)arg2;
- (unsigned int)_indexOfNextObject:(id)arg1 withArray:(id)arg2;
- (void)_createCardViews:(id)arg1;
- (void)_createSubviews;

@end

