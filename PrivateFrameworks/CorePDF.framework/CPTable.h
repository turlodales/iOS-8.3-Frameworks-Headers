//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CorePDF/CPChunk.h>

#import "CPDisposable.h"
#import "CPGraphicUser.h"

@interface CPTable : CPChunk <CPDisposable, CPGraphicUser>
{
    struct CGRect tableBounds;
    unsigned int rowCount;
    float *rowY;
    unsigned int columnCount;
    float *columnX;
    struct CGColor *backgroundColor;
    unsigned int backgroundGraphicCount;
    id *backgroundGraphics;
    unsigned int usedGraphicCount;
    BOOL disposed;
}

- (void)finalize;
@property(nonatomic) unsigned int rowCount;
@property(readonly, nonatomic) unsigned int backgroundGraphicCount; // @synthesize backgroundGraphicCount;
- (id)backgroundGraphicAtIndex:(unsigned int)arg1;
- (void)setBackgroundGraphics:(id)arg1;
@property(readonly, nonatomic) float *columnX; // @synthesize columnX;
@property(readonly, nonatomic) float *rowY; // @synthesize rowY;
- (unsigned int)usedGraphicCount;
- (void)incrementUsedGraphicCount;
@property(readonly, nonatomic) struct CGRect tableBounds; // @synthesize tableBounds;
- (void)dispose;
@property(nonatomic) unsigned int columnCount;
- (struct CGColor *)backgroundColor;
- (void)dealloc;
- (id)initWithBounds:(struct CGRect)arg1;

@end

