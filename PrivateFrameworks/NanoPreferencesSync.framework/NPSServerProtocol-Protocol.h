//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString;

@protocol NPSServerProtocol <NSObject>
- (void)synchronizeUserDefaultsDomain:(NSString *)arg1 keys:(NSSet *)arg2 containerPath:(NSString *)arg3;
- (void)synchronizeUserDefaultsDomain:(NSString *)arg1 keys:(NSSet *)arg2 container:(NSString *)arg3;
@end

