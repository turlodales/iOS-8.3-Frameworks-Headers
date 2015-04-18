//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class SKUIClientContext, SKUIFacebookLikeStatus, SKUIReviewsFacebookView;

@interface SKUIReviewsFacebookViewController : UIViewController
{
    SKUIClientContext *_clientContext;
    id <SKUIReviewsFacebookViewControllerDelegate> _delegate;
    SKUIFacebookLikeStatus *_facebookLikeStatus;
    SKUIReviewsFacebookView *_facebookView;
}

- (void)_changeStatusToUserLiked:(BOOL)arg1;
- (void)_toggleLike:(id)arg1;
- (void)_reloadFacebookView;
@property(copy, nonatomic) SKUIFacebookLikeStatus *facebookLikeStatus; // @synthesize facebookLikeStatus=_facebookLikeStatus;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)loadView;
@property(nonatomic) __weak id <SKUIReviewsFacebookViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

@end

