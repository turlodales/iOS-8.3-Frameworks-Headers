//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableCharacterSet, NSNumberFormatter;

@interface GEORisonParser : NSObject
{
    NSNumberFormatter *_formatter;
    NSMutableCharacterSet *_risonTerminators;
    NSMutableCharacterSet *_risonEscapes;
}

- (id)stringFromString:(id)arg1;
- (id)stringFromNull:(id)arg1;
- (id)stringFromArray:(id)arg1;
- (id)stringFromDictionary:(id)arg1;
- (id)keyWithReaderInfo:(CDStruct_b337ead5 *)arg1;
- (id)numberWithReaderInfo:(CDStruct_b337ead5 *)arg1;
- (id)nullWithReaderInfo:(CDStruct_b337ead5 *)arg1;
- (id)boolWithReaderInfo:(CDStruct_b337ead5 *)arg1;
- (id)arrayWithReaderInfo:(CDStruct_b337ead5 *)arg1;
- (id)stringLiteralWithReaderInfo:(CDStruct_b337ead5 *)arg1;
- (id)dictionaryWithReaderInfo:(CDStruct_b337ead5 *)arg1;
- (id)objectWithReaderInfo:(CDStruct_b337ead5 *)arg1;
- (id)objectFromRisonString:(id)arg1;
- (id)stringFromRisonObject:(id)arg1;
- (id)stringFromNumber:(id)arg1;
- (id)init;
- (void)dealloc;

@end
