//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface SKUIIndexBarEntry : NSObject
{
    struct CGSize _contentSize;
    BOOL _hasValidContentSize;
    int _entryType;
    int _visibilityPriority;
    UIColor *_tintColor;
    struct UIEdgeInsets _contentEdgeInsets;
}

+ (id)placeholderEntryWithSize:(struct CGSize)arg1;
+ (id)entryWithImage:(id)arg1;
+ (id)entryWithAttributedString:(id)arg1;
+ (id)systemCombinedEntry;
@property(nonatomic) int entryType; // @synthesize entryType=_entryType;
- (void)_drawInRect:(struct CGRect)arg1;
- (void)_drawContentInRect:(struct CGRect)arg1;
- (struct CGSize)_calculatedContentSize;
@property(nonatomic) int visibilityPriority; // @synthesize visibilityPriority=_visibilityPriority;
- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
- (id)_effectiveTintColor;
@property(copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) struct CGSize contentSize;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) struct CGSize size;

@end

