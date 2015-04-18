//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HAPCharacteristic, NSData;

@interface HAPCharacteristicWriteRequestTuple : NSObject
{
    HAPCharacteristic *_characteristic;
    id _value;
    NSData *_authorizationData;
}

+ (id)writeRequestTupleForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3;
@property(retain, nonatomic) NSData *authorizationData; // @synthesize authorizationData=_authorizationData;
@property(retain, nonatomic) HAPCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (void).cxx_destruct;
@property(retain, nonatomic) id value; // @synthesize value=_value;

@end

