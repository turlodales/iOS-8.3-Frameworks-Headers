//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKBRenderFactory.h>

@interface UIKBRenderFactoryNumberPad : UIKBRenderFactory
{
}

- (void)_customizeSymbolStyle:(id)arg1 secondaryStyle:(id)arg2 forKey:(id)arg3 contents:(id)arg4;
- (struct CGPoint)centerColumnLetterOffset;
- (struct CGPoint)centerColumnNumberOffset;
- (struct CGPoint)rightColumnLetterOffset;
- (struct CGPoint)rightColumnNumberOffset;
- (struct CGPoint)leftColumnLetterOffset;
- (struct CGPoint)leftColumnNumberOffset;
- (float)letterFontSize;
- (float)numberFontSize;
- (struct CGPoint)loneZeroOffset;
- (struct CGPoint)dictationGlyphOffset;
- (struct CGPoint)deleteGlyphOffset;
- (void)setupLayoutSegments;
- (id)controlKeyForegroundColorName;
- (int)lightHighQualityEnabledBlendForm;
- (id)controlKeyDividerColorName;
- (id)defaultKeyDividerColorName;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)controlKeyBackgroundColorName;

@end
