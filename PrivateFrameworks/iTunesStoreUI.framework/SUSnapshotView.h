//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface SUSnapshotView : UIView
{
    UIView *_imageView;
}

- (void)_takeCGSnapshotOfView:(id)arg1;
- (void)_takeIOSurfaceSnapshotOfView:(id)arg1;
- (void)snapshotView:(id)arg1 usingIOSurface:(BOOL)arg2;
- (void)layoutSubviews;
- (void)dealloc;

@end

