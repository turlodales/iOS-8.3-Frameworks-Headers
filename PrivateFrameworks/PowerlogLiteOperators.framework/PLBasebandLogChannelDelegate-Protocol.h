//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, PLBasebandLogChannel;

@protocol PLBasebandLogChannelDelegate <NSObject>
- (void)channel:(PLBasebandLogChannel *)arg1 hasDataAvailable:(NSData *)arg2;
- (void)channelDidBecomeInvalid:(PLBasebandLogChannel *)arg1;
@end

