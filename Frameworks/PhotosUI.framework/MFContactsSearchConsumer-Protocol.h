//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber;

@protocol MFContactsSearchConsumer <NSObject>
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedTaskWithID:(NSNumber *)arg1;
- (void)finishedSearchingForType:(unsigned int)arg1;
- (void)consumeSearchResults:(NSArray *)arg1 type:(unsigned int)arg2 taskID:(NSNumber *)arg3;
@end

