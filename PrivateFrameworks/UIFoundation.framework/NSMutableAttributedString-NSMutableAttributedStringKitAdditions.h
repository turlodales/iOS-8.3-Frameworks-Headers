//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableAttributedString.h"

@interface NSMutableAttributedString (NSMutableAttributedStringKitAdditions)
- (void)convertWritingDirectionToBidiControlCharacters;
- (BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (BOOL)readFromFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (void)unscriptRange:(struct _NSRange)arg1;
- (void)subscriptRange:(struct _NSRange)arg1;
- (void)superscriptRange:(struct _NSRange)arg1;
- (void)setAlignment:(int)arg1 range:(struct _NSRange)arg2;
- (void)fixAttributesInRange:(struct _NSRange)arg1;
- (struct _NSRange)convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned int)arg1;
- (struct _NSRange)convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned int)arg1;
- (void)setBaseWritingDirection:(int)arg1 range:(struct _NSRange)arg2;
- (BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (void)_changeIntAttribute:(id)arg1 by:(int)arg2 range:(struct _NSRange)arg3;
- (void)_fixGlyphInfo:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)fixAttachmentAttributeInRange:(struct _NSRange)arg1;
- (void)fixParagraphStyleAttributeInRange:(struct _NSRange)arg1;
- (void)fixFontAttributeInRange:(struct _NSRange)arg1;
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange)arg1;
- (void)_setAttributeFixingInProgress:(BOOL)arg1;
- (BOOL)_attributeFixingInProgress;
- (void)convertBidiControlCharactersToWritingDirection;
- (BOOL)_shouldSetOriginalFontAttribute;
@end

