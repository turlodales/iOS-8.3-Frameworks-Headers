//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PowerlogLiteOperators/PLBBMsgRoot.h>

@class NSDate, NSMutableDictionary, NSNumber, NSString;

@interface PLBBMsgAll : PLBBMsgRoot
{
    NSNumber *_seqNum;
    NSDate *_bbDate;
    NSString *_payload;
    NSString *_error;
    NSMutableDictionary *_info;
    NSNumber *_iseqNum;
    NSDate *_ibbDate;
    NSString *_ieventCode;
    NSString *_ipayload;
    NSString *_ierror;
}

+ (id)entryEventNoneBBMsgAll;
@property(retain) NSString *ierror; // @synthesize ierror=_ierror;
@property(retain) NSString *ipayload; // @synthesize ipayload=_ipayload;
@property(retain) NSString *ieventCode; // @synthesize ieventCode=_ieventCode;
@property(retain) NSDate *ibbDate; // @synthesize ibbDate=_ibbDate;
@property(retain) NSNumber *iseqNum; // @synthesize iseqNum=_iseqNum;
@property(retain) NSDate *bbDate; // @synthesize bbDate=_bbDate;
@property(retain) NSNumber *seqNum; // @synthesize seqNum=_seqNum;
- (void)logEventNoneBBMsgAll;
- (void)refreshBBMsgAll;
- (void)setISeqNum:(id)arg1;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
@property(retain) NSString *error; // @synthesize error=_error;
@property(retain) NSMutableDictionary *info; // @synthesize info=_info;
@property(retain) NSString *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;

@end

