//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol _EditScriptData <NSObject>
+ (id <_EditScriptData>)EditScriptDataWithArray:(NSArray *)arg1;
+ (id <_EditScriptData>)EditScriptDataWithString:(NSString *)arg1 chunkSize:(int)arg2;
- (int)indexOfFirstDifferenceWithOtherData:(id <_EditScriptData>)arg1 shouldReverseIterate:(BOOL)arg2;
- (int)characterIndexForItem:(int)arg1;
- (int)lengthOfItem:(int)arg1;
- (NSString *)stringValue;
- (NSString *)stringAtIndex:(int)arg1;
- (int)length;
@end

