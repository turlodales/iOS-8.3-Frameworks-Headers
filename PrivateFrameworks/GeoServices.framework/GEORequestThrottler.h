//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface GEORequestThrottler : NSObject
{
    NSMapTable *_throttleMap;
}

+ (id)sharedThrottler;
- (BOOL)allowRequest:(unsigned int)arg1 toURL:(id)arg2;
- (void)_countryProvidersDidChange:(id)arg1;
- (void)clear;
- (id)init;
- (void)dealloc;

@end

