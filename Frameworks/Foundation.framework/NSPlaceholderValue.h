//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSNumber.h>

@interface NSPlaceholderValue : NSNumber
{
    struct _NSZone *zoneForInstance;
}

+ (BOOL)supportsSecureCoding;
- (void)finalize;
- (oneway void)release;
- (id)initWithBytes:(const void *)arg1 objCType:(const char *)arg2;
- (const char *)objCType;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)getValue:(void *)arg1;
- (unsigned int)retainCount;
- (id)autorelease;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)retain;

@end

