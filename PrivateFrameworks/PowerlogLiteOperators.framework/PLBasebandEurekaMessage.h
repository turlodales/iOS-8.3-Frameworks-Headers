//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSData, NSString;

@interface PLBasebandEurekaMessage : PLBasebandMessage
{
    unsigned char _skip;
    struct _PLBasebandEventHeader *_header;
    NSData *_payload;
    struct _PLBasebandSystemSelectionEvent *_ssevent;
    char *_ssaction;
    char *_ssstate;
}

@property char *ssstate; // @synthesize ssstate=_ssstate;
@property char *ssaction; // @synthesize ssaction=_ssaction;
@property struct _PLBasebandSystemSelectionEvent *ssevent; // @synthesize ssevent=_ssevent;
- (id)cellUpdateCause:(char *)arg1;
- (id)smgmmEventType:(char *)arg1;
- (id)iratHOStringLTE:(char *)arg1;
- (id)procedureStringPSSI:(char *)arg1;
- (id)ratStringPSSI:(char *)arg1;
- (id)searchPhaseStringPSSI:(char *)arg1;
- (id)pagingCauseWCDMA:(char *)arg1;
- (id)pagingTypeWCDMA:(char *)arg1;
- (id)releaseCauseStringWCDMA:(char *)arg1;
- (id)establishmentCauseStringWCDMA:(char *)arg1;
- (id)termStringSystemSelection:(char *)arg1;
- (id)soCallTypeString:(char *)arg1;
- (id)stateStringHSUPA:(char *)arg1;
- (id)eventStringACC:(char *)arg1;
@property(readonly) unsigned int eventCode;
- (id)callTypeString:(char *)arg1;
- (id)eventCodeString:(unsigned int)arg1;
@property unsigned char skip; // @synthesize skip=_skip;
- (id)stateStringACC:(char *)arg1;
- (id)eventStringOOS:(char *)arg1;
- (id)stateStringOOS:(char *)arg1;
- (id)stringForUnknownBytes:(unsigned int)arg1;
- (id)stateStringMotion:(char *)arg1;
- (id)stateStringUTRANL1:(char *)arg1;
- (id)iratStringLTE:(char *)arg1;
- (id)relCauseLTE:(char *)arg1;
- (id)estCauseLTE:(char *)arg1;
- (id)stateStringLTE:(char *)arg1;
- (id)stateStringHSPAPLUS_DC:(char *)arg1;
- (id)stateStringHSDPA:(char *)arg1;
- (id)scanTypeStopWCDMA:(char *)arg1;
- (id)scanTypeStartWCDMA:(char *)arg1;
- (id)stateStringWCDMA:(char *)arg1;
- (id)stateStringGSM:(char *)arg1;
- (id)cdmaExitString:(char *)arg1;
- (id)convertCMCallOrigV2PayloadToDictionary:(struct _NewCMCallOrigPayload *)arg1;
- (id)convertCMCallConnectV2PayloadToDictionary:(struct _NewCMCallConnectPayload *)arg1;
- (id)convertCMCallOrigPayloadToDictionary:(struct _CMCallOrigPayload *)arg1;
- (id)convertCMCallConnectPayloadToDictionary:(struct _CMCallConnectPayload *)arg1;
- (id)cellularSystemStringSystemSelection:(char *)arg1;
- (id)stateStringSystemSelection;
- (id)actionStringSystemSelection;
- (id)eventStringSystemSelection;
- (id)tooShortErrorString;
@property(readonly) NSString *eventCodeString;
- (id)payloadString;
- (void)logWithLogger:(id)arg1;
- (void)parseData:(id)arg1;
@property struct _PLBasebandEventHeader *header; // @synthesize header=_header;
@property(retain) NSData *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

