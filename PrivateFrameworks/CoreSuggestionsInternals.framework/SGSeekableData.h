//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SGSeekable.h"

@class NSData, NSString;

@interface SGSeekableData : NSObject <SGSeekable>
{
    NSData *_data;
    const void *_bytes;
    unsigned long long _offsetInFile;
}

- (void)seekToFileOffset:(unsigned long long)arg1;
- (id)initWithMemoryMappedURL:(id)arg1;
- (id)initWithMemoryMappedPath:(id)arg1;
- (const void *)dataOfLength:(unsigned int)arg1;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
@property(readonly) unsigned long long offsetInFile; // @synthesize offsetInFile=_offsetInFile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

