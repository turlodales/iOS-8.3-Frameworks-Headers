//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface OITSUIndexedStringStore : NSObject
{
    int _lock;
    NSMutableDictionary *_indexByString;
    NSMutableArray *_stringByIndex;
}

- (id)stringForIndex:(unsigned int)arg1;
- (unsigned int)indexForString:(id)arg1;
- (id)init;
- (unsigned int)count;
- (void)dealloc;

@end

