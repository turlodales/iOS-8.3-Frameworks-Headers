//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RadioFairPlaySAPContext;

@interface RadioFairPlaySAPExchanger : NSObject
{
    struct FairPlayHWInfo_ _hardwareInfo;
    struct FPSAPContextOpaque_ *_session;
    RadioFairPlaySAPContext *_SAPContext;
}

- (id)exchangeData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) RadioFairPlaySAPContext *SAPContext; // @synthesize SAPContext=_SAPContext;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

