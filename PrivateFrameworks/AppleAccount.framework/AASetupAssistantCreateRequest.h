//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class AASigningSession, ACAccount, NSDictionary;

@interface AASetupAssistantCreateRequest : AARequest
{
    NSDictionary *appleIDParameters;
    AASigningSession *signingSession;
    ACAccount *_account;
}

+ (Class)responseClass;
- (id)bodyDictionary;
- (id)urlRequest;
- (id)initWithAccount:(id)arg1 withAppleIDParameters:(id)arg2 signingSession:(id)arg3;
- (id)urlString;
- (void).cxx_destruct;

@end

