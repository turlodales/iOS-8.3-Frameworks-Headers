//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSValue.h>

@interface NSConcreteValue : NSValue
{
    unsigned int _specialFlags;
    void *typeInfo;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
- (BOOL)isEqualToValue:(id)arg1;
- (const char *)objCType;
- (void)getValue:(void *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_matchType:(const char *)arg1 size:(unsigned int)arg2;
- (const void *)_value;

@end

