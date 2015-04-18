//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface SBSStatusBarStyleOverridesAssertionData : NSObject <NSSecureCoding>
{
    BOOL _exclusive;
    BOOL _isExclusive;
    int _statusBarStyleOverrides;
    int _pid;
    NSString *_uniqueIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int statusBarStyleOverrides; // @synthesize statusBarStyleOverrides=_statusBarStyleOverrides;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3 uniqueIdentifier:(id)arg4;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(nonatomic, getter=isExclusive) BOOL exclusive; // @synthesize exclusive=_exclusive;

// Remaining properties
@property(readonly, nonatomic) BOOL isExclusive; // @synthesize isExclusive=_isExclusive;

@end

