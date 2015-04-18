//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSStoreMapping.h>

@class NSPropertyDescription, NSSQLEntity, NSString;

@interface NSSQLProperty : NSStoreMapping
{
    NSString *_name;
    NSPropertyDescription *_propertyDescription;
    NSSQLEntity *_entity;
    unsigned int _propertyType;
}

- (BOOL)isToMany;
- (id)entity;
- (id)columnName;
- (id)name;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (unsigned int)propertyType;
- (BOOL)isOptLockKey;
- (BOOL)isEntityKey;
- (BOOL)isForeignOrderKey;
- (BOOL)isForeignEntityKey;
- (BOOL)isForeignKey;
- (void)setPropertyDescription:(id)arg1;
- (BOOL)isPrimaryKey;
- (void)_setName:(id)arg1;
- (void)setEntityForReadOnlyFetch:(id)arg1;
- (BOOL)isRelationship;
- (BOOL)isColumn;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (id)propertyDescription;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)externalName;
- (BOOL)isAttribute;
- (unsigned int)slot;
- (BOOL)isManyToMany;
- (BOOL)isToOne;

@end

