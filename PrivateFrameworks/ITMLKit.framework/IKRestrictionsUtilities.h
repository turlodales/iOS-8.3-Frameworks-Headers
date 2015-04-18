//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCacheDelegate.h"

@class NSString;

@interface IKRestrictionsUtilities : NSObject <NSCacheDelegate>
{
}

+ (id)orderedRankingsInDomain:(id)arg1 countryCode:(id)arg2;
+ (id)_purgableRatingsDictionary;
+ (id)ratingForRestrictionRanking:(id)arg1 inDomain:(id)arg2 countryCode:(id)arg3;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

