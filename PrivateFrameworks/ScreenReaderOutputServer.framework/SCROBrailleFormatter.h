//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSAttributedString;

@interface SCROBrailleFormatter : NSObject <NSCopying>
{
    struct __CFArray *_chunkArray;
    struct __CFDictionary *_chunkDictionary;
    struct __CFDictionary *_tokenDictionary;
    int _firstToken;
    int _lastToken;
    int _contractionMode;
    BOOL _showEightDot;
    int _displayMode;
    id _appToken;
    NSAttributedString *_statusText;
    BOOL _currentUnread;
    BOOL _anyUnread;
    BOOL _showDotsSevenAndEight;
    int _lineFocus;
}

- (void)translate;
- (id)statusText;
- (struct __CFDictionary *)chunkDictionary;
- (struct __CFArray *)chunkArray;
- (void)addText:(id)arg1 language:(id)arg2 selection:(struct _NSRange *)arg3 token:(int)arg4 focused:(BOOL)arg5;
@property(nonatomic) int lineFocus; // @synthesize lineFocus=_lineFocus;
- (BOOL)showDotsSevenAndEight;
- (void)addText:(id)arg1 language:(id)arg2 selection:(struct _NSRange *)arg3 token:(int)arg4 focused:(BOOL)arg5 technical:(BOOL)arg6;
- (void)setAppToken:(id)arg1;
- (void)addText:(id)arg1 selection:(struct _NSRange *)arg2 token:(int)arg3 focused:(BOOL)arg4 technical:(BOOL)arg5;
- (void)setAnyUnread:(BOOL)arg1;
- (void)setCurrentUnread:(BOOL)arg1;
- (int)lastToken;
- (int)firstToken;
- (id)appToken;
- (void)addText:(id)arg1 overrideText:(id)arg2 language:(id)arg3 selection:(struct _NSRange *)arg4 token:(int)arg5 focused:(BOOL)arg6 technical:(BOOL)arg7;
- (id)initWithContractionMode:(int)arg1 showEightDot:(BOOL)arg2 showDotsSevenAndEight:(BOOL)arg3;
- (int)contractionMode;
- (BOOL)showEightDot;
- (void)addText:(id)arg1 selection:(struct _NSRange *)arg2 token:(int)arg3 focused:(BOOL)arg4;
- (BOOL)currentUnread;
- (BOOL)anyUnread;
- (id)deepCopyWithZone:(struct _NSZone *)arg1;
- (void)setDisplayMode:(int)arg1;
- (int)displayMode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)setStatusText:(id)arg1;

@end
