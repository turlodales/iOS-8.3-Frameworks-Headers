//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAssertionHandler.h"

@interface OITSUAssertionHandler : NSAssertionHandler
{
}

+ (id)performBlockIgnoringAssertions:(CDUnknownBlockType)arg1;
+ (void)installAsNSHandler;
+ (void)testCaseStopped:(id)arg1;
+ (void)testCaseStarted:(id)arg1;
+ (id)currentHandler;
- (void)handleFailureWithLocation:(id)arg1 file:(id)arg2 lineNumber:(int)arg3 description:(id)arg4 arguments:(void *)arg5;
- (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(int)arg3 description:(id)arg4;
- (void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 file:(id)arg3 lineNumber:(int)arg4 description:(id)arg5;

@end

