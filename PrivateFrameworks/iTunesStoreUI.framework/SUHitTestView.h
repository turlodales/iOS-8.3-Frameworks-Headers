//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface SUHitTestView : UIView
{
    NSMutableArray *_hitTestTargets;
}

- (void)addHitTestTarget:(id)arg1;
- (void)removeHitTestTarget:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end

