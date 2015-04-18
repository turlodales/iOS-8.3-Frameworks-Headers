//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, _UIBackdropViewSettings;

@interface SBLockOverlayStyleProperties : NSObject
{
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIColor *_tintColor;
    float _tintAlpha;
    float _blurRadius;
    unsigned int _style;
    int _quality;
    _UIBackdropViewSettings *_settings;
}

@property(readonly, nonatomic) float tintAlpha; // @synthesize tintAlpha=_tintAlpha;
- (id)_settingsForStyle;
- (id)_stringForQuality;
- (id)_stringForStyle;
- (id)initWithStyle:(unsigned int)arg1 quality:(int)arg2;
@property(readonly, nonatomic) int graphicsQuality; // @synthesize graphicsQuality=_quality;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) unsigned int style; // @synthesize style=_style;
@property(readonly, nonatomic) float blurRadius; // @synthesize blurRadius=_blurRadius;
- (id)description;
- (void)dealloc;
- (void)_configure;

@end

