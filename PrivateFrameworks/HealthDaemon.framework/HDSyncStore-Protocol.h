//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSString;

@protocol HDSyncStore <NSObject>
@property(readonly, nonatomic) NSString *syncStoreIdentifier;
@property(readonly, nonatomic) int provenance;
- (NSArray *)syncEntities;
- (unsigned int)syncObjectLimitForEntityClass:(Class)arg1;
- (void)sendChange:(id <HDSyncChange>)arg1 withContext:(id)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (id <HDSyncChange>)newChangeWithSyncEntityClass:(Class)arg1;

@optional
- (void)syncDidFinishWithContext:(id)arg1 success:(BOOL)arg2 error:(NSError *)arg3;
- (void)syncWillBeginWithContext:(id)arg1;
@end

