//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

#import "GSAdditionEnumerating.h"

@class GSDaemonProxySync, GSPermanentStorage, NSArray, NSError, NSString;

@interface GSPermanentAdditionEnumerator : NSEnumerator <GSAdditionEnumerating>
{
    GSPermanentStorage *_storage;
    NSString *_nameSpace;
    unsigned long long _withOptions;
    unsigned long long _withoutOptions;
    NSArray *_array;
    unsigned int _pos;
    GSDaemonProxySync *_proxy;
    NSError *_error;
    id _token;
}

- (id)initWithStorage:(id)arg1 nameSpace:(id)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 ordering:(int)arg5;
- (void)_fetchNextBatch;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)nextObject;
- (void)dealloc;

@end

