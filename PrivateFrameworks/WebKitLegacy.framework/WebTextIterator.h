//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject
{
    WebTextIteratorPrivate *_private;
}

- (id)currentNode;
- (id)initWithRange:(id)arg1;
- (unsigned int)currentTextLength;
- (const unsigned short *)currentTextPointer;
- (id)currentRange;
- (void)advance;
- (id)currentText;
- (void)dealloc;
- (BOOL)atEnd;

@end

