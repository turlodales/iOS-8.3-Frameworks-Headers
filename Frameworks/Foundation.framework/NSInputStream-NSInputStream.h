//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSInputStream.h"

@interface NSInputStream (NSInputStream)
+ (id)inputStreamWithFileAtPath:(id)arg1;
+ (id)inputStreamWithURL:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)inputStreamWithData:(id)arg1;
- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned int *)arg2;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2;
- (unsigned long)_cfTypeID;
@end

