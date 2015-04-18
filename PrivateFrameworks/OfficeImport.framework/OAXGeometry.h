//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OAXGeometry : NSObject
{
}

+ (void)writeShapePathPoint:(struct OADAdjustPoint)arg1 origin:(CsPoint_c846a6ec)arg2 to:(id)arg3;
+ (id)pathFillModeEnumMap;
+ (struct OADAdjustCoord)readAdjustCoordFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2 formulaNameToIndexMap:(id)arg3;
+ (id)formulaKeywordEnumMap;
+ (id)formulaTypeEnumMap;
+ (void)write:(id)arg1 to:(id)arg2;
+ (int)shapeTypeForString:(id)arg1;
+ (id)readFromParentXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)stringForShapeType:(int)arg1;
+ (int)adjustValueWithGuideXmlNode:(struct _xmlNode *)arg1;
+ (id)stringWritingShapeType:(int)arg1;
+ (void)writePath:(id)arg1 coordSpace:(CsRect_0aefebc6)arg2 to:(id)arg3;
+ (id)shapeTypeEnumMap;
+ (void)readPathsFromCustomGeometryXmlNode:(struct _xmlNode *)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 drawingState:(id)arg4;
+ (void)readTextRectFromCustomGeometryXmlNode:(struct _xmlNode *)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 drawingState:(id)arg4;
+ (void)readFormulasFromCustomGeometryXmlNode:(struct _xmlNode *)arg1 toCustomGeometry:(id)arg2 adjustValueNameToIndexMap:(id)arg3 formulaNameToIndexMap:(id)arg4 drawingState:(id)arg5;
+ (void)addFormulasFromFile:(id)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 drawingState:(id)arg4;
+ (void)readAdjustValuesFromCustomGeometryXmlNode:(struct _xmlNode *)arg1 toCustomGeometry:(id)arg2 adjustValueNameToIndexMap:(id)arg3 drawingState:(id)arg4;
+ (id)readCustomGeometryFromXmlNode:(struct _xmlNode *)arg1 hasImplicitFormulas:(BOOL)arg2 drawingState:(id)arg3;
+ (id)readPresetGeometryFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;

@end

