//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOPDPlace, NSArray;

@protocol GEOCacheManaging <NSObject>
- (int)invalidationStateForPlace:(GEOPDPlace *)arg1;
- (void)checkHasExpiredWithInvalidationDatas:(NSArray *)arg1 handler:(void (^)(NSArray *))arg2;
- (void)versionsForDomains:(NSArray *)arg1 handler:(void (^)(NSDictionary *))arg2;
@end

