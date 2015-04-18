//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import "SAClientBoundCommand.h"
#import "SAServerBoundCommand.h"

@class NSArray, NSString;

@interface SACommandFailed : SABaseClientBoundCommand <SAServerBoundCommand, SAClientBoundCommand>
{
}

+ (id)commandFailedWithReason:(id)arg1;
+ (id)commandFailedWithErrorCode:(int)arg1;
+ (id)commandFailedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)commandFailed;
- (id)initWithErrorCode:(int)arg1;
- (BOOL)requiresResponse;
- (id)encodedClassName;
@property(copy, nonatomic) NSString *reason;
@property(nonatomic) int errorCode;
- (id)initWithReason:(id)arg1;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(copy, nonatomic) NSArray *callbacks; // @dynamic callbacks;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

