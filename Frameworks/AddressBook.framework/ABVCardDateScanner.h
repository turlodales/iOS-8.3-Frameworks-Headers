//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ABVCardDateScanner : NSObject
{
    NSString *_string;
    unsigned int _position;
}

+ (id)scannerWithString:(id)arg1;
- (unsigned short)nextCharacter;
- (BOOL)isAtEnd;
- (id)initWithString:(id)arg1;
@property(readonly) unsigned int position; // @synthesize position=_position;
- (BOOL)scanLeapMarker;
- (int)scanCalendarUnit:(unsigned int)arg1;
- (int)scanComponentValueOfLength:(unsigned int)arg1;
- (unsigned int)lengthOfCalendarUnit:(unsigned int)arg1;

@end
