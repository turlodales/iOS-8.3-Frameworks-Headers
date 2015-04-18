//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WKInterfaceObject : NSObject
{
    NSString *_interfaceProperty;
    NSString *_viewControllerID;
    NSString *_propertyIndex;
    int _tableIndex;
    int _rowIndex;
}

- (void)setAccessibilityImageRegions:(id)arg1;
@property(copy, nonatomic) NSString *interfaceProperty; // @synthesize interfaceProperty=_interfaceProperty;
- (void)_sendValueChanged:(id)arg1;
- (void)_setImageNamed:(id)arg1 forProperty:(id)arg2;
- (void)_setImageData:(id)arg1 forProperty:(id)arg2;
- (void)_setImage:(id)arg1 forProperty:(id)arg2;
- (void)_setupWithDescription:(id)arg1 forController:(id)arg2;
- (id)_initWithInterfaceProperty:(id)arg1 viewControllerID:(id)arg2 propertyIndex:(int)arg3 tableIndex:(int)arg4 rowIndex:(int)arg5;
@property(copy, nonatomic) NSString *viewControllerID; // @synthesize viewControllerID=_viewControllerID;
@property(nonatomic) int tableIndex; // @synthesize tableIndex=_tableIndex;
@property(retain, nonatomic) NSString *propertyIndex; // @synthesize propertyIndex=_propertyIndex;
- (void)_sendValueChanged:(id)arg1 forProperty:(id)arg2;
@property(nonatomic) int rowIndex; // @synthesize rowIndex=_rowIndex;
- (void)setHeight:(float)arg1;
- (void).cxx_destruct;
- (void)setIsAccessibilityElement:(BOOL)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setWidth:(float)arg1;
- (void)setRotation:(float)arg1;
- (id)init;
- (void)setAlpha:(float)arg1;
- (void)setHidden:(BOOL)arg1;

@end

