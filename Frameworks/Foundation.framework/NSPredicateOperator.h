//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface NSPredicateOperator : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _operatorType;
    unsigned int _modifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)operatorWithCustomSelector:(SEL)arg1 modifier:(unsigned int)arg2;
+ (id)_getSymbolForType:(unsigned int)arg1;
+ (SEL)_getSelectorForType:(unsigned int)arg1;
+ (id)_newOperatorWithType:(unsigned int)arg1 modifier:(unsigned int)arg2 options:(unsigned int)arg3;
+ (id)operatorWithType:(unsigned int)arg1 modifier:(unsigned int)arg2 options:(unsigned int)arg3;
- (id)symbol;
- (unsigned int)options;
- (SEL)selector;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setModifier:(unsigned int)arg1;
- (id)initWithOperatorType:(unsigned int)arg1;
- (void)_setOptions:(unsigned int)arg1;
- (id)initWithOperatorType:(unsigned int)arg1 modifier:(unsigned int)arg2;
- (BOOL)performOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (id)predicateFormat;
- (id)initWithOperatorType:(unsigned int)arg1 modifier:(unsigned int)arg2 options:(unsigned int)arg3;
- (unsigned int)modifier;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (unsigned int)operatorType;

@end

