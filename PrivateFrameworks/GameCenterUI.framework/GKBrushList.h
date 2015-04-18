//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKThemeBrush.h>

@class NSArray;

@interface GKBrushList : GKThemeBrush
{
    NSArray *_brushList;
}

+ (id)brushListWithBrushes:(id)arg1;
- (void)didDrawRect:(struct CGRect)arg1 withBrushAtIndex:(unsigned int)arg2 input:(id)arg3;
- (void)willDrawRect:(struct CGRect)arg1 withBrushAtIndex:(unsigned int)arg2 input:(id)arg3;
- (struct CGRect)drawRectForBrushAtIndex:(unsigned int)arg1 fromRect:(struct CGRect)arg2 input:(id)arg3;
@property(retain, nonatomic) NSArray *brushList; // @synthesize brushList=_brushList;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

