//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableDictionary.h"

@interface NSDirInfo : NSMutableDictionary
{
    NSMutableDictionary *dict;
}

- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2;
- (id)keyEnumerator;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned int)arg3;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (unsigned int)count;
- (void)dealloc;
- (id)serializeToData;
- (unsigned int)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 hardLinkPath:(id)arg5;

@end

