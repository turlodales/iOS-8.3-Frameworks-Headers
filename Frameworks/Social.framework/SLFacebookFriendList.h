//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SLFacebookFriendList : NSObject
{
    NSString *_identifier;
    NSString *_name;
    NSString *_type;
}

+ (id)friendListsWithResponseData:(id)arg1;
+ (id)friendListWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSString *type; // @synthesize type=_type;
@property(retain) NSString *name; // @synthesize name=_name;
- (id)initWithFriendListDictionary:(id)arg1;

@end

