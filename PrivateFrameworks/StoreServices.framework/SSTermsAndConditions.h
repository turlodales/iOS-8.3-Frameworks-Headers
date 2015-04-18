//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SSTermsAndConditions : NSObject <NSCopying>
{
    BOOL _requiresAuthentication;
    NSString *_text;
    BOOL _userAccepted;
    long long _versionID;
}

@property(nonatomic, getter=isUserAccepted) BOOL userAccepted; // @synthesize userAccepted=_userAccepted;
@property(nonatomic) long long currentVersionIdentifier; // @synthesize currentVersionIdentifier=_versionID;
@property(nonatomic) NSString *currentText; // @synthesize currentText=_text;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithResponseData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) BOOL requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;

@end

