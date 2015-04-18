//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKDCancelling.h"

@class CKDMMCSItemGroupSet, NSMutableArray, NSObject<OS_dispatch_group>;

@interface CKDMMCSItemGroupSetContext : NSObject <CKDCancelling>
{
    CKDMMCSItemGroupSet *_itemGroupSet;
    NSMutableArray *_itemGroupContexts;
    CDUnknownBlockType _itemGroupCompletionBlock;
    CDUnknownBlockType _itemGroupSetCompletionBlock;
    NSObject<OS_dispatch_group> *_itemGroupSetCompletionGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *itemGroupSetCompletionGroup; // @synthesize itemGroupSetCompletionGroup=_itemGroupSetCompletionGroup;
@property(copy, nonatomic) CDUnknownBlockType itemGroupCompletionBlock; // @synthesize itemGroupCompletionBlock=_itemGroupCompletionBlock;
@property(retain, nonatomic) NSMutableArray *itemGroupContexts; // @synthesize itemGroupContexts=_itemGroupContexts;
@property(retain, nonatomic) CKDMMCSItemGroupSet *itemGroupSet; // @synthesize itemGroupSet=_itemGroupSet;
@property(copy, nonatomic) CDUnknownBlockType itemGroupSetCompletionBlock; // @synthesize itemGroupSetCompletionBlock=_itemGroupSetCompletionBlock;
- (void)_addItemGroupContext:(id)arg1;
- (id)initWithItemGroupSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;

@end

