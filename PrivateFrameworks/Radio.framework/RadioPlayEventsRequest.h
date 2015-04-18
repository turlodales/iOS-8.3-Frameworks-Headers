//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Radio/RadioRequest.h>

@class RadioPlayEventCollection, SSURLConnectionRequest;

@interface RadioPlayEventsRequest : RadioRequest
{
    SSURLConnectionRequest *_request;
    RadioPlayEventCollection *_playEventCollection;
}

- (id)initWithPlayEventCollection:(id)arg1;
- (id)initWithStation:(id)arg1 playEvents:(id)arg2;
- (id)initWithStationHash:(id)arg1 stationID:(long long)arg2 playEvents:(id)arg3;
@property(readonly, copy, nonatomic) RadioPlayEventCollection *playEventCollection; // @synthesize playEventCollection=_playEventCollection;
- (void)setDeviceName:(id)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)deviceName;
- (void).cxx_destruct;
- (id)init;

@end

