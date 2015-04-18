//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AAFamilyRequest.h"

@class NSNumber, NSString, SSAccount;

@interface AAUIFamilyMemberPhotoRequest : AAFamilyRequest
{
    NSNumber *_familyMemberDSID;
    SSAccount *_iTunesAccount;
    NSString *_serverCacheTag;
}

+ (Class)responseClass;
- (id)urlRequest;
@property(copy, nonatomic) NSNumber *familyMemberDSID; // @synthesize familyMemberDSID=_familyMemberDSID;
@property(retain, nonatomic, setter=setiTunesAccount:) SSAccount *iTunesAccount; // @synthesize iTunesAccount=_iTunesAccount;
@property(copy, nonatomic) NSString *serverCacheTag; // @synthesize serverCacheTag=_serverCacheTag;
- (id)urlString;
- (void).cxx_destruct;

@end

