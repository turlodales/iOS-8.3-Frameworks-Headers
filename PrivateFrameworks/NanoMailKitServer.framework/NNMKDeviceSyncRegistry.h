//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NNMKSQLiteConnection, NNMKSyncedMailbox, NSDate, NSString;

@interface NNMKDeviceSyncRegistry : NSObject
{
    BOOL _isMessagesSyncActive;
    BOOL _organizeByThread;
    BOOL _protectedChannelSupported;
    BOOL _isMoreMessagesRequestPending;
    NSString *_path;
    unsigned int _fullMessagesSyncVersion;
    NSDate *_dateReceivedCapForAdding;
    NNMKSyncedMailbox *_syncedMailbox;
    float _deviceScreenWidth;
    float _deviceScreenScale;
    NNMKSQLiteConnection *_database;
}

@property(nonatomic) BOOL isMoreMessagesRequestPending; // @synthesize isMoreMessagesRequestPending=_isMoreMessagesRequestPending;
@property(nonatomic) BOOL protectedChannelSupported; // @synthesize protectedChannelSupported=_protectedChannelSupported;
@property(nonatomic) float deviceScreenScale; // @synthesize deviceScreenScale=_deviceScreenScale;
@property(nonatomic) float deviceScreenWidth; // @synthesize deviceScreenWidth=_deviceScreenWidth;
@property(nonatomic) BOOL organizeByThread; // @synthesize organizeByThread=_organizeByThread;
@property(retain, nonatomic) NNMKSyncedMailbox *syncedMailbox; // @synthesize syncedMailbox=_syncedMailbox;
@property(retain, nonatomic) NSDate *dateReceivedCapForAdding; // @synthesize dateReceivedCapForAdding=_dateReceivedCapForAdding;
@property(nonatomic) BOOL isMessagesSyncActive; // @synthesize isMessagesSyncActive=_isMessagesSyncActive;
@property(nonatomic) unsigned int fullMessagesSyncVersion; // @synthesize fullMessagesSyncVersion=_fullMessagesSyncVersion;
- (void)rescheduleIDSIdentifier:(id)arg1 resendInterval:(unsigned int)arg2 withDateToResend:(id)arg3;
- (void)markIDSIdentifierAsAckd:(id)arg1;
- (id)objectIdForIDSIdentifierNotYetAckd:(id)arg1 objectType:(id *)arg2 resendInterval:(unsigned int *)arg3;
- (void)addObjectId:(id)arg1 objectType:(id)arg2 resendInterval:(unsigned int)arg3 forIDSIdentifierNotYetAckd:(id)arg4;
- (id)syncedAccountIdsResendRequested;
- (void)removeSyncedAccountForAccountWithId:(id)arg1;
- (void)addOrUpdateSyncedAccount:(id)arg1;
- (id)syncedAccountForAccountWithId:(id)arg1;
- (id)allSyncedAccountsKeyedByAccountId;
- (id)syncedMessagesStatusKeyedByMessageIdAfterDateReceived:(id)arg1;
- (void)removeSyncedMessagesBeforeDateReceived:(id)arg1 adjustDateReceivedCapForAdding:(BOOL)arg2;
- (unsigned int)syncedMessagesCount;
- (id)oldestDateReceived;
- (id)firstSyncedMessageIdsContentNotSyncedOrRequestedByUser:(unsigned int)arg1;
- (id)syncedMessageIdsContentRequestedByUser;
- (id)syncedMessageIdsResendRequested;
- (id)syncedMessagesForConversationWithId:(id)arg1;
- (void)removeSyncedMessageForMessageWithId:(id)arg1;
- (void)addOrUpdateSyncedMessage:(id)arg1;
- (id)syncedMessageForMessageWithId:(id)arg1;
- (BOOL)containsSyncedMessageForMessageWithId:(id)arg1;
- (void)cleanUpForNewFullAccountsSync;
- (void)setMoreMessagesRequestPending:(BOOL)arg1;
- (id)_ungroupGroupedValue:(id)arg1;
- (id)_selectSyncedAccountsWhere:(id)arg1 blockForBinding:(CDUnknownBlockType)arg2;
- (id)_selectSyncedMessagesIdsWhere:(id)arg1 count:(unsigned int)arg2 blockForBinding:(CDUnknownBlockType)arg3;
- (id)_selectSyncedMessagesWhere:(id)arg1 blockForBinding:(CDUnknownBlockType)arg2;
- (void)_deleteAllObjectsFromTable:(id)arg1;
- (void)_insureTransactionFor:(CDUnknownBlockType)arg1;
- (void)_removeControlValueForKey:(id)arg1;
- (void)_setControlValueForKey:(id)arg1 withBlockForBinding:(CDUnknownBlockType)arg2;
- (void)cleanUpForNewFullMessagesSync;
- (void)_loadAllControlValues;
- (id)datesForIDSIdentifiersScheduledToBeResent;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1;
- (void)endUpdates;
- (void)beginUpdates;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NNMKSQLiteConnection *database; // @synthesize database=_database;

@end

