//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, SKUIIndexBarControl, SKUIIndexBarEntry;

@protocol SKUIIndexBarControlDataSource <NSObject>
- (SKUIIndexBarEntry *)indexBarControl:(SKUIIndexBarControl *)arg1 entryAtIndexPath:(NSIndexPath *)arg2;
- (int)indexBarControl:(SKUIIndexBarControl *)arg1 numberOfEntriesInSection:(int)arg2;

@optional
- (int)numberOfSectionsInIndexBarControl:(SKUIIndexBarControl *)arg1;
- (SKUIIndexBarEntry *)combinedEntryForIndexBarControl:(SKUIIndexBarControl *)arg1;
@end

