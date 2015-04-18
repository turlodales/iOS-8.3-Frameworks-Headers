//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class HAPCharacteristic, HMDAccessory, HMDCharacteristicMetadata, HMDService, NSData, NSNumber, NSString;

@interface HMDCharacteristic : NSObject <NSSecureCoding>
{
    BOOL _notificationEnabled;
    HMDAccessory *_accessory;
    HMDService *_service;
    NSData *_authorizationData;
    HAPCharacteristic *_hapCharacteristic;
    NSString *_characteristicType;
    NSNumber *_characteristicInstanceID;
    int _characteristicProperties;
    HMDCharacteristicMetadata *_characteristicMetadata;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) HMDCharacteristicMetadata *metadata;
@property(retain, nonatomic) HMDCharacteristicMetadata *characteristicMetadata; // @synthesize characteristicMetadata=_characteristicMetadata;
@property(nonatomic) int characteristicProperties; // @synthesize characteristicProperties=_characteristicProperties;
@property(retain, nonatomic) NSNumber *characteristicInstanceID; // @synthesize characteristicInstanceID=_characteristicInstanceID;
@property(retain, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
@property(nonatomic) BOOL notificationEnabled; // @synthesize notificationEnabled=_notificationEnabled;
@property(retain, nonatomic) HAPCharacteristic *hapCharacteristic; // @synthesize hapCharacteristic=_hapCharacteristic;
- (id)initWithCharacteristic:(id)arg1 service:(id)arg2 accessory:(id)arg3;
- (void)configureWithCharacteristic:(id)arg1 service:(id)arg2 accessory:(id)arg3;
- (void)unconfigure;
@property(copy, nonatomic) NSData *authorizationData; // @synthesize authorizationData=_authorizationData;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) __weak HMDService *service; // @synthesize service=_service;
@property(readonly, copy, nonatomic) NSNumber *instanceID;
- (id)validateValue:(id)arg1 outValue:(id *)arg2;
@property(readonly, nonatomic) __weak HAPCharacteristic *characteristic;
@property(readonly, nonatomic) int properties;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) id value;
@property(readonly, copy, nonatomic) NSString *type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
