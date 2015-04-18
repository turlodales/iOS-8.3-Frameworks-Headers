//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString, NSURL;

@interface SAMicroblogTwitterPostAuthor : SADomainObject
{
}

+ (id)twitterPostAuthorWithDictionary:(id)arg1 context:(id)arg2;
+ (id)twitterPostAuthor;
@property(copy, nonatomic) NSString *screenName;
@property(copy, nonatomic) NSURL *profileImageUrl;
@property(nonatomic) int followersCount;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
@property(copy, nonatomic) NSString *fullName;
@property(nonatomic) BOOL verified;
@property(copy, nonatomic) NSNumber *userId;
- (id)groupIdentifier;

@end

