//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GEOGizmoXPCInterface.h"

@class NSData;

@protocol NMCServerXPCInterface <GEOGizmoXPCInterface>
- (void)invalidateNavigationSessionWithRouteContext:(NSData *)arg1;
- (void)pingForNavigationBarrier:(void (^)(void))arg1;
@end

