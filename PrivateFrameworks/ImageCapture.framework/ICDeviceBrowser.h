//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface ICDeviceBrowser : NSObject
{
    id _privateData;
}

- (void)finalize;
- (id)internalDevices;
@property(readonly) NSArray *devices;
- (int)start;
- (void)stop;
@property id <ICDeviceBrowserDelegate> delegate;
- (id)init;
- (void)dealloc;
@property(readonly, getter=isBrowsing) BOOL browsing;

@end

