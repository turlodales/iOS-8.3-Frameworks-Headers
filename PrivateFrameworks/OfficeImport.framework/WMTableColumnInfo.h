//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface WMTableColumnInfo : NSObject
{
    NSMutableArray *mStopArray;
}

- (void)mergeStopArray:(id)arg1;
- (id)initWithStopArray:(id)arg1;
- (float)stopAt:(unsigned int)arg1;
- (unsigned int)columnSpan:(float)arg1 at:(unsigned int)arg2;
- (unsigned int)count;
- (void)dealloc;

@end

