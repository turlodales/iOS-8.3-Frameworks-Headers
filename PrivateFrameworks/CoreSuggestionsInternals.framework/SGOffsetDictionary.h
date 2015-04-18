//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SGOffsetDictionary : NSObject
{
    unsigned short _count;
    CDStruct_fcaecfc9 *_carrierEntries;
    CDStruct_fcaecfc9 *_mruCarrierEntry;
    unsigned long long _payloadOffset;
    unsigned long long _totalPayloadSize;
    unsigned int _sizeFactor;
}

- (id)fullMappingFromFile:(id)arg1;
- (id)stringValueForKey:(const char *)arg1 fromFile:(id)arg2;
- (long)payloadCountForKey:(const char *)arg1;
- (unsigned long long)payloadLengthForKey:(const char *)arg1;
- (id)initWithFilehandle:(id)arg1 sizeFactor:(unsigned int)arg2 keyLength:(int)arg3 singleByteOffset:(BOOL)arg4;
- (unsigned long long)seekLocationForKey:(const char *)arg1;
- (CDStruct_fcaecfc9 *)carrierEntryForKey:(const char *)arg1;
- (void)dealloc;

@end

