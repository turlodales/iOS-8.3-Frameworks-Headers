//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface BLTLightsAndSirensReplyInfoCache : NSObject
{
    NSMutableDictionary *_localReplyInfo;
    NSDate *_timeToCheck;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedReplyCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *localReplyInfo; // @synthesize localReplyInfo=_localReplyInfo;
- (id)_keyForSectionID:(id)arg1 bulletinID:(id)arg2;
- (id)_firstReplyInfoWithNoDidPlayStateWithSectionID:(id)arg1 bulletinID:(id)arg2;
- (void)_addReplyInfo:(id)arg1 forSectionID:(id)arg2 bulletinID:(id)arg3;
- (id)_firstReplyInfoWithNoReplyWithSectionID:(id)arg1 bulletinID:(id)arg2;
- (void)_setNextTimeToCheck;
- (void)cacheDidPlayLightsAndSirens:(unsigned int)arg1 withSectionID:(id)arg2 bulletinID:(id)arg3;
- (void)purgeReplyInfo:(id)arg1 withSectionID:(id)arg2 bulletinID:(id)arg3;
- (id)retrieveReplyInfoWithSectionID:(id)arg1 bulletinID:(id)arg2;
- (void)cacheReply:(CDUnknownBlockType)arg1 withSectionID:(id)arg2 bulletinID:(id)arg3 publicationDate:(id)arg4;
@property(retain, nonatomic) NSDate *timeToCheck; // @synthesize timeToCheck=_timeToCheck;
- (BOOL)_isTimeToCheck;
- (void)_checkCache;
- (void).cxx_destruct;
- (id)init;

@end
