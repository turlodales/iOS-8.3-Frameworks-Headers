//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSMutableDictionary, NSObject<NSCoding><NSCopying>, NSObject<OS_xpc_object>, NSString;

@interface MBMessage : NSObject
{
    NSObject<OS_xpc_object> *_xpcObject;
    NSMutableDictionary *_messageInfo;
    NSMutableDictionary *_replyInfo;
}

+ (id)messageWithName:(id)arg1 arguments:(id)arg2;
@property(copy, nonatomic) NSError *replyError;
@property(readonly, nonatomic) NSArray *arguments;
@property(copy, nonatomic) NSError *error;
- (id)initWithName:(id)arg1 arguments:(id)arg2;
- (id)_xpcObject;
- (id)_initWithXPCObject:(id)arg1;
@property(copy, nonatomic) NSObject<NSCoding><NSCopying> *reply;
- (void)sendReply;
@property(readonly, nonatomic) NSString *name;
- (id)description;
- (void)dealloc;

@end

