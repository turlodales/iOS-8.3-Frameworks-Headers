//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ECIntTwoIntKeyDictionary;

@interface ECIntToTwoIntKeyCache : NSObject
{
    ECIntTwoIntKeyDictionary *mCache;
}

- (BOOL)integerIsPresentForKey1:(unsigned int)arg1 key2:(unsigned int)arg2 outValue:(unsigned int *)arg3;
- (void)setObject:(unsigned int)arg1 forKey1:(unsigned int)arg2 key2:(unsigned int)arg3;
- (id)init;
- (void)dealloc;

@end

