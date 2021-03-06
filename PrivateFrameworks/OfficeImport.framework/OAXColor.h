//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OAXColor : NSObject
{
}

+ (id)readSystemColorFromAttribute:(id)arg1;
+ (id)readPresetColorFromAttribute:(id)arg1;
+ (id)readColorFromParentXmlNode:(struct _xmlNode *)arg1;
+ (id)schemeColorEnumMap;
+ (void)writePresetColor:(id)arg1 to:(id)arg2;
+ (id)readSchemeColorFromAttribute:(id)arg1;
+ (id)stringSRgbColor:(id)arg1;
+ (id)systemColorEnumMap;
+ (id)presetColorRGBEnumMap;
+ (id)presetColorEnumMap;
+ (id)readPresetColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readSchemeColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readSystemColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readHslColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readSRgbColorFromXmlNode:(struct _xmlNode *)arg1 attribute:(const char *)arg2;
+ (id)readScRgbColorFromXmlNode:(struct _xmlNode *)arg1;
+ (void)writeSRgbColor:(id)arg1 to:(id)arg2;
+ (id)readColorFromNode:(struct _xmlNode *)arg1;

@end

