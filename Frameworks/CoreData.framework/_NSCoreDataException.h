//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSException.h"

@class NSString;

@interface _NSCoreDataException : NSException
{
    long _code;
    NSString *_domain;
}

+ (id)exceptionWithName:(id)arg1 code:(long)arg2 reason:(id)arg3 userInfo:(id)arg4;
- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (long)code;
- (id)domain;
- (void)dealloc;
- (void)_setDomain:(id)arg1;
- (id)initWithName:(id)arg1 code:(long)arg2 reason:(id)arg3 userInfo:(id)arg4;

@end
