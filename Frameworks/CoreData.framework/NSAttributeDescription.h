//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSPropertyDescription.h>

@class NSData, NSString;

@interface NSAttributeDescription : NSPropertyDescription
{
    Class _attributeValueClass;
    NSString *_valueTransformerName;
    unsigned int _type;
    NSString *_attributeValueClassName;
    struct __attributeDescriptionFlags {
        unsigned int _hasMaxValueInExtraIvars:1;
        unsigned int _hasMinValueInExtraIvars:1;
        unsigned int _storeBinaryDataExternally:1;
        unsigned int _reservedAttributeDescription:29;
    } _attributeDescriptionFlags;
    id _defaultValue;
}

+ (void)initialize;
+ (id)_classNameForType:(unsigned int)arg1;
@property(retain) id defaultValue;
- (id)_initWithType:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (void)setStoresBinaryDataExternally:(BOOL)arg1;
- (id)_initWithName:(id)arg1 type:(unsigned int)arg2;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned int)arg2;
- (BOOL)_nonPredicateValidateValue:(id *)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id *)arg4;
- (void)_createCachesAndOptimizeState;
- (BOOL)_comparePredicatesAndWarningsWithUnoptimizedAttributeDescription:(id)arg1;
- (BOOL)_comparePredicatesAndWarnings:(id)arg1;
- (int)_canConvertPredicate:(id)arg1 andWarning:(id)arg2;
- (id)_rawValidationWarnings;
- (id)_rawValidationPredicates;
- (id)_initWithName:(id)arg1 type:(unsigned int)arg2 withClassName:(id)arg3;
- (Class)_attributeValueClass;
@property BOOL allowsExternalBinaryDataStorage;
@property(copy) NSString *valueTransformerName;
@property unsigned int attributeType;
- (id)validationWarnings;
- (id)validationPredicates;
@property(copy) NSString *attributeValueClassName;
- (BOOL)isIndexed;
- (BOOL)storesBinaryDataExternally;
@property(readonly, copy) NSData *versionHash;
- (unsigned int)_propertyType;

@end

