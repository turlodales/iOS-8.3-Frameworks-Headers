//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLIntermediate.h>

@class NSArray, NSSQLEntity, NSString;

@interface NSSQLSelectIntermediate : NSSQLIntermediate
{
    NSSQLEntity *_entity;
    NSString *_entityAlias;
    NSString *_correlationTarget;
    NSArray *_fetchColumns;
    BOOL _useDistinct;
    NSString *_columnAlias;
    BOOL _isCount;
}

- (void)dealloc;
- (void)setFetchEntity:(id)arg1;
- (void)setColumnAlias:(id)arg1;
- (id)initForCorrelationTarget:(id)arg1 alias:(id)arg2 fetchColumns:(id)arg3 inScope:(id)arg4;
- (id)initWithEntity:(id)arg1 alias:(id)arg2 fetchColumns:(id)arg3 inScope:(id)arg4;
- (BOOL)onlyFetchesAggregates;
- (void)setIsCount:(BOOL)arg1;
- (void)setUseDistinct:(BOOL)arg1;
- (void)setFetchColumns:(id)arg1;
- (BOOL)isTargetColumnsScoped;
- (id)generateSQLStringInContext:(id)arg1;

@end

