//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface __NSATSStringSegment : NSString
{
    struct __CFString *_originalString;
    long _originalStringLength;
    CDStruct_dff5684f _range;
    const unsigned short *_characters;
    unsigned short _buffer[128];
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)initWithOriginalString:(id)arg1 range:(struct _NSRange)arg2;
- (void)_setOriginalString:(id)arg1 range:(struct _NSRange)arg2;
- (oneway void)release;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)length;
- (void)dealloc;
- (const unsigned short *)_fastCharacterContents;

@end

