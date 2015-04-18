//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface SUDownloadMetadata : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _autoDownload;
    BOOL _enabledFor2G;
    BOOL _enabledFor3G;
    BOOL _enabledFor4G;
    BOOL _enabledForCellularRoaming;
    BOOL _enabledForWifi;
    BOOL _enabledOnBatteryPower;
    BOOL _enforceWifiOnlyOverride;
    int _activeDownloadPolicyType;
    int _downloadFeeAgreementStatus;
    int _termsAndConditionsAgreementStatus;
}

+ (BOOL)supportsSecureCoding;
- (BOOL)isEnabledForNetworkType:(int)arg1;
- (BOOL)matchesDownloadPolicy:(id)arg1;
- (id)availableDownloadPolicyIfDifferentFromActive:(id)arg1;
- (void)applyDownloadPolicy:(id)arg1;
@property(nonatomic) int activeDownloadPolicyType; // @synthesize activeDownloadPolicyType=_activeDownloadPolicyType;
@property(nonatomic) int termsAndConditionsAgreementStatus; // @synthesize termsAndConditionsAgreementStatus=_termsAndConditionsAgreementStatus;
- (id)_stringForBool:(BOOL)arg1;
@property(nonatomic, getter=isAutoDownload) BOOL autoDownload; // @synthesize autoDownload=_autoDownload;
- (id)activeDownloadPolicy:(id)arg1;
@property(nonatomic) BOOL enforceWifiOnlyOverride; // @synthesize enforceWifiOnlyOverride=_enforceWifiOnlyOverride;
@property(nonatomic) int downloadFeeAgreementStatus; // @synthesize downloadFeeAgreementStatus=_downloadFeeAgreementStatus;
@property(nonatomic, getter=isEnabledForCellularRoaming) BOOL enabledForCellularRoaming; // @synthesize enabledForCellularRoaming=_enabledForCellularRoaming;
@property(nonatomic, getter=isEnabledOnBatteryPower) BOOL enabledOnBatteryPower; // @synthesize enabledOnBatteryPower=_enabledOnBatteryPower;
@property(nonatomic, getter=isEnabledForWifi) BOOL enabledForWifi; // @synthesize enabledForWifi=_enabledForWifi;
@property(nonatomic, getter=isEnabledFor4G) BOOL enabledFor4G; // @synthesize enabledFor4G=_enabledFor4G;
@property(nonatomic, getter=isEnabledFor3G) BOOL enabledFor3G; // @synthesize enabledFor3G=_enabledFor3G;
@property(nonatomic, getter=isEnabledFor2G) BOOL enabledFor2G; // @synthesize enabledFor2G=_enabledFor2G;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

