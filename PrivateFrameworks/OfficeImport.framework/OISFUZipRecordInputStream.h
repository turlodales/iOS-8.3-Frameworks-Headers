//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OISFUZipRecordInputStream : NSObject
{
    id <OISFUBufferedInputStream> mInput;
    const char *mBuffer;
    long long mBufferStart;
    long long mBufferEnd;
}

- (const char *)dataAtOffset:(long long)arg1 size:(unsigned long)arg2 end:(long long)arg3;
- (id)initWithDataRepresentation:(id)arg1;
- (void)dealloc;

@end

