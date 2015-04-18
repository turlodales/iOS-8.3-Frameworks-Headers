//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString, NSUUID;

@protocol HMIDSMessageTransport <NSObject>
+ (void)messageElementsFromDictionary:(NSDictionary *)arg1 messageName:(id *)arg2 messageIdentifier:(id *)arg3 messagePayload:(id *)arg4 target:(id *)arg5 transactionID:(id *)arg6 isRequest:(char *)arg7 isResponse:(char *)arg8 isNotification:(char *)arg9;
+ (NSMutableDictionary *)dictionaryForMessageName:(NSString *)arg1 messageIdentifier:(NSUUID *)arg2 messagePayload:(NSDictionary *)arg3 target:(NSUUID *)arg4 transactionID:(NSString *)arg5 msgType:(unsigned int)arg6;
- (void)handleMessageWithName:(NSString *)arg1 messageIdentifier:(NSUUID *)arg2 messagePayload:(NSDictionary *)arg3 target:(NSUUID *)arg4 destination:(NSString *)arg5 responseHandler:(void (^)(NSError *, NSDictionary *))arg6;
- (void)handleMessageWithName:(NSString *)arg1 messageIdentifier:(NSUUID *)arg2 messagePayload:(NSDictionary *)arg3 target:(NSUUID *)arg4 destination:(NSString *)arg5;
@end

