//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADProperties.h>

@class PDTransitionOptions;

@interface PDTransition : OADProperties
{
    BOOL mHasType;
    int mType;
    BOOL mHasSpeed;
    int mSpeed;
    BOOL mHasAdvanceOnClick;
    BOOL mIsAdvanceOnClick;
    BOOL mHasAdvanceAfterTime;
    int mAdvanceAfterTime;
    PDTransitionOptions *mOptions;
}

- (void)setAdvanceAfterTime:(int)arg1;
- (int)advanceAfterTime;
- (void)setIsAdvanceOnClick:(BOOL)arg1;
- (BOOL)isAdvanceOnClick;
- (BOOL)hasTransitionOptions;
- (BOOL)hasAdvanceAfterTime;
- (BOOL)hasIsAdvanceOnClick;
- (BOOL)hasType;
- (BOOL)hasSpeed;
- (id)options;
- (void)setOptions:(id)arg1;
- (int)speed;
- (int)type;
- (void)setType:(int)arg1;
- (void)setSpeed:(int)arg1;
- (id)init;
- (void)dealloc;

@end
