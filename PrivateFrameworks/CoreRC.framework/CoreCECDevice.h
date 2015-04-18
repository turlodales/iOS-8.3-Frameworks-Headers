//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreRC/CoreRCDevice.h>

@interface CoreCECDevice : CoreRCDevice
{
    unsigned char _logicalAddress;
    BOOL _isActiveSource;
    BOOL _systemAudioControlEnabled;
    unsigned char _deckStatusInternal;
    unsigned int _physicalAddress;
    unsigned int _deviceType;
    unsigned int _cecVersion;
    unsigned int _vendorID;
    unsigned int _powerStatus;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned int deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) unsigned int vendorID; // @synthesize vendorID=_vendorID;
@property(nonatomic) unsigned char deckStatusInternal; // @synthesize deckStatusInternal=_deckStatusInternal;
@property(nonatomic) BOOL isActiveSource; // @synthesize isActiveSource=_isActiveSource;
@property(nonatomic) unsigned int powerStatus; // @synthesize powerStatus=_powerStatus;
@property(nonatomic) unsigned int cecVersion; // @synthesize cecVersion=_cecVersion;
- (void)notifyDelegateActiveSourceStatusHasChanged;
- (BOOL)systemAudioModeRequest:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)setSystemAudioControlEnabled:(BOOL)arg1 error:(id *)arg2;
- (BOOL)resignActiveSource:(id *)arg1;
- (BOOL)requestActiveSource:(id *)arg1;
- (BOOL)refreshPropertiesOfDevice:(id)arg1 error:(id *)arg2;
- (BOOL)refreshDevices:(id *)arg1;
- (BOOL)performStandbyWithTargetDevice:(id)arg1 error:(id *)arg2;
- (BOOL)makeActiveSourceWithTVMenus:(BOOL)arg1 error:(id *)arg2;
- (BOOL)deckControlRefreshStatus:(id)arg1 requestType:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)deckControlPlayWithMode:(unsigned int)arg1 target:(id)arg2 error:(id *)arg3;
- (BOOL)deckControlCommandWithMode:(unsigned int)arg1 target:(id)arg2 error:(id *)arg3;
- (BOOL)deckControlSetDeckStatus:(unsigned int)arg1 error:(id *)arg2;
- (id)mergeProperties;
- (void)notifyDelegateStandbyRequestHasBeenReceived:(id)arg1;
- (void)notifyDelegateFeatureAbort:(id)arg1;
- (void)notifyDelegateDeckControlStatusHasBeenUpdated:(id)arg1 deckInfo:(unsigned int)arg2;
- (void)notifyDelegateDeckControlPlayHasBeenReceived:(id)arg1 playMode:(unsigned int)arg2;
- (void)notifyDelegateDeckControlCommandHasBeenReceived:(id)arg1 command:(unsigned int)arg2;
- (BOOL)refreshProperties:(id)arg1 ofDevice:(id)arg2 error:(id *)arg3;
- (BOOL)isLocalDevice;
@property(readonly, nonatomic) unsigned int deckStatus; // @dynamic deckStatus;
@property(readonly, nonatomic) BOOL systemAudioControlEnabled; // @synthesize systemAudioControlEnabled=_systemAudioControlEnabled;
@property(nonatomic) unsigned char logicalAddress; // @synthesize logicalAddress=_logicalAddress;
@property(nonatomic) unsigned int physicalAddress; // @synthesize physicalAddress=_physicalAddress;
- (id)initWithDeviceType:(unsigned int)arg1 logicalAddress:(unsigned char)arg2 onBus:(id)arg3 physicalAddress:(id)arg4;
- (void)standbyRequestHasBeenReceived:(id)arg1;
- (void)featureAbort:(id)arg1;
- (void)deckControlStatusHasBeenUpdated:(unsigned int)arg1 fromDevice:(id)arg2;
- (void)deckControlCommandHasBeenReceived:(unsigned int)arg1 fromDevice:(id)arg2;
- (void)deckControlPlayHasBeenReceived:(unsigned int)arg1 fromDevice:(id)arg2;
- (id)delegate;
- (id)description;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;

@end

