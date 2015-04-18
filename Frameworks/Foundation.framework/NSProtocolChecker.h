//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSObject, Protocol;

@interface NSProtocolChecker : NSProxy
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)protocolCheckerWithTarget:(id)arg1 protocol:(id)arg2;
@property(readonly) Protocol *protocol;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, retain) NSObject *target;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;
- (const char *)_localClassNameForClass;
- (struct objc_method_description *)methodDescriptionForSelector:(SEL)arg1;

@end

