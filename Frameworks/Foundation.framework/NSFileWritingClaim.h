//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSFileAccessClaim.h>

@class NSFileAccessNode, NSURL;

@interface NSFileWritingClaim : NSFileAccessClaim
{
    NSURL *_url;
    BOOL _urlDidChange;
    unsigned int _options;
    NSFileAccessNode *_location;
}

- (void)dealloc;
- (void)resolveURLsThenContinueInvokingClaimer:(CDUnknownBlockType)arg1;
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned int)arg3 claimer:(CDUnknownBlockType)arg4;
- (BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (void)devalueSelf;
- (BOOL)blocksClaim:(id)arg1;
- (void)invokeClaimer;
- (void)granted;
- (id)initWithClient:(id)arg1 messageParameters:(id)arg2 replySender:(CDUnknownBlockType)arg3;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)forwardUsingMessageSender:(CDUnknownBlockType)arg1 crashHandler:(CDUnknownBlockType)arg2;
- (BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2;

@end

