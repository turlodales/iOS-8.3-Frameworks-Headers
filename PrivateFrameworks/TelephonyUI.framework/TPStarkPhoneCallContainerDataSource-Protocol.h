//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TPStarkPhoneCallContainer;

@protocol TPStarkPhoneCallContainerDataSource <NSObject>
- (BOOL)phoneCallContainer:(TPStarkPhoneCallContainer *)arg1 cellIsDimmedAtIndex:(unsigned int)arg2;
- (NSString *)phoneCallContainer:(TPStarkPhoneCallContainer *)arg1 subtitleForViewCellAtIndex:(unsigned int)arg2;
- (NSString *)phoneCallContainer:(TPStarkPhoneCallContainer *)arg1 titleForViewCellAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfViewCellsForPhoneCallContainer:(TPStarkPhoneCallContainer *)arg1;
@end

