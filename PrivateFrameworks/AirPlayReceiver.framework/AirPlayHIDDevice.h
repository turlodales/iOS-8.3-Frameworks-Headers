//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AirPlayReceiverContext;

@interface AirPlayHIDDevice : NSObject
{
    AirPlayReceiverContext *_apc;
    struct __IOHIDDevice *_hidDevice;
    unsigned char _hidOpened;
    char *_hidReportBuf;
    long _hidReportMaxLen;
    struct __CFString *_uuid;
}

- (void)invalidate;
- (void)dealloc;

@end
