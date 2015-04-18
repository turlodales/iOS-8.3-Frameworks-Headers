//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDCollection, EDColorsCollection, EDContentFormatsCollection, EDFontsCollection, EDLinksCollection, EDStylesCollection, EDTableStylesCollection;

@interface EDResources : NSObject
{
    EDCollection *mStrings;
    EDContentFormatsCollection *mContentFormats;
    EDFontsCollection *mFonts;
    EDCollection *mAlignmentInfos;
    EDStylesCollection *mStyles;
    EDColorsCollection *mColors;
    EDColorsCollection *mThemes;
    EDCollection *mNames;
    EDLinksCollection *mLinks;
    EDCollection *mBorders;
    EDCollection *mBorder;
    EDCollection *mFills;
    EDCollection *mDifferentialStyles;
    EDTableStylesCollection *mTableStyles;
}

- (id)border;
- (id)styles;
- (void)setThemes:(id)arg1;
- (id)tableStyles;
- (id)alignmentInfos;
- (id)differentialStyles;
- (id)themes;
- (id)initWithStringOptimization:(_Bool)arg1;
- (id)contentFormats;
- (id)fills;
- (id)borders;
- (id)fonts;
- (id)names;
- (id)colors;
- (id)strings;
- (id)links;
- (void)setColors:(id)arg1;
- (void)dealloc;

@end

