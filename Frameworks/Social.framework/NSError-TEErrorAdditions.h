//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (TEErrorAdditions)
+ (id)errorFromTencentWeiboAPIResponseErrorWithType:(int)arg1 code:(int)arg2;
+ (id)APIGenericErrorFromErrorCode:(int)arg1;
+ (id)APIFakeUserErrorFromErrorCode:(int)arg1;
+ (id)APIUserErrorFromErrorCode:(int)arg1;
+ (id)APIInternalServerErrorFromErrorCode:(int)arg1;
+ (id)APIAuthorizationErrorFromErrorCode:(int)arg1;
+ (id)APILimitErrorFromErrorCode:(int)arg1;
+ (id)APIParameterErrorFromErrorCode:(int)arg1;
- (id)encodeableError;
@end

