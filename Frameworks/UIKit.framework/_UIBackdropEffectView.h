//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CABackdropLayer;

@interface _UIBackdropEffectView : UIView
{
    CABackdropLayer *_backdropLayer;
    float _zoom;
}

+ (Class)layerClass;
@property(nonatomic) float zoom; // @synthesize zoom=_zoom;
@property(retain, nonatomic) CABackdropLayer *backdropLayer; // @synthesize backdropLayer=_backdropLayer;
- (void)backdropLayerStatisticsDidChange:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)init;
- (void)dealloc;

@end

