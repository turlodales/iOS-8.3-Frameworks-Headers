//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EDLinkReference : NSObject
{
    unsigned int mLinkIndex;
    unsigned int mFirstSheetIndex;
    unsigned int mLastSheetIndex;
}

+ (id)linkReferenceWithLinkIndex:(unsigned int)arg1 firstSheetIndex:(unsigned int)arg2 lastSheetIndex:(unsigned int)arg3;
- (_Bool)isWorkbookLevelReference;
- (void)setLinkIndex:(unsigned int)arg1;
- (unsigned int)linkIndex;
- (void)setLastSheetIndex:(unsigned int)arg1;
- (unsigned int)lastSheetIndex;
- (void)setFirstSheetIndex:(unsigned int)arg1;
- (unsigned int)firstSheetIndex;
- (BOOL)isEqualToLinkReference:(id)arg1;
- (id)initWithLinkIndex:(unsigned int)arg1 firstSheetIndex:(unsigned int)arg2 lastSheetIndex:(unsigned int)arg3;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;

@end

