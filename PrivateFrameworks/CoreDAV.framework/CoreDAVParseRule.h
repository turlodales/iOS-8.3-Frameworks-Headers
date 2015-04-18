//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CoreDAVParseRule : NSObject
{
    int _minimumNumber;
    int _maximumNumber;
    NSString *_nameSpace;
    NSString *_elementName;
    Class _objectClass;
    SEL _setterMethod;
}

+ (id)ruleWithMinimumNumber:(int)arg1 maximumNumber:(int)arg2 nameSpace:(id)arg3 elementName:(id)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6;
@property(readonly, nonatomic) int maximumNumber; // @synthesize maximumNumber=_maximumNumber;
@property(readonly, nonatomic) int minimumNumber; // @synthesize minimumNumber=_minimumNumber;
@property(readonly, nonatomic) SEL setterMethod; // @synthesize setterMethod=_setterMethod;
@property(readonly, nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
@property(readonly, nonatomic) NSString *elementName; // @synthesize elementName=_elementName;
- (id)initWithMinimumNumber:(int)arg1 maximumNumber:(int)arg2 nameSpace:(id)arg3 elementName:(id)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6;
@property(readonly, nonatomic) NSString *nameSpace; // @synthesize nameSpace=_nameSpace;
- (id)description;
- (void)dealloc;

@end

