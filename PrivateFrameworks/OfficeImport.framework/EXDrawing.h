//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EXDrawing : NSObject
{
}

+ (void)readDrawableNode:(struct _xmlNode *)arg1 anchor:(id)arg2 state:(id)arg3;
+ (struct EDCellAnchorMarker)readAnchorMarkerFromNode:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readFromPart:(id)arg1 state:(id)arg2;
+ (void)readAbsoluteAnchorNode:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readOneCellAnchorNode:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readTwoCellAnchorNode:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)initialize;

@end

