//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ESDContainer, OABReaderState, OABTableSortedIntArray, OADTable;

@interface OABRTable : NSObject
{
    ESDContainer *mSrcTable;
    OADTable *mTgtTable;
    OABReaderState *mState;
    struct CGPoint mScale;
    int mRowCount;
    int mColumnCount;
    OABTableSortedIntArray *mXCoords;
    OABTableSortedIntArray *mYCoords;
    struct OABTable2DArray<EshShape *> *mHorzLines;
    struct OABTable2DArray<EshShape *> *mVertLines;
    struct OABTable2DArray<OABTableCell> *mCells;
}

- (void)map;
- (id)initWithSourceTable:(id)arg1 targetTable:(id)arg2 state:(id)arg3;
- (void)createTargetTableContents;
- (void)validateTable;
- (void)readCellsAndLines;
- (void)readCoordinates;
- (void)mapScale;
- (void)readAnchor;
- (id)readStrokeFromShape:(struct EshShape *)arg1;
- (id).cxx_construct;
- (void)dealloc;

@end

