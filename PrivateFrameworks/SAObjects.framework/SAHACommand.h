//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, SAHAFilter;

@interface SAHACommand : SADomainCommand
{
}

+ (id)commandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)command;
@property(copy, nonatomic) NSArray *actions;
- (BOOL)requiresResponse;
- (id)encodedClassName;
@property(retain, nonatomic) SAHAFilter *filter;
- (id)groupIdentifier;

@end

