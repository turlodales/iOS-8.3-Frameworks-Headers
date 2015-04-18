//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "HDNanoSyncDescription.h"
#import "HDNanoSyncPersistentUserInfoCopying.h"
#import "NSCopying.h"

@class NSData, NSMutableArray, NSString;

@interface HDCodableNanoSyncActivationRestore : PBCodable <HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying>
{
    long long _sequenceNumber;
    NSString *_deviceSourceIdentifier;
    NSData *_restoreIdentifier;
    NSMutableArray *_restores;
    int _statusCode;
    struct {
        unsigned int sequenceNumber:1;
        unsigned int statusCode:1;
    } _has;
}

+ (id)persistentUserInfoKey;
+ (id)retreiveFromPersistentUserInfo:(id)arg1;
+ (id)activationRestoreWithRestoreUUID:(id)arg1 sequenceNumber:(long long)arg2 statusCode:(int)arg3;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)copyForPersistentUserInfo;
- (void)addToPersistentUserInfo:(id)arg1;
@property(retain, nonatomic) NSData *restoreIdentifier; // @synthesize restoreIdentifier=_restoreIdentifier;
@property(readonly, nonatomic) BOOL hasDeviceSourceIdentifier;
@property(readonly, nonatomic) BOOL hasRestoreIdentifier;
- (id)restoresAtIndex:(unsigned int)arg1;
- (void)clearRestores;
- (unsigned int)restoresCount;
- (void)addRestores:(id)arg1;
@property(retain, nonatomic) NSMutableArray *restores; // @synthesize restores=_restores;
@property(retain, nonatomic) NSString *deviceSourceIdentifier; // @synthesize deviceSourceIdentifier=_deviceSourceIdentifier;
- (BOOL)hasRequiredFields;
- (id)decodedRestoreUUID;
- (id)nanoSyncDescription;
@property(nonatomic) BOOL hasStatusCode;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) BOOL hasSequenceNumber;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

