//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABCardGroupItem.h>

@class NSArray, NSMutableArray;

@interface ABCardActionGroupItem : ABCardGroupItem
{
    NSMutableArray *_actions;
}

+ (id)actionGroupItemWithActions:(id)arg1;
+ (id)actionGroupItemWithAction:(id)arg1;
- (void)addAction:(id)arg1;
- (Class)cellClass;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (id)init;
- (void)dealloc;
- (id)initWithAction:(id)arg1;

@end

