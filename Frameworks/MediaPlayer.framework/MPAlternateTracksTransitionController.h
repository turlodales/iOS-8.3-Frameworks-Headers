//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPTransitionController.h>

@class MPVideoViewController, UIImageView;

@interface MPAlternateTracksTransitionController : MPTransitionController
{
    MPVideoViewController *_videoController;
    UIImageView *_snapshotCoverImageView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MPVideoViewController *videoController; // @synthesize videoController=_videoController;
- (void)performTransition:(unsigned int)arg1;

@end

