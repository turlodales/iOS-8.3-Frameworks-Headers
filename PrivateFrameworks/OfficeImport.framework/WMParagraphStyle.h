//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/WMStyle.h>

@interface WMParagraphStyle : WMStyle
{
    BOOL mIsInTextFrame;
}

+ (BOOL)isShadingNull:(id)arg1;
- (id)initWithWDParagraphProperties:(id)arg1 isInTextFrame:(BOOL)arg2;
- (void)mapBorders:(id)arg1;
- (id)leadingMarginPropertyNameWithOverridesFromProperties:(id)arg1;
- (BOOL)isRTLWithOverridesFromProperties:(id)arg1;
- (void)addParagraphStyleCharacterProperties:(id)arg1;
- (id)initWithWDStyle:(id)arg1 isInTextFrame:(BOOL)arg2;
- (void)addParagraphProperties:(id)arg1 fromListLevelProperties:(BOOL)arg2;

@end

