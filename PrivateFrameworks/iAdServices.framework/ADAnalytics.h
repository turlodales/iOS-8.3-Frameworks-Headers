//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADAdSheetConnectionDelegate.h"
#import "ADAdSheetProxyDelegate.h"

@class ADAdSheetConnection, NSString;

@interface ADAnalytics : NSObject <ADAdSheetConnectionDelegate, ADAdSheetProxyDelegate>
{
    ADAdSheetConnection *_connection;
}

+ (id)sharedInstance;
- (void)reportIngestionForPassWithTeamIdentifier:(id)arg1 passTypeIdentifier:(id)arg2 serialNumber:(id)arg3 iAdReportingIdentifier:(id)arg4;
- (void)configureConnection:(id)arg1;
- (id)adSheetMachServiceName;
- (id)additionalAdSheetLaunchOptions;
- (BOOL)shouldLaunchAdSheet;
@property(retain, nonatomic) ADAdSheetConnection *connection; // @synthesize connection=_connection;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

