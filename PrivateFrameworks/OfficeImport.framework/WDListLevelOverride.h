//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WDDocument, WDListLevel;

@interface WDListLevelOverride : NSObject
{
    WDDocument *mDocument;
    WDListLevel *mListLevel;
    unsigned char mLevel;
    long mStartNumber;
    BOOL mStartNumberOverridden;
}

- (BOOL)isStartNumberOverridden;
- (id)initWithDocument:(id)arg1 level:(unsigned char)arg2;
- (id)mutableListLevel;
- (void)setStartNumber:(long)arg1;
- (long)startNumber;
- (id)listLevel;
- (BOOL)isListLevelOverridden;
- (unsigned char)level;
- (id)description;
- (void)dealloc;

@end
