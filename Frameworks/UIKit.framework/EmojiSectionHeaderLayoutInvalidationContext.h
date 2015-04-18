//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayoutInvalidationContext.h>

@class NSIndexSet, NSMutableIndexSet;

@interface EmojiSectionHeaderLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext
{
    NSMutableIndexSet *_invalidatedSections;
    struct __CFDictionary *_headerWidthDict;
}

@property(readonly, nonatomic) NSIndexSet *invalidatedSections; // @synthesize invalidatedSections=_invalidatedSections;
- (float)preferredWidthForHeaderInSection:(int)arg1;
- (void)invalidateSectionHeaderInSection:(int)arg1 withPreferredWidth:(float)arg2;
- (void)dealloc;

@end

