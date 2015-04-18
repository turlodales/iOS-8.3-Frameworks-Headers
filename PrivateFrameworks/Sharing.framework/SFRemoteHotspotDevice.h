//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface SFRemoteHotspotDevice : NSObject <NSSecureCoding>
{
    unsigned char _networkType;
    BOOL _hasDuplicates;
    NSString *_deviceName;
    NSString *_deviceIdentifier;
    NSNumber *_batteryLife;
    NSNumber *_signalStrength;
}

+ (BOOL)supportsSecureCoding;
@property unsigned char networkType; // @synthesize networkType=_networkType;
@property BOOL hasDuplicates; // @synthesize hasDuplicates=_hasDuplicates;
@property(retain) NSNumber *batteryLife; // @synthesize batteryLife=_batteryLife;
@property(copy) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain) NSNumber *signalStrength; // @synthesize signalStrength=_signalStrength;
@property(copy) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

