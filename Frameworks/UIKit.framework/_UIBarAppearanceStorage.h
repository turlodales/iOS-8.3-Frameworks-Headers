//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface _UIBarAppearanceStorage : NSObject
{
    NSMutableDictionary *backgroundImages;
}

+ (int)typicalBarPosition;
- (BOOL)hasAnyCustomBackgroundImage;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(int)arg2 barMetrics:(int)arg3;
- (id)backgroundImageForBarPosition:(int)arg1 barMetrics:(int)arg2;
- (void)dealloc;

@end

