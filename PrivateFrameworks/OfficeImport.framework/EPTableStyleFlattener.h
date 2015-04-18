//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/EPStyleFlattener.h>

@class EDTable;

@interface EPTableStyleFlattener : EPStyleFlattener
{
    EDTable *mTable;
    unsigned int mHeaderRowCount;
    unsigned int mTotalsRowCount;
}

- (id)newExtractedGlobalStyleElements:(id)arg1;
- (int)borderFlagsForStyleType:(int)arg1 row:(int)arg2 column:(int)arg3;
- (id)keysInTheOrderTheyShouldBeApplied;
- (id)newExtractedCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 column:(int)arg4;
- (id)newExtractedRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3;
- (id)styleFromObject:(id)arg1;
- (id)collectionFromWorksheet:(id)arg1;
- (void)cacheSizes:(id)arg1 inObject:(id)arg2;
- (int)stripeOffset:(int)arg1 row:(_Bool)arg2;
- (_Bool)isObjectSupported:(id)arg1;
- (void)clearCache;

@end

