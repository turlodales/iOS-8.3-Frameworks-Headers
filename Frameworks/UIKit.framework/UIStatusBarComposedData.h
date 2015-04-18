//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface UIStatusBarComposedData : NSObject <NSCopying>
{
    CDStruct_0dcac612 _rawData;
    char _itemEnabled[31];
    NSString *_doubleHeightStatus;
}

@property(copy, nonatomic) NSString *doubleHeightStatus; // @synthesize doubleHeightStatus=_doubleHeightStatus;
- (id)initWithRawData:(const CDStruct_0dcac612 *)arg1;
- (void)setItem:(int)arg1 enabled:(BOOL)arg2;
- (BOOL)isItemEnabled:(int)arg1;
@property(readonly, nonatomic) CDStruct_0dcac612 *rawData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

