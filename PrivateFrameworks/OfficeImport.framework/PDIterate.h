//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PDIterate : NSObject
{
    int mType;
    BOOL mIsBackwards;
    BOOL mIsPercentage;
    double mValue;
}

- (void)setIsValuePercentage:(BOOL)arg1;
- (void)setIsBackwards:(BOOL)arg1;
- (BOOL)isValuePercentage;
- (BOOL)isBackwards;
- (void)setValue:(double)arg1;
- (double)value;
- (int)type;
- (void)setType:(int)arg1;
- (BOOL)isEqual:(id)arg1;

@end

