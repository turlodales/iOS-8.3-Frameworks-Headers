//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CHXFont : NSObject
{
}

+ (void)mapFontProperties:(id)arg1 toTextProps:(id)arg2;
+ (void)mapFontProperties:(id)arg1 to:(id)arg2;
+ (id)edFontFromXmlTextPropertiesElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)edFontWithOadCharacterProperties:(id)arg1 state:(id)arg2;
+ (id)edRunCollectionFromXmlTextPropertiesElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)defaultEdRunCollectionForTitle:(id)arg1 state:(id)arg2;
+ (id)edFontWithOadTextBody:(id)arg1 state:(id)arg2;

@end

