//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLAlbumProtocol.h"

@class NSArray, NSDictionary, NSIndexSet, NSMutableOrderedSet, NSString;

@protocol PLUserEditableAlbumProtocol <PLAlbumProtocol>
@property(readonly, retain, nonatomic) NSMutableOrderedSet *userEditableAssets;
- (void)insertInternalUserEditableAssets:(NSArray *)arg1 atIndexes:(NSIndexSet *)arg2 trimmedVideoPathInfo:(NSDictionary *)arg3 commentText:(NSString *)arg4;
@end

