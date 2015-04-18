//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSDate, NSNumber;

@interface SAPhoneSearch : SADomainCommand
{
}

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
@property(copy, nonatomic) NSNumber *voiceMail;
@property(copy, nonatomic) NSNumber *outgoing;
@property(copy, nonatomic) NSNumber *isNew;
@property(copy, nonatomic) NSNumber *faceTimeAudio;
@property(copy, nonatomic) NSNumber *faceTime;
- (BOOL)requiresResponse;
- (id)encodedClassName;
@property(copy, nonatomic) NSNumber *missed;
@property(copy, nonatomic) NSNumber *last;
@property(copy, nonatomic) NSDate *end;
@property(copy, nonatomic) NSDate *start;
- (id)groupIdentifier;
@property(copy, nonatomic) NSArray *contacts;

@end

