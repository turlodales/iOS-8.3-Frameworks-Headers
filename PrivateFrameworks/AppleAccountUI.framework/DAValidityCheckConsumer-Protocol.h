//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DAAccount, NSError;

@protocol DAValidityCheckConsumer <NSObject>
- (void)account:(DAAccount *)arg1 isValid:(BOOL)arg2 validationError:(NSError *)arg3;
@end

