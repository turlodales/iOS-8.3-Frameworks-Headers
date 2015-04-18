//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface CKDBackingAccount : NSObject
{
}

+ (BOOL)ensureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2;
+ (Class)_platformBackingAccountClass;
+ (id)fakeAccountWithEmail:(id)arg1 password:(id)arg2;
+ (id)accountWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (id)primaryAccountInStore:(id)arg1;
- (id)accountPropertiesForDataclass:(id)arg1;
- (id)ckAccount;
- (void)renewAuthTokenInStore:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSURL *privateDeviceServiceURL;
@property(readonly, nonatomic) NSURL *privateShareServiceURL;
@property(readonly, nonatomic) NSURL *privateCloudDBURL;
@property(readonly, nonatomic) NSString *primaryEmail;
@property(readonly, nonatomic) NSString *iCloudAuthToken;
@property(readonly, nonatomic) NSString *cloudKitAuthToken;
@property(readonly, nonatomic) NSString *dsid;
@property(readonly, nonatomic) BOOL isFakeAccount;
@property(readonly, nonatomic) BOOL cloudKitIsEnabled;
@property(readonly, nonatomic) BOOL cloudPhotosIsEnabled;
@property(readonly, nonatomic) NSString *serverPreferredPushEnvironment;
@property(readonly, nonatomic) BOOL allowsCellularAccess;
@property(readonly, nonatomic) NSString *identifier;
- (id)_init;
- (id)init;

@end

