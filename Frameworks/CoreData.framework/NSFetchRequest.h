//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSPersistentStoreRequest.h>

#import "NSCoding.h"

@class NSArray, NSEntityDescription, NSPredicate, NSString;

@interface NSFetchRequest : NSPersistentStoreRequest <NSCoding>
{
    NSArray *_groupByProperties;
    NSPredicate *_havingPredicate;
    id *_additionalPrivateIvars;
    NSArray *_valuesToFetch;
    NSEntityDescription *_entity;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    unsigned int _batchSize;
    unsigned long _fetchLimit;
    NSArray *_relationshipKeyPathsForPrefetching;
    struct _fetchRequestFlags {
        unsigned int distinctValuesOnly:1;
        unsigned int includesSubentities:1;
        unsigned int includesPropertyValues:1;
        unsigned int resultType:3;
        unsigned int returnsObjectsAsFaults:1;
        unsigned int excludePendingChanges:1;
        unsigned int isInUse:1;
        unsigned int entityIsName:1;
        unsigned int refreshesRefetched:1;
        unsigned int propertiesValidated:1;
        unsigned int disableCaching:1;
        unsigned int _RESERVED:19;
    } _flags;
}

+ (id)fetchRequestWithEntityName:(id)arg1;
+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;
@property(nonatomic) unsigned int resultType;
- (unsigned int)requestType;
@property(nonatomic) unsigned int fetchBatchSize;
@property(nonatomic) BOOL includesSubentities;
@property(nonatomic) unsigned int fetchOffset;
@property(copy, nonatomic) NSArray *propertiesToGroupBy;
@property(retain, nonatomic) NSEntityDescription *entity;
@property(nonatomic) BOOL includesPropertyValues;
@property(nonatomic) BOOL includesPendingChanges;
@property(copy, nonatomic) NSArray *relationshipKeyPathsForPrefetching;
- (BOOL)hasChanges;
@property(nonatomic) BOOL returnsObjectsAsFaults;
- (id)initWithEntityName:(id)arg1;
@property(readonly, nonatomic) NSString *entityName;
@property(nonatomic) unsigned int fetchLimit;
@property(copy, nonatomic) NSArray *propertiesToFetch;
@property(retain, nonatomic) NSArray *sortDescriptors;
@property(retain, nonatomic) NSPredicate *predicate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)stores;
- (void)_incrementInUseCounter;
- (void)_resolveEntityWithContext:(id)arg1;
@property(retain, nonatomic) NSPredicate *havingPredicate;
- (void)setGroupByProperties:(id)arg1;
- (id)groupByProperties;
- (id)_asyncResultHandle;
- (void)_setAsyncResultHandle:(id)arg1;
@property(retain, nonatomic) NSArray *affectedStores;
- (id)_newValidatedProperties:(id)arg1 groupBy:(BOOL)arg2 error:(id *)arg3;
- (void)_setDisablePersistentStoreResultCaching:(BOOL)arg1;
@property(nonatomic) BOOL shouldRefreshRefetchedObjects;
@property(nonatomic) BOOL returnsDistinctResults;
- (BOOL)_disablePersistentStoreResultCaching;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7;
- (BOOL)_isEditable;
- (void)_throwIfNotEditable;

@end

