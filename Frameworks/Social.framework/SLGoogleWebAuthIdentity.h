//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SLGoogleWebAuthIdentity : NSObject
{
    NSString *_username;
    NSString *_displayName;
    NSString *_token;
    NSString *_refreshToken;
    NSString *_youTubeUsername;
}

@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *youTubeUsername; // @synthesize youTubeUsername=_youTubeUsername;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;

@end

