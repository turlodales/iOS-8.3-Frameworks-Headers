//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSNumber, NSString, NSURL;

@interface SASPronunciationContext : AceObject <SAAceSerializable>
{
}

+ (id)pronunciationContextWithDictionary:(id)arg1 context:(id)arg2;
+ (id)pronunciationContext;
@property(copy, nonatomic) NSString *domainObjectPropertyIdentifier;
@property(copy, nonatomic) NSURL *domainObjectIdentifier;
@property(copy, nonatomic) NSNumber *tokenOffset;
@property(copy, nonatomic) NSString *orthography;
- (id)encodedClassName;
@property(copy, nonatomic) NSString *fullName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

