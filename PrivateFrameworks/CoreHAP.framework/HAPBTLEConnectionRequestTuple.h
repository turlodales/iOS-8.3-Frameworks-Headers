//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>, NSString;

@interface HAPBTLEConnectionRequestTuple : NSObject
{
    NSObject<OS_dispatch_source> *_connectionRequestTimer;
    NSString *_identifier;
}

+ (id)connectionRequestTupleWithTimer:(id)arg1 identifier:(id)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *connectionRequestTimer; // @synthesize connectionRequestTimer=_connectionRequestTimer;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

@end

