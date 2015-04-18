//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OCDEncryptedReader.h>

@class OCPZipPackage;

@interface OCXReader : OCDEncryptedReader
{
    OCPZipPackage *mZipPackage;
}

- (void)restartReaderToUseDecryptedDocument;
- (BOOL)verifyFileFormat;
@property(retain, nonatomic) OCPZipPackage *zipPackage; // @synthesize zipPackage=mZipPackage;
- (id)read;
- (_Bool)isBinaryReader;
- (BOOL)retainDecryptorWithErrorCode:(int *)arg1;
- (BOOL)start;
- (void)dealloc;

@end

