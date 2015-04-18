//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIStatusBarTinting.h"

@class NSString, UIColor, _UIHostedWindowHostingHandle;

@interface _UIRemoteView : UIView <UIStatusBarTinting>
{
    BOOL _actsAsTintView;
    UIColor *_statusBarTintColor;
    _UIHostedWindowHostingHandle *_hostedWindowHostingHandle;
    CDUnknownBlockType _tintColorDidChangeHandler;
}

+ (id)viewWithRemoteContextID:(unsigned int)arg1;
+ (BOOL)_requiresWindowTouches;
+ (id)viewWithHostedWindowHostingHandle:(id)arg1;
+ (Class)layerClass;
@property(nonatomic, setter=_setActsAsTintView:) BOOL _actsAsTintView; // @synthesize _actsAsTintView;
@property(copy, nonatomic) CDUnknownBlockType tintColorDidChangeHandler; // @synthesize tintColorDidChangeHandler=_tintColorDidChangeHandler;
- (void)applyTransformUndoingRemoteRootLayerTransform:(struct CGAffineTransform)arg1 frame:(struct CGRect)arg2;
- (void)setContextID:(unsigned int)arg1;
- (void)_compensateForGlobalMediaTimeAdjustmentsIfNecessary;
- (void)_setStatusBarTintColor:(id)arg1 duration:(double)arg2;
@property(nonatomic, setter=_setInheritsSecurity:) BOOL _inheritsSecurity;
@property(retain, nonatomic) _UIHostedWindowHostingHandle *hostedWindowHostingHandle; // @synthesize hostedWindowHostingHandle=_hostedWindowHostingHandle;
@property(retain, nonatomic, setter=_setStatusBarTintColor:) UIColor *_statusBarTintColor; // @synthesize _statusBarTintColor;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)tintColorDidChange;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

