//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol DEExtensionVendorProtocol <NSObject>
- (void)attachmentsWithParams:(NSDictionary *)arg1 withHandler:(void (^)(NSArray *))arg2;
- (void)attachmentListWithHandler:(void (^)(NSArray *))arg1;
- (void)disableLoggingWithHandler:(void (^)(void))arg1;
- (void)enableLoggingWithHandler:(void (^)(void))arg1;
- (void)canEnableLoggingWithHandler:(void (^)(BOOL))arg1;
- (void)isLoggingEnabledHandler:(void (^)(BOOL))arg1;
- (void)initExtensionWithHandler:(void (^)(BOOL, BOOL, NSString *, BOOL, BOOL))arg1;
@end

