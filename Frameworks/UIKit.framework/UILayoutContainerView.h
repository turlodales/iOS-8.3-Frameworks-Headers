//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NSCoding.h"

@interface UILayoutContainerView : UIView <NSCoding>
{
    id _delegate;
    BOOL _usesRoundedCorners;
    float _cornerRadius;
    BOOL _usesInnerShadow;
    BOOL _shadowViewsInstalled;
    UIView *_shadowView;
    BOOL _forwardMoveToWindowCallbacks;
}

@property(nonatomic) BOOL forwardMoveToWindowCallbacks; // @synthesize forwardMoveToWindowCallbacks=_forwardMoveToWindowCallbacks;
@property(nonatomic) BOOL usesInnerShadow; // @synthesize usesInnerShadow=_usesInnerShadow;
@property(nonatomic) BOOL usesRoundedCorners; // @synthesize usesRoundedCorners=_usesRoundedCorners;
- (void)_tearDownShadowViews;
- (void)_installShadowViews;
- (void)willMoveToWindow:(id)arg1;
@property(nonatomic) id delegate;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)addSubview:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
