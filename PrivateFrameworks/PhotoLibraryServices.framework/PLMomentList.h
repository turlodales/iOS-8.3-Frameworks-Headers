//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import "PLAssetContainerList.h"
#import "PLMomentListData.h"

@class NSArray, NSData, NSDate, NSObject<NSCopying>, NSOrderedSet, NSString, PLMomentNameInfo;

@interface PLMomentList : PLManagedObject <PLAssetContainerList, PLMomentListData>
{
    PLMomentNameInfo *_cachedNameInfo;
    BOOL _loadedNameInfo;
}

+ (id)findOrCreateMegaMomentListForLeftoverMomentsInMonth:(int)arg1 inYear:(int)arg2 withDay:(int)arg3 inManagedObjectContext:(id)arg4;
+ (id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2 returnsObjectsAsFaults:(BOOL)arg3;
+ (id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id *)arg3 returnsObjectsAsFaults:(BOOL)arg4;
+ (id)descriptionForGranularityLevel:(short)arg1;
+ (id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2;
+ (id)allMomentListsRequiringAnalysisInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id *)arg3;
+ (id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id *)arg3;
+ (id)findOrCreateYearMomentListForYear:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)allMomentListsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
- (void)removeMoment:(id)arg1 forMomentListLevel:(short)arg2;
- (void)addMoment:(id)arg1 forMomentListLevel:(short)arg2;
- (void)replaceMomentsForYearAtIndexes:(id)arg1 withMomentsForYear:(id)arg2;
- (void)removeMomentsForYearAtIndexes:(id)arg1;
- (void)insertMomentsForYear:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectInMomentsForYearAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectFromMomentsForYearAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inMomentsForYearAtIndex:(unsigned int)arg2;
- (void)replaceMomentsForMegaMomentAtIndexes:(id)arg1 withMomentsForMegaMoment:(id)arg2;
- (void)removeMomentsForMegaMomentAtIndexes:(id)arg1;
- (void)insertMomentsForMegaMoment:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectInMomentsForMegaMomentAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectFromMomentsForMegaMomentAtIndex:(unsigned int)arg1;
- (BOOL)isMeaningful;
- (id)pl_debugDescription;
- (void)insertObject:(id)arg1 inMomentsForMegaMomentAtIndex:(unsigned int)arg2;
- (void)removeMomentsForYear:(id)arg1;
- (void)removeMomentsForMegaMoment:(id)arg1;
- (void)addMomentsForYear:(id)arg1;
- (void)addMomentsForMegaMoment:(id)arg1;
- (void)addMomentsForYearObject:(id)arg1;
- (void)addMomentsForMegaMomentObject:(id)arg1;
- (void)addMoment:(id)arg1 forMegaMomentAtIndex:(unsigned int)arg2;
- (void)removeMoments:(id)arg1 forMomentListLevel:(short)arg2;
- (void)addMoments:(id)arg1 forMomentListLevel:(short)arg2;
- (void)invalidateNameInfo;
- (BOOL)_validateForInsertOrUpdate:(id *)arg1;
- (void)removeMomentsForYearObject:(id)arg1;
- (void)removeMomentsForMegaMomentObject:(id)arg1;
- (void)_updateCachedNameInfoIfNeeded;
@property(retain, nonatomic) NSArray *userTitles;
- (id)momentListDebugDescription;
@property(retain, nonatomic) NSOrderedSet *moments;
- (void)addMomentToFront:(id)arg1;
- (void)addMoments:(id)arg1;
- (void)removeMoments:(id)arg1;
- (id)_typeDescription;
@property(readonly, nonatomic) unsigned int containersCount;
- (id)containersRelationshipName;
- (BOOL)canEditContainers;
- (id)containers;
@property(readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
- (BOOL)validateForUpdate:(id *)arg1;
- (BOOL)validateForInsert:(id *)arg1;
- (void)didTurnIntoFault;
- (void)willSave;
- (void)awakeFromInsert;
- (void)delete;
- (id)diagnosticInformation;
- (BOOL)supportsDiagnosticInformation;
@property(readonly, retain, nonatomic) NSArray *localizedLocationNames;
@property(readonly, retain, nonatomic) NSString *localizedTitle;
- (BOOL)isEmpty;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSDate *endDate; // @dynamic endDate;
@property(nonatomic) short generationType; // @dynamic generationType;
@property(nonatomic) short granularityLevel; // @dynamic granularityLevel;
@property(readonly) unsigned int hash;
@property(retain, nonatomic) NSOrderedSet *momentsForMegaMoment; // @dynamic momentsForMegaMoment;
@property(retain, nonatomic) NSOrderedSet *momentsForYear; // @dynamic momentsForYear;
@property(retain, nonatomic) NSDate *representativeDate; // @dynamic representativeDate;
@property(retain, nonatomic) NSData *reverseLocationData; // @dynamic reverseLocationData;
@property(nonatomic) BOOL reverseLocationDataIsValid; // @dynamic reverseLocationDataIsValid;
@property(nonatomic) int sortIndex; // @dynamic sortIndex;
@property(retain, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *title2; // @dynamic title2;
@property(retain, nonatomic) NSString *title3; // @dynamic title3;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

