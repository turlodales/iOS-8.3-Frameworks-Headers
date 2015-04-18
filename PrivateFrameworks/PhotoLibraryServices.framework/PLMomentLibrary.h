//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import "PLAssetContainerList.h"
#import "PLMomentContainer.h"

@class NSOrderedSet, NSString;

@interface PLMomentLibrary : PLManagedObject <PLAssetContainerList, PLMomentContainer>
{
}

+ (id)sharedMomentLibraryInManagedObjectContext:(id)arg1 createIfNecessary:(BOOL)arg2;
+ (id)sharedMomentLibraryInManagedObjectContext:(id)arg1;
+ (void)addSingletonObjectsToContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
- (void)addMomentsObject:(id)arg1;
- (void)replaceMomentsAtIndexes:(id)arg1 withMoments:(id)arg2;
- (void)removeMomentsAtIndexes:(id)arg1;
- (void)insertMoments:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectInMomentsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectFromMomentsAtIndex:(unsigned int)arg1;
- (void)addMoments:(id)arg1;
- (void)removeMoments:(id)arg1;
- (void)insertObject:(id)arg1 inMomentsAtIndex:(unsigned int)arg2;
- (void)removeMomentsObject:(id)arg1;
- (id)_typeDescription;
@property(readonly, nonatomic) unsigned int containersCount;
- (id)containersRelationshipName;
- (BOOL)canEditContainers;
- (id)containers;
- (void)prepareForDeletion;
- (BOOL)isEmpty;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(retain, nonatomic) NSOrderedSet *moments; // @dynamic moments;
@property(readonly) Class superclass;

@end

