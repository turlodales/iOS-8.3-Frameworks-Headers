//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@interface PQLNameInjectionBase : NSData
{
    unsigned int _length;
    char *_bytes;
}

@property(readonly, nonatomic) NSData *sql;
- (id)initWithBytes:(const void *)arg1 length:(unsigned int)arg2;
- (id)initWithData:(id)arg1;
- (const void *)bytes;
- (unsigned int)length;
- (void)dealloc;

@end

