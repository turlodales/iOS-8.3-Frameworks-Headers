//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface PLBBMavHwRfHDRLogMsg : PLBasebandMessage
{
    unsigned char _inited;
    NSString *_error;
    NSNumber *_logDuration;
    NSNumber *_sDTXOnFrame;
    NSNumber *_sDTXOffFrame;
    NSNumber *_lDTXOnFrame;
    NSNumber *_lDTXOffFrame;
    NSNumber *_tDTXOnFrame;
    NSNumber *_tDTXOffFrame;
    NSMutableDictionary *_commonInfo;
    NSMutableDictionary *_kvPairs;
}

+ (id)entryEventBackwardDefinitionBBMavHwRfHDR;
@property(retain) NSNumber *tDTXOffFrame; // @synthesize tDTXOffFrame=_tDTXOffFrame;
@property(retain) NSNumber *tDTXOnFrame; // @synthesize tDTXOnFrame=_tDTXOnFrame;
@property(retain) NSNumber *lDTXOffFrame; // @synthesize lDTXOffFrame=_lDTXOffFrame;
@property(retain) NSNumber *lDTXOnFrame; // @synthesize lDTXOnFrame=_lDTXOnFrame;
@property(retain) NSNumber *sDTXOffFrame; // @synthesize sDTXOffFrame=_sDTXOffFrame;
@property(retain) NSNumber *sDTXOnFrame; // @synthesize sDTXOnFrame=_sDTXOnFrame;
- (id)logEventBackwardBBMavHwRfHDR;
- (void)refreshRequest;
@property(nonatomic) unsigned char inited; // @synthesize inited=_inited;
- (void)populateEntry:(id)arg1;
- (void)addPairWithKey:(id)arg1 andWithVal:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *kvPairs; // @synthesize kvPairs=_kvPairs;
@property(retain, nonatomic) NSMutableDictionary *commonInfo; // @synthesize commonInfo=_commonInfo;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
@property(retain) NSNumber *logDuration; // @synthesize logDuration=_logDuration;
- (void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3;
@property(retain) NSString *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)init;

@end

