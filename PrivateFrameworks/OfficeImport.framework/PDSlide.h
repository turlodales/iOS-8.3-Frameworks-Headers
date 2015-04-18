//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/PDSlideChild.h>

@class NSMutableArray, PDNotesSlide, PDSlideLayout;

@interface PDSlide : PDSlideChild
{
    PDSlideLayout *mSlideLayout;
    NSMutableArray *mComments;
    PDNotesSlide *mNotesSlide;
}

- (void)addComment:(id)arg1;
- (BOOL)hasMappableSlideNumberShape;
- (void)setInheritedTextStyle:(id)arg1 placeholderType:(int)arg2 defaultTextListStyle:(id)arg3;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4;
- (id)parentTextStyleForTables;
- (id)commentAtIndex:(unsigned int)arg1;
- (void)setNotesSlide:(id)arg1;
- (id)notesSlide;
- (void)setSlideLayout:(id)arg1;
- (void)doneWithContent;
- (id)parentSlideBase;
- (id)slideLayout;
- (id)defaultTheme;
- (id)background;
- (void)dealloc;
- (unsigned int)commentCount;

@end

