//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PLPhotoLibrary, PSIDatabase, PUSuggestedSearch;

@protocol PUSuggestedSearchDelegate <NSObject>
- (void)suggestedSearchHasPendingChanges:(PUSuggestedSearch *)arg1;
- (PLPhotoLibrary *)suggestedSearchPhotoLibrary:(PUSuggestedSearch *)arg1;
- (PSIDatabase *)suggestedSearchIndex:(PUSuggestedSearch *)arg1;
@end

