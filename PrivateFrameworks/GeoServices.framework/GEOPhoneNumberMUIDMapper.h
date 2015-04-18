//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface GEOPhoneNumberMUIDMapper : NSObject
{
    NSObject<OS_dispatch_queue> *_writeQ;
    NSMutableArray *_uniquePhoneNumbers;
    NSMutableDictionary *_phoneNumberMuidMapping;
    NSString *_filePath;
}

- (void)_pruneToSize:(unsigned int)arg1;
- (void)setMuid:(unsigned long long)arg1 providerId:(int)arg2 forPhoneNumber:(unsigned long long)arg3;
- (BOOL)getMuid:(out unsigned long long *)arg1 providerId:(out int *)arg2 forPhoneNumber:(unsigned long long)arg3;
- (id)initWithMappingFilePath:(id)arg1;
- (void)_save;
- (void)dealloc;

@end

