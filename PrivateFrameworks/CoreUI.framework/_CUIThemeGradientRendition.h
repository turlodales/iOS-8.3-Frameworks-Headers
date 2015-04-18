//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class CUIThemeGradient;

@interface _CUIThemeGradientRendition : CUIThemeRendition
{
    CUIThemeGradient *gradient;
    float gradientAngle;
}

+ (struct __CUIThemeGradientRenditionInitializerStruct)_parseGradientInfoFromCSIHeader:(const struct _csiheader *)arg1;
+ (id)_nodesFromNodeList:(struct _csigradientdatanode *)arg1 count:(unsigned int)arg2 header:(const struct _csiheader *)arg3;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(int)arg3;
- (float)gradientDrawingAngle;
- (unsigned int)gradientStyle;
- (id)gradient;
- (void)dealloc;

@end

