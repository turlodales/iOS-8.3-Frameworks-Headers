//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableArray.h"

#import "NSKeyValueProxyCaching.h"

@class NSObject, NSString;

@interface NSKeyValueMutableArray : NSMutableArray <NSKeyValueProxyCaching>
{
    NSObject *_container;
    NSString *_key;
}

+ (id)_proxyShare;
+ (CDStruct_e8a1eea0 *)_proxyNonGCPoolPointer;
- (void)setArray:(id)arg1;
- (void)dealloc;
- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (CDStruct_a70f6672)_proxyLocator;

@end

