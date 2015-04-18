//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSFileAccessClaim.h>

@class NSFileAccessNode, NSURL;

@interface NSFileReadingWritingClaim : NSFileAccessClaim
{
    NSURL *_readingURL;
    BOOL _readingURLDidChange;
    unsigned int _readingOptions;
    NSURL *_writingURL;
    BOOL _writingURLDidChange;
    unsigned int _writingOptions;
    NSFileAccessNode *_readingLocation;
    NSFileAccessNode *_writingLocation;
    NSFileAccessNode *_rootNode;
    int _readingLinkResolutionCount;
}

- (void)dealloc;
- (id)initWithPurposeID:(id)arg1 readingURL:(id)arg2 options:(unsigned int)arg3 writingURL:(id)arg4 options:(unsigned int)arg5 claimer:(CDUnknownBlockType)arg6;
- (void)resolveURLsThenMaybeContinueInvokingClaimer:(CDUnknownBlockType)arg1;
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

