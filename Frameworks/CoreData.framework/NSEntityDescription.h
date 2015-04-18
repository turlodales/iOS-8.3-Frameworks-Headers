//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSFastEnumeration.h"

@class NSArray, NSData, NSDictionary, NSManagedObjectModel, NSMutableDictionary, NSString;

@interface NSEntityDescription : NSObject <NSCoding, NSCopying, NSFastEnumeration>
{
    int _cd_rc;
    id _snapshotClass;
    NSString *_versionHashModifier;
    NSData *_versionHash;
    NSManagedObjectModel *_model;
    NSString *_classNameForEntity;
    Class _instanceClass;
    NSString *_name;
    NSEntityDescription *_rootentity;
    NSEntityDescription *_superentity;
    NSMutableDictionary *_subentities;
    NSMutableDictionary *_properties;
    id _propertyMapping;
    struct _NSRange *_propertyRanges;
    struct __entityDescriptionFlags {
        unsigned int _isAbstract:1;
        unsigned int _shouldValidateOnSave:1;
        unsigned int _isImmutable:1;
        unsigned int _isFlattened:1;
        unsigned int _skipValidation:1;
        unsigned int _hasPropertiesIndexedBySpotlight:1;
        unsigned int _hasPropertiesStoredInTruthFile:1;
        unsigned int _rangesAreInDataBlob:1;
        unsigned int _hasAttributesWithExternalDataReferences:1;
        unsigned int _hasNonstandardPrimitiveProperties:2;
        unsigned int _reservedEntityDescription:21;
    } _entityDescriptionFlags;
    void *_extraIvars;
    NSMutableDictionary *_userInfo;
    id _flattenedSubentities;
    id **_kvcPropertyAccessors;
    long _modelsReferenceIDForEntity;
}

+ (id)insertNewObjectForEntityForName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityForName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)initialize;
+ (id)_MOClassName;
- (id)attributeKeys;
- (void)finalize;
- (oneway void)release;
@property(readonly, copy) NSDictionary *propertiesByName;
@property(copy) NSString *managedObjectClassName;
@property(retain) NSArray *subentities;
- (BOOL)isKindOfEntity:(id)arg1;
@property(readonly) NSEntityDescription *superentity;
@property(readonly, copy) NSDictionary *attributesByName;
@property(readonly, copy) NSDictionary *relationshipsByName;
@property(readonly) NSManagedObjectModel *managedObjectModel;
@property(retain) NSArray *properties;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
@property(retain, nonatomic) NSDictionary *userInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy) NSString *name;
- (id)description;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)retain;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7;
- (BOOL)_hasPropertiesStoredInTruthFile;
- (BOOL)_hasPropertiesIndexedBySpotlight;
- (BOOL)_hasAttributesWithExternalDataReferences;
- (BOOL)_skipValidation;
- (id)_sortedSubentities;
- (void)_setModelsReferenceID:(long)arg1;
- (id)_new_implicitlyObservedKeys;
- (void *)_leopardStyleAttributesByName;
- (void *)_leopardStyleRelationshipsByName;
- (void *)_newSnowLeopardStyleDictionaryContainingPropertiesOfType:(unsigned int)arg1;
- (id)_allPropertyNames;
- (unsigned long)_offsetRelationshipIndex:(unsigned long)arg1 fromSuperEntity:(id)arg2 andIsToMany:(BOOL)arg3;
- (BOOL)_hasPotentialHashSkew;
- (id)_relationshipNamed:(id)arg1;
- (id)_attributeNamed:(id)arg1;
- (BOOL)_hasCustomPrimitiveProperties;
- (void)_setManagedObjectModel:(id)arg1;
- (id)_keypathsForDeletions;
- (void)_nukeMOClassName__;
- (void)_restoreValidation;
- (void)_stripForMigration;
- (void)_setIsFlattened:(BOOL)arg1;
- (struct _NSRange *)_propertyRangesByType;
- (void)_removePropertyNamed:(id)arg1;
- (id)_newMappingForPropertiesOfRange:(unsigned int)arg1;
- (BOOL)_isInheritedPropertyNamed:(id)arg1;
- (struct __CFSet *)_collectSubentities;
- (BOOL)_isEditable;
- (void)_flattenProperties;
- (id)_localRelationshipNamed:(id)arg1;
- (void)_setIsEditable:(BOOL)arg1;
- (id)_propertyWithRenamingIdentifier:(id)arg1;
- (id)knownKeysMappingStrategy;
- (id)elementID;
- (void)setElementID:(id)arg1;
- (void)_setSuperentity:(id)arg1;
- (id)_flattenedSubentities;
- (Class)_snapshotClass;
@property(retain) NSArray *compoundIndexes;
@property(copy) NSString *versionHashModifier;
- (id)_newVersionHashInStyle:(unsigned int)arg1;
@property(getter=isAbstract) BOOL abstract;
- (id)inverseForRelationshipKey:(id)arg1;
- (id)relationshipsWithDestinationEntity:(id)arg1;
- (id)toOneRelationshipKeys;
- (id)toManyRelationshipKeys;
- (id)_versionHashInStyle:(unsigned int)arg1;
- (id)_subentityNamed:(id)arg1;
- (BOOL)_isFlattened;
- (void)_addProperty:(id)arg1;
- (void)_removeProperty:(id)arg1;
- (id)_relationshipNamesByType:(BOOL)arg1;
- (void)_addSubentity:(id)arg1;
- (void)_removeSubentity:(id)arg1;
- (id)_propertiesOfType:(unsigned int)arg1;
@property(readonly, copy) NSDictionary *subentitiesByName;
- (id)_compoundIndexes;
@property(copy) NSString *renamingIdentifier;
- (Class)_entityClass;
- (id)_propertySearchMapping;
- (long)_modelsReferenceID;
- (void)_createCachesAndOptimizeState;
- (id)_initWithName:(id)arg1;
- (void)_throwIfNotEditable;
- (id)_propertyNamed:(id)arg1;
- (BOOL)_subentitiesIncludes:(id)arg1;
- (id)_rootEntity;
@property(readonly, copy) NSData *versionHash;

@end

