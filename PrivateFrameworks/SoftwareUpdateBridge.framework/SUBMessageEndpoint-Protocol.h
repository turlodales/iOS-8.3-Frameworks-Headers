//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSError, NSString;

@protocol SUBMessageEndpoint <NSObject>

@optional
+ (id)sharedEndpoint;
- (void)setHandler:(void (^)(NSDictionary *, NSString *))arg1 forMessagesOfTypes:(NSArray *)arg2;
- (void)setHandler:(void (^)(NSDictionary *, NSString *))arg1 forMessagesOfType:(NSString *)arg2;
- (void)sendErrorReply:(NSError *)arg1 toMessage:(NSString *)arg2;
- (void)sendReply:(NSDictionary *)arg1 toMessage:(NSString *)arg2;
- (void)sendMessage:(NSDictionary *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)sendMessage:(NSDictionary *)arg1 isCritical:(BOOL)arg2 completion:(void (^)(NSError *))arg3;
- (void)sendMessage:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)suspend;
- (void)resume;
@end
