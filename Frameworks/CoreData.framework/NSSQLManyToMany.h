//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLRelationship.h>

@class NSString;

@interface NSSQLManyToMany : NSSQLRelationship
{
    NSString *_correlationTableName;
    NSString *_columnName;
    NSString *_orderColumnName;
}

- (id)columnName;
- (void)dealloc;
- (BOOL)isTableSchemaEqual:(id)arg1;
- (void)_setOrderColumnName:(id)arg1;
- (void)_setCorrelationTableName:(id)arg1;
- (void)_setInverseManyToMany:(id)arg1;
- (id)inverseManyToMany;
- (BOOL)isMaster;
- (void)_setColumnName:(id)arg1;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (unsigned int)orderColumnSQLType;
- (unsigned int)columnSQLType;
- (id)orderColumnName;
- (id)inverseOrderColumnName;
- (id)inverseColumnName;
- (id)correlationTableName;
- (BOOL)isReflexive;

@end
