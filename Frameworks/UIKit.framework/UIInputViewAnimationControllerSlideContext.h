//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIInputViewSetPlacement, UIView;

@interface UIInputViewAnimationControllerSlideContext : NSObject
{
    UIView *_snapshot;
    UIInputViewSetPlacement *_endPlacement;
    struct CGRect _snapshotEndFrame;
}

@property(retain, nonatomic) UIInputViewSetPlacement *endPlacement; // @synthesize endPlacement=_endPlacement;
@property(nonatomic) struct CGRect snapshotEndFrame; // @synthesize snapshotEndFrame=_snapshotEndFrame;
@property(retain, nonatomic) UIView *snapshot; // @synthesize snapshot=_snapshot;
- (void)dealloc;

@end

