//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface MSASPersonInfoManager : NSObject
{
    NSMutableDictionary *_personIDToPersonInfoDictionary;
    NSString *_pathForPersonInfoDictionary;
}

+ (id)sharedManager;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)emailForPersonID:(id)arg1;
- (id)fullNameForPersonID:(id)arg1;
- (id)lastNameForPersonID:(id)arg1;
- (id)firstNameForPersonID:(id)arg1;
@property(retain, nonatomic) NSString *pathForPersonInfoDictionary; // @synthesize pathForPersonInfoDictionary=_pathForPersonInfoDictionary;
@property(retain, nonatomic) NSMutableDictionary *personIDToPersonInfoDictionary; // @synthesize personIDToPersonInfoDictionary=_personIDToPersonInfoDictionary;
- (BOOL)updateWithSharingRelationship:(id)arg1;
- (void).cxx_destruct;
- (void)initWithPath:(id)arg1;

@end

