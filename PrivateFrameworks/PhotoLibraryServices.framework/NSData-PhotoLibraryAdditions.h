//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@interface NSData (PhotoLibraryAdditions)
+ (id)pl_dataWithMappedContentsOfFileHandle:(id)arg1;
+ (id)pl_dataWithMappedContentsOfFileDescriptor:(int)arg1;
- (void)pl_adviceDoNotNeed;
- (void)pl_adviceWillNeed;
- (unsigned int)pl_advisoryLength;
@end

