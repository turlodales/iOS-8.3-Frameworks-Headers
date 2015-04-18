//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface CRRecentContact : NSObject <NSSecureCoding>
{
    NSMutableArray *_recentDates;
    NSString *_recentsDomain;
    NSString *_displayName;
    NSString *_kind;
    NSString *_address;
    NSString *_lastSendingAddress;
    NSString *_originalSource;
    NSDictionary *_metadata;
    NSNumber *_weight;
    NSNumber *_decayedWeight;
    NSArray *_members;
    unsigned int _groupKind;
    NSString *_groupName;
    NSString *_rawAddress;
    long long _contactID;
    long long _recentID;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned int groupKind; // @synthesize groupKind=_groupKind;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSArray *members; // @synthesize members=_members;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *rawAddress; // @synthesize rawAddress=_rawAddress;
@property(retain, nonatomic) NSNumber *decayedWeight; // @synthesize decayedWeight=_decayedWeight;
@property(copy, nonatomic) NSString *originalSource; // @synthesize originalSource=_originalSource;
@property(copy, nonatomic) NSString *lastSendingAddress; // @synthesize lastSendingAddress=_lastSendingAddress;
@property(copy, nonatomic) NSString *recentsDomain; // @synthesize recentsDomain=_recentsDomain;
@property(nonatomic) long long contactID; // @synthesize contactID=_contactID;
- (id)archivableGroupKind;
- (void)setArchivableGroupKind:(id)arg1;
- (id)archivableMetadata;
- (void)setArchivableMetadata:(id)arg1;
- (id)archivableGroupMembers;
- (void)setArchivableGroupMembers:(id)arg1;
- (id)archivableContactID;
- (void)setArchivableContactID:(id)arg1;
- (id)archivableRecentID;
- (void)setArchivableRecentID:(id)arg1;
- (void)recordRecentEventForDate:(id)arg1 userInitiated:(BOOL)arg2;
@property(copy, nonatomic) NSArray *recentDates;
- (void)applyWeight:(id)arg1;
- (id)initWithMembers:(id)arg1 displayName:(id)arg2 recentDate:(id)arg3 recentsDomain:(id)arg4;
- (id)initWithAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 recentDate:(id)arg4 recentsDomain:(id)arg5;
- (void)enumerateArchivablePropertiesWithBlock:(CDUnknownBlockType)arg1;
- (void)insertDate:(id)arg1 atIndex:(unsigned int)arg2 required:(BOOL)arg3;
- (unsigned int)insertionIndexForDate:(id)arg1 wouldBeUnique:(char *)arg2;
- (void)lazilyCreateRecentDates;
@property(nonatomic) long long recentID; // @synthesize recentID=_recentID;
- (id)initWithContactID:(long long)arg1;
@property(readonly, copy, nonatomic) NSDate *leastRecentDate;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(readonly, copy, nonatomic) NSDate *mostRecentDate;
@property(retain, nonatomic) NSNumber *weight; // @synthesize weight=_weight;
@property(readonly, nonatomic, getter=isGroup) BOOL group;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (BOOL)hasFullTextMatch:(id)arg1;
@property(readonly, nonatomic) unsigned int countOfRecents;

@end

