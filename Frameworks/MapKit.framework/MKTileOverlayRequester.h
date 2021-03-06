//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GEOTileRequester.h"

@class NSMutableArray, NSMutableSet;

@interface MKTileOverlayRequester : GEOTileRequester
{
    BOOL _cancelled;
    NSMutableArray *_waiting;
    NSMutableSet *_running;
    NSMutableArray *_errors;
}

+ (unsigned char)tileProviderIdentifier;
+ (void)unregisterOverlay:(unsigned int)arg1;
+ (unsigned int)registerOverlay:(id)arg1;
- (void)_operationFinished:(id)arg1;
- (void)_operationFailed:(id)arg1 error:(id)arg2;
- (void)_doWorkOrFinish;
- (void).cxx_destruct;
- (BOOL)isRunning;
- (void)start;
- (void)_cleanup;
- (void)dealloc;
- (void)cancel;

@end

