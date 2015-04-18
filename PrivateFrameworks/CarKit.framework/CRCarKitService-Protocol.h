//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CRVehicle, NSData, NSDictionary, NSString;

@protocol CRCarKitService
- (void)isPairedWithCertificateSerial:(NSData *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)allowsConnectionsForWiFiUUID:(NSString *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)saveWiFiCredentialsForAccessoryConnectionIdentifier:(unsigned int)arg1 credentials:(NSDictionary *)arg2 reply:(void (^)(BOOL, NSString *, NSError *))arg3;
- (void)isBluetoothInCarWithReply:(void (^)(BOOL, NSString *, NSError *))arg1;
- (void)handleDidDisconnectBluetoothAddress:(NSString *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)handleDidConnectBluetoothAddress:(NSString *)arg1 reply:(void (^)(BOOL, NSString *, NSError *))arg2;
- (void)fetchAllVehiclesWithReply:(void (^)(NSSet *, NSError *))arg1;
- (void)removeVehicle:(CRVehicle *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)saveVehicle:(CRVehicle *)arg1 reply:(void (^)(CRVehicle *, NSError *))arg2;
@end

