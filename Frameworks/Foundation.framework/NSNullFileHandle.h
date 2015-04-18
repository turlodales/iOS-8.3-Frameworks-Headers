//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSFileHandle.h>

@interface NSNullFileHandle : NSFileHandle
{
}

- (void)seekToFileOffset:(unsigned long long)arg1;
- (void)closeFile;
- (void)writeData:(id)arg1;
- (unsigned long long)seekToEndOfFile;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)synchronizeFile;
- (int)fileDescriptor;
- (id)readDataOfLength:(unsigned int)arg1;
- (void)setReadabilityHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)readabilityHandler;
- (void)setWriteabilityHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)writeabilityHandler;
- (unsigned long long)offsetInFile;
- (id)readDataToEndOfFile;
- (id)availableData;

@end

