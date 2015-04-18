//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class BRCAccountSession;

@interface BRCClientRanksPersistedState : NSObject <NSSecureCoding>
{
    BRCAccountSession *_session;
    unsigned long long _nextItemRowID;
    unsigned long long _nextNotifRank;
    unsigned long long _nextPackageItemRank;
}

+ (id)loadFromClientStateInSession:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long nextPackageItemRank;
- (unsigned long long)allocatePackageItemRank;
@property(nonatomic) unsigned long long nextNotifRank;
@property(readonly, nonatomic) unsigned long long nextItemRowID;
- (unsigned long long)allocateItemRowID;
- (unsigned long long)allocateNotifRank;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

