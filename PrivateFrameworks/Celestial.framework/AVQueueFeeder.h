//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AVQueueFeeder : NSObject
{
}

- (unsigned int)itemCount;
- (double)bookmarkTimeForIndex:(unsigned int)arg1;
- (void)contentsDidChangeByInsertingRange:(struct _NSRange)arg1;
- (unsigned int)numberOfPaths;
- (id)init;
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned int)arg1;
- (void)contentsDidChangeByRemovingRange:(struct _NSRange)arg1;
- (id)pathAtIndex:(unsigned int)arg1;
- (id)playbackInfoAtIndex:(unsigned int)arg1;

@end

