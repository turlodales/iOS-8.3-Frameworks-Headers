//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PBSlideBase : NSObject
{
}

+ (void)readColorScheme:(id)arg1 colorScheme:(id)arg2 colorMap:(id)arg3 state:(id)arg4;
+ (void)readDrawingGroup:(id)arg1 slide:(id)arg2 state:(id)arg3;
+ (unsigned char)mapDirection:(id)arg1;
+ (id)newOptions:(long)arg1 transType:(int)arg2;
+ (int)parseTransType:(int)arg1 direction:(long)arg2;
+ (void)parseSlideShowInfo:(struct PptSSSlideInfoAtom *)arg1 slideBase:(id)arg2 state:(id)arg3;
+ (BOOL)slideFollowsMasterBackground:(id)arg1;
+ (unsigned int)authorIdForName:(id)arg1 state:(id)arg2;
+ (void)readComments:(id)arg1 slide:(id)arg2 state:(id)arg3;
+ (void)mapSlideNumberPlaceholder:(id)arg1 tgtSlideBase:(id)arg2 state:(id)arg3;

@end

