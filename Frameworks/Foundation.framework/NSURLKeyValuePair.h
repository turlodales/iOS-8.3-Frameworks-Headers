//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSURLKeyValuePair : NSObject
{
    id key;
    id value;
    unsigned int hash;
}

+ (id)pair;
+ (id)pairWithKey:(id)arg1 value:(id)arg2;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (id)key;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithKey:(id)arg1 value:(id)arg2;

@end

