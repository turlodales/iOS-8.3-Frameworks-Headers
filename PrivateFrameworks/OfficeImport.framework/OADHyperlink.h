//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface OADHyperlink : NSObject
{
    NSURL *mTargetLocation;
    int mTargetMode;
    NSString *mTargetFrame;
    NSString *mAction;
    NSString *mTooltip;
    NSString *mInvalidUrl;
    BOOL mDoEndSound;
    BOOL mIsVisited;
    BOOL mDoAddToHistory;
}

@property(nonatomic) BOOL isVisited; // @synthesize isVisited=mIsVisited;
@property(nonatomic) BOOL doEndSound; // @synthesize doEndSound=mDoEndSound;
@property(nonatomic) BOOL doAddToHistory; // @synthesize doAddToHistory=mDoAddToHistory;
- (id)tooltip;
- (id)invalidUrl;
- (void)setTargetMode:(int)arg1;
- (int)targetMode;
- (void)setTargetLocation:(id)arg1;
- (void)setInvalidUrl:(id)arg1;
- (void)setTooltip:(id)arg1;
- (id)targetLocation;
- (id)targetFrame;
- (void)setTargetFrame:(id)arg1;
- (void)setAction:(id)arg1;
- (id)action;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;

@end
