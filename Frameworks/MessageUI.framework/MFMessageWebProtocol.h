//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

@interface MFMessageWebProtocol : NSURLProtocol
{
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (void)initialize;
+ (void)registerFragments:(id)arg1 forUUID:(id)arg2;
+ (void)unregisterFragmentsForUUID:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
- (void)stopLoading;
- (void)dealloc;
- (void)startLoading;

@end

