//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSStoreMapping.h>

@class NSArray, NSDictionary, NSEntityDescription, NSString;

@interface NSEntityStoreMapping : NSStoreMapping
{
    NSEntityDescription *_entity;
    NSDictionary *_propertyMappings;
    NSArray *_primaryKeys;
    BOOL _isSingleTableEntity;
    NSString *_subentityColumn;
    unsigned int _subentityID;
}

- (id)entity;
- (void)setEntity:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)createTableStatement;
- (id)initWithEntity:(id)arg1;
- (id)foreignKeyConstraintDefinitions;
- (id)foreignKeyColumnDefinitions;
- (id)attributeColumnDefinitions;
- (id)primaryKeyColumnDefinitions;
- (unsigned int)subentityID;
- (id)subentityColumn;
- (BOOL)isSingleTableEntity;
- (id)primaryKeys;
- (id)propertyMappings;
- (void)setSubentityID:(unsigned int)arg1;
- (void)setSubentityColumn:(id)arg1;
- (void)setSingleTableEntity:(BOOL)arg1;
- (void)setPrimaryKeys:(id)arg1;
- (void)setPropertyMappings:(id)arg1;
- (id)relationshipMappings;
- (id)attributeMappings;

@end

