//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@interface _NSJSONReader : NSObject
{
    id input;
    int kind;
    NSError *error;
}

+ (BOOL)validForJSON:(id)arg1 depth:(unsigned int)arg2 allowFragments:(BOOL)arg3;
- (void)setError:(id)arg1;
- (id)error;
- (id)init;
- (void)dealloc;
- (id)parseStream:(id)arg1 options:(unsigned int)arg2;
- (id)parseData:(id)arg1 options:(unsigned int)arg2;
- (id)parseUTF8JSONData:(id)arg1 skipBytes:(unsigned int)arg2 options:(unsigned int)arg3;
- (unsigned int)findEncodingFromData:(id)arg1 withBOMSkipLength:(unsigned int *)arg2;

@end

