//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MPAVController, UIImageView;

@interface MPMovieTVHUDView : UIView
{
    unsigned int _currentState;
    UIImageView *_playbackMode;
    MPAVController *_player;
}

@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_changeState;
- (void)_fadeOut;
- (void)_playbackStateDidChangeNotification:(id)arg1;

@end

