//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class WDTableCell;

@interface WMTableCellMapper : CMMapper
{
    WDTableCell *mWdTableCell;
    unsigned int mColSpan;
    double mHeight;
    double mWidth;
    double mLeftPadding;
    double mRightPadding;
}

- (unsigned int)colSpan;
- (id)initWithWDTableCell:(id)arg1 atIndex:(unsigned int)arg2 parent:(id)arg3;
- (void)mapCellStyleAt:(id)arg1;
- (id)tableMapper;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end

