//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ATSignatureProvider.h"

@class ATDeviceSettings, ATGrappaSession;

@interface ATGrappaSignatureProvider : ATSignatureProvider
{
    ATGrappaSession *_grappaSession;
    ATDeviceSettings *_settings;
}

- (id)verifySignature:(id)arg1 forData:(id)arg2;
- (id)createSignature:(id *)arg1 forData:(id)arg2;
- (id)initWithGrappaSession:(id)arg1;
- (void).cxx_destruct;

@end

