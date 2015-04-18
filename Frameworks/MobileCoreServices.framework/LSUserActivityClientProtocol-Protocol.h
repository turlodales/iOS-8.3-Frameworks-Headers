//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSUserActivityInfo, NSDictionary, NSUUID;

@protocol LSUserActivityClientProtocol <NSObject>
- (void)doMarkUserActivityAsDirty:(NSUUID *)arg1 forceImmediate:(BOOL)arg2;
- (void)doDeleteUserActivityWithUUID:(NSUUID *)arg1;
- (void)doUpdateUserActivityWithUUID:(NSUUID *)arg1 setActive:(BOOL)arg2;
- (void)doUpdateUserActivityInfo:(LSUserActivityInfo *)arg1 makeCurrent:(BOOL)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)doFetchUserActivityInfoWithUUID:(NSUUID *)arg1 completionHandler:(void (^)(LSUserActivityInfo *, NSError *))arg2;
- (void)doRegisterUserActivityInfo:(LSUserActivityInfo *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)doInitializeWithClientVersion:(int)arg1 clientInfo:(NSDictionary *)arg2 completionHandler:(void (^)(int, NSDictionary *, NSError *))arg3;
@end

