//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_source>;

@interface SFAirDropBrowser : NSObject
{
    BOOL _didDelay;
    struct __SFBrowser *_browser;
    NSObject<OS_dispatch_source> *_timer;
    double _startTime;
    NSMutableDictionary *_nodes;
    NSArray *_people;
    id <SFAirDropBrowserDelegate> _delegate;
}

- (void)handleBrowserCallBack;
- (void)updateDiscoveredPeople;
@property(readonly, nonatomic) NSArray *people; // @synthesize people=_people;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
@property __weak id <SFAirDropBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

@end
