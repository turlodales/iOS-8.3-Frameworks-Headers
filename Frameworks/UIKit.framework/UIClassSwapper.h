//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UIClassSwapper : NSObject
{
    NSString *className;
    id object;
}

+ (id)swapperForObject:(id)arg1 withClassName:(id)arg2;
- (id)className;
- (id)initWithObject:(id)arg1 andClassName:(id)arg2;
- (id)object;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

