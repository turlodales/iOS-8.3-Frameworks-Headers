//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

#import "NSCopying.h"

@interface _UIActivityPlaceholderItemProxy : NSProxy <NSCopying>
{
    id _placeholderItem;
}

- (id)initWithPlaceholderItem:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)description;
- (Class)superclass;
- (unsigned int)hash;
- (BOOL)isProxy;
- (BOOL)isEqual:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dealloc;
- (Class)class;

@end

