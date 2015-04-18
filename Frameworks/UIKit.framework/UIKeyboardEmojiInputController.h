//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface UIKeyboardEmojiInputController : NSObject
{
    int _currentSequence;
    NSMutableDictionary *_usageHistory;
    NSMutableArray *_recents;
    NSMutableDictionary *_skinToneBaseKeyPreferences;
    int _lastViewedCategory;
}

+ (id)activeInputView;
+ (void)writeEmojiDefaults;
+ (Class)classForInputView;
+ (void)writeEmojiDefaultsAndReleaseActiveInputView;
- (id)defaultsDictionary;
- (void)clearAncientHistory;
- (BOOL)isAncientSequence:(int)arg1;
- (double)scoreForEmoji:(id)arg1;
- (double)scoreForSequence:(int)arg1;
@property int lastViewedCategory; // @synthesize lastViewedCategory=_lastViewedCategory;
- (id)recents;
- (void)emojiUsed:(id)arg1;
- (void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2;
- (id)skinToneBaseKeyPreferences;
- (id)initWithInputView:(id)arg1;
- (void)dealloc;

@end

