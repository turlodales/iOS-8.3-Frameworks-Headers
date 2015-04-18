//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSPersistentStoreRequest.h>

#import "NSPredicatedStoreRequest.h"

@class NSDictionary, NSEntityDescription, NSPredicate, NSString;

@interface NSBatchUpdateRequest : NSPersistentStoreRequest <NSPredicatedStoreRequest>
{
    id _entity;
    NSPredicate *_predicate;
    struct _requestFlags {
        unsigned int includesSubentities:1;
        unsigned int resultType:2;
        unsigned int entityIsName:1;
        unsigned int _RESERVED:28;
    } _flags;
    NSDictionary *_columnsToUpdate;
    NSString *_entityName;
}

+ (id)batchUpdateRequestWithEntityName:(id)arg1;
@property unsigned int resultType;
- (unsigned int)requestType;
@property(copy) NSDictionary *propertiesToUpdate; // @synthesize propertiesToUpdate=_columnsToUpdate;
@property BOOL includesSubentities;
@property(readonly) NSEntityDescription *entity; // @synthesize entity=_entity;
- (id)initWithEntityName:(id)arg1;
@property(readonly, copy) NSString *entityName; // @synthesize entityName=_entityName;
@property(retain) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (id)init;
- (void)dealloc;
- (void)_setValidatedPropertiesToUpdate:(id)arg1;
- (id)_newValidatedPropertiesToUpdate:(id)arg1 error:(id *)arg2;
- (void)_resolveEntityWithContext:(id)arg1;
- (id)initWithEntity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

