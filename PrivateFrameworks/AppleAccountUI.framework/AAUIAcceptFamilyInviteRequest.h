//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AAFamilyRequest.h"

@class NSString;

@interface AAUIAcceptFamilyInviteRequest : AAFamilyRequest
{
    NSString *_inviteCode;
}

- (id)urlRequest;
@property(copy, nonatomic) NSString *inviteCode; // @synthesize inviteCode=_inviteCode;
- (BOOL)isUserInitiated;
- (id)urlString;
- (void).cxx_destruct;

@end
