//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPersistentStore, NSPersistentStoreCoordinator, PFUbiquityLocation, PFUbiquityMetadataFactoryFilePresenter;

@interface PFUbiquityMetadataFactoryEntry : NSObject
{
    PFUbiquityLocation *_metadataStoreFileLocation;
    NSPersistentStoreCoordinator *_psc;
    NSPersistentStore *_store;
    PFUbiquityMetadataFactoryFilePresenter *_filePresenter;
}

- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)initializePersistentStoreCoordinator:(id *)arg1;
- (id)initWithMetadataStoreFileLocation:(id)arg1;
@property(readonly, nonatomic) PFUbiquityLocation *metadataStoreFileLocation; // @synthesize metadataStoreFileLocation=_metadataStoreFileLocation;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *psc; // @synthesize psc=_psc;
@property(readonly, nonatomic) PFUbiquityMetadataFactoryFilePresenter *filePresenter; // @synthesize filePresenter=_filePresenter;
@property(readonly, nonatomic) NSPersistentStore *store; // @synthesize store=_store;

@end

