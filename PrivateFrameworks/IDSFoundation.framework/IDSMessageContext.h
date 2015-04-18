//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSNumber, NSString;

@interface IDSMessageContext : NSObject
{
    NSMutableDictionary *_dict;
    id _boostContext;
}

- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
@property(nonatomic) long long broadcastID;
@property(nonatomic) NSNumber *broadcastTime;
@property(nonatomic) NSNumber *originalCommand;
@property(copy, nonatomic) NSString *storageGuid;
@property(copy, nonatomic) NSString *incomingResponseIdentifier;
@property(copy, nonatomic) NSString *outgoingResponseIdentifier;
@property(retain, nonatomic) id boostContext;
@property(nonatomic) BOOL wantsAppAck;
- (id)initWithDictionary:(id)arg1 boostContext:(id)arg2;
@property(nonatomic) BOOL expectsPeerResponse;
@property(nonatomic) NSNumber *priority;
- (void)dealloc;

@end

