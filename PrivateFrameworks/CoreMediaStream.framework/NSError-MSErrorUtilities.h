//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (MSErrorUtilities)
+ (id)MSErrorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 underlyingError:(id)arg4 additionalUserInfo:(id)arg5;
+ (id)MSErrorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 suggestion:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3;
- (id)MSVerboseDescription;
- (BOOL)MSASStateMachineIsCanceledError;
- (id)MSMakePrimaryError;
- (BOOL)MSContainsErrorWithDomain:(id)arg1 code:(int)arg2;
- (void)_MSApplyBlock:(CDUnknownBlockType)arg1;
- (id)_MSVerboseDescriptionRecursionCount:(int)arg1;
- (id)MSFindPrimaryError;
- (BOOL)MSIsRegistrationError;
- (id)MSMMCSRetryAfterDate;
- (BOOL)MSIsAuthError;
- (BOOL)MSIsBadTokenError;
- (BOOL)MSIsFatal;
- (BOOL)MSCanBeIgnored;
- (BOOL)MSIsCounted;
- (BOOL)MSNeedsBackoff;
- (BOOL)MSIsQuotaError;
- (BOOL)MSIsTemporaryNetworkError;
@end

