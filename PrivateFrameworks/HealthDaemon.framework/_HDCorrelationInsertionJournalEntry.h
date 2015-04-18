//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class NSData, NSUUID;

@interface _HDCorrelationInsertionJournalEntry : HDJournalEntry
{
    NSUUID *_correlationUUID;
    NSData *_objectUUIDsData;
    int _provenance;
}

+ (void)applyEntries:(id)arg1 withDaemon:(id)arg2;
+ (int)behavior;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSData *objectUUIDsData; // @synthesize objectUUIDsData=_objectUUIDsData;
@property(readonly, nonatomic) NSUUID *correlationUUID; // @synthesize correlationUUID=_correlationUUID;
- (id)initWithCorrelationUUID:(id)arg1 objectUUIDsData:(id)arg2 provenance:(int)arg3;
@property(readonly, nonatomic) int provenance; // @synthesize provenance=_provenance;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

