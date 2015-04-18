//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMSystemMonitorListener.h"

@class IMDService, IMDServiceSession, NSDictionary, NSMutableDictionary, NSString;

@interface IMDAccount : NSObject <IMSystemMonitorListener>
{
    NSMutableDictionary *_accountDefaults;
    NSString *_account;
    IMDService *_service;
    IMDServiceSession *_session;
    NSMutableDictionary *_myStatus;
    NSDictionary *_lastPostedStatus;
    BOOL _isLoading;
    BOOL _isManaged;
}

@property(readonly, nonatomic) int registrationError;
@property(readonly, nonatomic) BOOL isDisabled;
@property(readonly, nonatomic) int registrationStatus;
@property(readonly, retain, nonatomic) NSDictionary *registrationAlertInfo;
@property(readonly, retain, nonatomic) NSString *loginID;
- (void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3;
- (void)tunesController:(id)arg1 playerInfoChanged:(id)arg2;
@property(readonly, retain, nonatomic) NSDictionary *statusToSave;
- (void)releaseSession;
- (void)createSessionIfNecessary;
@property(readonly, retain, nonatomic) NSDictionary *accountInfoToPost;
- (void)postAccountCapabilities;
@property(nonatomic) BOOL isManaged; // @synthesize isManaged=_isManaged;
- (id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3;
- (id)_registrationInfo;
- (void)_updateIdle;
- (void)changeStatus:(id)arg1;
@property(readonly, nonatomic) BOOL shouldPublishNowPlaying;
@property(nonatomic) BOOL wasDisabledAutomatically;
@property(readonly, retain, nonatomic) NSDictionary *statusToPost;
- (void)postAccountCapabilitiesToListener:(id)arg1;
@property(readonly, retain, nonatomic) NSDictionary *accountDefaults; // @synthesize accountDefaults=_accountDefaults;
- (void)writeAccountDefaults:(id)arg1;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(readonly, retain, nonatomic) IMDService *service; // @synthesize service=_service;
@property(readonly, retain, nonatomic) NSString *accountID; // @synthesize accountID=_account;
@property(readonly, retain, nonatomic) IMDServiceSession *session; // @synthesize session=_session;
- (void)systemDidBecomeUnidle;
- (void)systemDidBecomeIdle;
@property(readonly, retain, nonatomic) NSDictionary *status;
@property(readonly, nonatomic) BOOL isActive;
- (void)dealloc;

@end

