//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface RMList : NSObject
{
    NSMutableArray *_items;
}

@property(readonly) NSArray *listItems; // @synthesize listItems=_items;
@property(readonly) struct CGPDFPage *page; // @dynamic page;
- (void)addItem:(id)arg1;
- (struct CGRect)bounds;

@end
