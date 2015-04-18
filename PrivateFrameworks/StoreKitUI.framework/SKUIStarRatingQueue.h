//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, SKUIClientContext, SKUIReviewConfiguration, UIWindow;

@interface SKUIStarRatingQueue : NSObject
{
    SKUIClientContext *_clientContext;
    NSOperationQueue *_queue;
    SKUIReviewConfiguration *_reviewConfiguration;
    UIWindow *_window;
}

- (void)_setRating:(int)arg1 forItem:(id)arg2 account:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setRating:(int)arg1 forItem:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithClientContext:(id)arg1 reviewConfiguration:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak UIWindow *window; // @synthesize window=_window;
- (id)init;

@end

