//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKPaymentDataItem, UITableViewCell, UIView;

@protocol PKPaymentAuthorizationViewPresenting <NSObject>
+ (void)presentCell:(UITableViewCell *)arg1 withDataItem:(PKPaymentDataItem *)arg2;

@optional
+ (void)presentView:(UIView *)arg1 withDataItem:(PKPaymentDataItem *)arg2;
@end

