//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID;

@interface ASIdentifierManager : NSObject
{
}

+ (id)sharedManager;
@property(readonly, nonatomic, getter=isAdvertisingTrackingEnabled) BOOL advertisingTrackingEnabled;
@property(readonly, nonatomic) NSUUID *advertisingIdentifier;

@end

