//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface CIColor : NSObject <NSCoding, NSCopying>
{
    void *_priv;
    void *_pad[3];
}

+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)colorWithString:(id)arg1;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (id)stringRepresentation;
- (void)finalize;
- (const float *)components;
- (float)blue;
- (float)green;
- (float)red;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithString:(id)arg1;
- (struct CGColor *)cgColor;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long)numberOfComponents;
- (float)alpha;
- (void)encodeWithCoder:(id)arg1;
- (struct CGColor *)CGColor;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (struct CGColorSpace *)colorSpace;

@end

