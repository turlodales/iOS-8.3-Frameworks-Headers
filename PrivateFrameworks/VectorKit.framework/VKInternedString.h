//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface VKInternedString : NSString
{
    NSString *original;
}

+ (id)stringWithString:(id)arg1;
+ (void)initialize;
- (int)compare:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)substringToIndex:(unsigned int)arg1;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (id)initWithString:(id)arg1;
- (id)substringWithRange:(struct _NSRange)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)length;
- (id)substringFromIndex:(unsigned int)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (BOOL)isEqualToString:(id)arg1;

@end

