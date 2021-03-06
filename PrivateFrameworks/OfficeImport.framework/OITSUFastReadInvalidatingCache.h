//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSCondition;

@interface OITSUFastReadInvalidatingCache : NSObject
{
    CDUnknownBlockType mGenerator;
    id mValue;
    long long mReaderCount;
    NSArray *mToDispose;
    BOOL mReentrant;
    NSCondition *mCondition;
    BOOL mIsGenerating;
}

- (id)initForReentrant:(BOOL)arg1 withGenerator:(CDUnknownBlockType)arg2;
- (void)p_setValue:(id)arg1;
- (id)value;
- (void)invalidate;
- (void)dealloc;

@end

