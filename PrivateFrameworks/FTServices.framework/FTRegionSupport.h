//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FTMessageDelivery, NSArray;

@interface FTRegionSupport : NSObject
{
    NSArray *_regions;
    FTMessageDelivery *_delivery;
}

+ (id)sharedInstance;
@property(readonly) NSArray *regions;
@property(retain) FTMessageDelivery *_delivery; // @synthesize _delivery;
@property(retain) NSArray *_regions; // @synthesize _regions;
- (void)flushRegions;
- (void)_buildMessageDeliveryIfNeeded;
- (id)regionForID:(id)arg1;
@property(readonly) BOOL isLoaded;
@property(readonly) BOOL isLoading;
- (void)dealloc;
- (void)startLoading;

@end

