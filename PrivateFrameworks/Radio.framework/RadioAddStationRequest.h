//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Radio/RadioSyncRequest.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface RadioAddStationRequest : RadioSyncRequest
{
    NSDictionary *_matchDictionary;
    long long _persistentID;
    NSMutableDictionary *_stationDictionary;
    NSString *_stationHashForSkipHistoryCopying;
}

- (void)startWithAddStationCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithStationDictionary:(id)arg1;
- (id)initWithLibraryTrackDictionary:(id)arg1 useArtist:(BOOL)arg2;
- (id)initWithQueryTerm:(id)arg1 queryID:(long long)arg2;
- (id)matchDictionary;
- (id)changeList;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithRadioTrackDictionary:(id)arg1 useArtist:(BOOL)arg2;
- (id)initWithStation:(id)arg1;

@end

