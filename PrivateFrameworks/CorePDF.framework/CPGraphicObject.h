//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CorePDF/CPChunk.h>

@class CPChunk<CPGraphicUser>, CPParagraph, CPTextLine;

@interface CPGraphicObject : CPChunk
{
    unsigned int clipIndex;
    struct CGRect renderedBounds;
    BOOL isInZoneBorder;
    int zoneGraphicType;
    CPTextLine *anchoringTextLine;
    CPParagraph *anchoringParagraph;
    CPChunk<CPGraphicUser> *user;
}

@property(retain, nonatomic) CPParagraph *anchoringParagraph; // @synthesize anchoringParagraph;
@property(nonatomic) unsigned int clipIndex; // @synthesize clipIndex;
- (id)anchoringTextLine;
- (void)setAnchoringTextLine:(id)arg1;
- (void)setZoneGraphicType:(int)arg1;
- (int)zoneGraphicType;
- (void)setIsInZoneBorder:(BOOL)arg1;
- (BOOL)isInZoneBorder;
- (BOOL)isIndivisible;
- (BOOL)canBeContainer;
- (BOOL)isNarrow;
- (unsigned short)unicode;
- (struct CGRect)renderedBounds;
- (void)setUser:(id)arg1;
- (id)user;
- (BOOL)isVisible;
- (id)init;
- (void)dealloc;

@end

