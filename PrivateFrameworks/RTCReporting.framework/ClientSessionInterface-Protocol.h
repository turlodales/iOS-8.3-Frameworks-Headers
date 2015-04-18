//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDictionary, NSURL;

@protocol ClientSessionInterface
- (void)sendMessageWithSessionInfo:(NSDictionary *)arg1 userInfo:(NSDictionary *)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(NSDictionary *)arg5 reply:(void (^)(NSString *))arg6;
- (void)uploadLogData:(NSArray *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)uploadFileAtPath:(NSURL *)arg1 extensionToken:(char *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)flushMessagesWithReply:(void (^)(NSString *))arg1;
- (void)sendMessageWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(NSDictionary *)arg3 reply:(void (^)(NSString *))arg4;
- (void)fetchDisplayURL:(void (^)(NSString *))arg1;
- (void)fetchStatesWithUserInfo:(NSDictionary *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)startConfigWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)setSessionInfo:(NSDictionary *)arg1 userInfo:(NSDictionary *)arg2 frameworksToCheck:(NSArray *)arg3 reply:(void (^)(NSString *))arg4;
@end

