//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSValueTransformer : NSObject
{
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (void)setValueTransformer:(id)arg1 forName:(id)arg2;
+ (id)valueTransformerForName:(id)arg1;
+ (id)valueTransformerNames;
+ (id)_transformerRegistry;
- (id)transformedValue:(id)arg1;
- (id)reverseTransformedValue:(id)arg1;

@end

