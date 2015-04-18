//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPTable, CPZone;

@interface CPTableMaker : NSObject
{
    CPZone *tableZone;
    CPTable *table;
    unsigned int cellIndex;
    CDStruct_b2fbf00d *rowYIntervals;
    CDStruct_b2fbf00d *columnXIntervals;
}

+ (void)makeTableFrom:(id)arg1;
+ (BOOL)isTable:(id)arg1;
+ (void)makeTablesInZone:(id)arg1;
+ (void)makeTablesInPage:(id)arg1;
- (void)makeTable;
- (void)determineRowsAndColumns:(BOOL)arg1;
- (id)newTableCellFromZone:(id)arg1;
- (id)newBackgroundGraphicArrayFromRectangularZone:(id)arg1;
- (id)initWithZone:(id)arg1;
- (void)dealloc;

@end

