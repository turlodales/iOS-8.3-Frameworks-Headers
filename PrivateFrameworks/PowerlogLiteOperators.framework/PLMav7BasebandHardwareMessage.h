//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PowerlogLiteOperators/PLMav5BasebandHardwareMessage.h>

@class NSMutableString;

@interface PLMav7BasebandHardwareMessage : PLMav5BasebandHardwareMessage
{
    struct _PLMav7BasebandHWStatsRFTech *_rf;
    struct _PLMav7BasebandHWStatsProtocol *_protocol;
    struct _PLMav7BasebandHWStatsMCPMVeto *_mcpm_sleep_veto;
    struct _PLMav7BasebandHWStatsNPAVeto *_npa_sleep_veto;
    struct _PLMav7BasebandHWStatsClockStateMask *_apps_clock_duration_mask;
    struct _PLMav7BasebandHWStatsClockStateMask *_mpss_clock_duration_mask;
    NSMutableString *_apps_clock_duration;
    NSMutableString *_mpss_clock_duration;
    struct _PLMav7BasebandHWStatsClockStateMask *_apps_clock_count_mask;
    struct _PLMav7BasebandHWStatsClockStateMask *_mpss_clock_count_mask;
    struct _PLMav7BasebandHWStatsHSICState *_hsic;
    struct _PLMav7BasebandGPSDPOBin *_gps_dpo_bins;
}

@property(nonatomic) struct _PLMav7BasebandHWStatsHSICState *hsic; // @synthesize hsic=_hsic;
@property(nonatomic) struct _PLMav7BasebandHWStatsMCPMVeto *mcpm_sleep_veto; // @synthesize mcpm_sleep_veto=_mcpm_sleep_veto;
@property(nonatomic) struct _PLMav7BasebandHWStatsRFTech *rf; // @synthesize rf=_rf;
@property(nonatomic) struct _PLMav7BasebandGPSDPOBin *gps_dpo_bins; // @synthesize gps_dpo_bins=_gps_dpo_bins;
@property(nonatomic) NSMutableString *mpss_clock_duration; // @synthesize mpss_clock_duration=_mpss_clock_duration;
@property(nonatomic) NSMutableString *apps_clock_duration; // @synthesize apps_clock_duration=_apps_clock_duration;
@property(nonatomic) struct _PLMav7BasebandHWStatsNPAVeto *npa_sleep_veto; // @synthesize npa_sleep_veto=_npa_sleep_veto;
- (void)logHSICWithLogger:(id)arg1;
- (void)logClockWithLogger:(id)arg1;
- (void)logSleepVetoWithLogger:(id)arg1;
- (void)logProtocolActiveWithLogger:(id)arg1;
- (void)logMPSSWithLogger:(id)arg1;
- (void)logAPPSWithLogger:(id)arg1;
@property(nonatomic) struct _PLMav7BasebandHWStatsClockStateMask *mpss_clock_count_mask; // @synthesize mpss_clock_count_mask=_mpss_clock_count_mask;
@property(nonatomic) struct _PLMav7BasebandHWStatsClockStateMask *apps_clock_count_mask; // @synthesize apps_clock_count_mask=_apps_clock_count_mask;
@property(nonatomic) struct _PLMav7BasebandHWStatsClockStateMask *mpss_clock_duration_mask; // @synthesize mpss_clock_duration_mask=_mpss_clock_duration_mask;
- (void)SetClocks:(struct _PLMav7BasebandHWStatsClockStateMask *)arg1 oftype:(int)arg2 withData:(char *)arg3;
- (int)GetClockCount:(struct _PLMav7BasebandHWStatsClockStateMask *)arg1;
@property(nonatomic) struct _PLMav7BasebandHWStatsClockStateMask *apps_clock_duration_mask; // @synthesize apps_clock_duration_mask=_apps_clock_duration_mask;
@property(nonatomic) struct _PLMav7BasebandHWStatsProtocol *protocol; // @synthesize protocol=_protocol;
- (void)logWithLogger:(id)arg1;
- (id)indexToRAT:(unsigned int)arg1;
- (void)logRFWithLogger2:(id)arg1;
- (void)logPeripheralsWithLogger:(id)arg1;
- (void)parseData:(id)arg1;
- (id)initWithData:(id)arg1;

@end

