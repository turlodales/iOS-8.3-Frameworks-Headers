//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ODXData : NSObject
{
}

+ (id)readModelIdentifierFromNode:(struct _xmlNode *)arg1 attributeName:(const char *)arg2;
+ (void)readNode:(struct _xmlNode *)arg1 toDiagram:(id)arg2 state:(id)arg3;
+ (int)readConnectionTypeFromNode:(struct _xmlNode *)arg1;
+ (void)readConnectionFromNode:(struct _xmlNode *)arg1 pointIdMap:(id)arg2 state:(id)arg3;
+ (int)readPointTypeFromNode:(struct _xmlNode *)arg1;
+ (id)readPointFromNode:(struct _xmlNode *)arg1 pointIdMap:(id)arg2 state:(id)arg3;
+ (void)associatePresentationsInIdMap:(id)arg1;
+ (void)readConnectionListFromNode:(struct _xmlNode *)arg1 pointIdMap:(id)arg2 state:(id)arg3;
+ (id)readPointListFromNode:(struct _xmlNode *)arg1 pointIdMap:(id)arg2 state:(id)arg3;

@end
