//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAAbstractItemList.h>

@class SAMPCollection;

@interface SAMPMediaEntityList : SAAbstractItemList
{
}

+ (id)mediaEntityListWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mediaEntityList;
@property(retain, nonatomic) SAMPCollection *parentCollection;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
@property(nonatomic) int mediaType;
- (id)groupIdentifier;

@end

