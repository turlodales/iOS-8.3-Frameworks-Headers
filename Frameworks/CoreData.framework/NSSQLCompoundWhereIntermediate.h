//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLWhereIntermediate.h>

@class NSMutableArray;

@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate
{
    NSMutableArray *_subclauses;
}

- (void)dealloc;
- (BOOL)isOrScoped;
- (id)_generateMulticlauseStringInContext:(id)arg1;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;
- (id)generateSQLStringInContext:(id)arg1;

@end

