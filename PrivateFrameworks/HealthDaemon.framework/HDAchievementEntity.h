//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

#import "HDNanoSyncEntity.h"
#import "HDSyncEntity.h"

@class NSString;

@interface HDAchievementEntity : HDHealthEntity <HDNanoSyncEntity, HDSyncEntity>
{
}

+ (id)databaseTable;
+ (int)nanoSyncObjectType;
+ (unsigned int)syncObjectLimitForNanoSyncMessage;
+ (id)objectsForNanoSyncRestoreWithStore:(id)arg1 deviceSourceIdentifier:(id)arg2 nowDate:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange)arg4 lastSyncAnchor:(long long *)arg5 healthDaemon:(id)arg6 error:(id *)arg7;
+ (long long)finalAnchorForNanoSyncRestoreWithStore:(id)arg1 deviceSourceIdentifier:(id)arg2 nowDate:(id)arg3 healthDaemon:(id)arg4 error:(id *)arg5;
+ (id)_predicateForProvenance:(int)arg1;
+ (id)_predicateForSyncAnchor:(id)arg1;
+ (BOOL)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (long long)nextSyncAnchorWithStore:(id)arg1 startSyncAnchor:(long long)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (id)syncObjectsWithStore:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 lastSyncAnchor:(long long *)arg3 healthDaemon:(id)arg4 error:(id *)arg5;
+ (id)propertyForSyncProvenance;
+ (int)syncEntityType;
+ (BOOL)markAchievement:(id)arg1 viewedInHealthDatabase:(id)arg2 error:(id *)arg3;
+ (int)numberOfUnviewedAchievementsInHealthDatabase:(id)arg1;
+ (BOOL)markAchievement:(id)arg1 alertedInHealthDatabase:(id)arg2 error:(id *)arg3;
+ (id)unalertedAchievementsInHealthDatabase:(id)arg1;
+ (int)countOfUnalertedAchievementsInHealthDatabase:(id)arg1;
+ (BOOL)insertAchievement:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (int)protectionClass;
+ (id)createTableSQL;
+ (id)_achievementWithProperties:(id)arg1 values:(id *)arg2 propertySetters:(id)arg3;
+ (id)_propertySettersForAchievement;
+ (BOOL)_enumerateAchievementsWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (id)achievementsWithPredicate:(id)arg1 inHealthDatabase:(id)arg2 error:(id *)arg3;
+ (id)_unalertedAchievementsPredicate;
+ (id)_tableValuesFromAchievement:(id)arg1 provenance:(int)arg2;
+ (id)_insertAchievement:(id)arg1 provenance:(int)arg2 database:(id)arg3 error:(id *)arg4;
+ (BOOL)_insertAchievements:(id)arg1 provenance:(int)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (BOOL)insertAchievements:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

