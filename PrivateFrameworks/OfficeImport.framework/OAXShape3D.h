//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OAXShape3D : NSObject
{
}

+ (void)writeShape3D:(id)arg1 to:(id)arg2;
+ (void)writeBevel:(id)arg1 to:(id)arg2;
+ (id)materialEnumMap;
+ (id)readBevelFromXmlNode:(struct _xmlNode *)arg1;
+ (id)bevelTypeEnumMap;
+ (BOOL)isEmpty:(id)arg1;
+ (id)readShape3DFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;

@end

