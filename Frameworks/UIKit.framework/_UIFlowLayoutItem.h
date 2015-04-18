//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _UIFlowLayoutRow, _UIFlowLayoutSection;

@interface _UIFlowLayoutItem : NSObject
{
    _UIFlowLayoutSection *_section;
    _UIFlowLayoutRow *_rowObject;
    struct CGRect _itemFrame;
    struct {
        unsigned int positionEstimated:1;
    } _itemFlags;
}

@property(nonatomic) _UIFlowLayoutRow *rowObject; // @synthesize rowObject=_rowObject;
@property(nonatomic) _UIFlowLayoutSection *section; // @synthesize section=_section;
@property(nonatomic, getter=isPositionEstimated) BOOL positionEstimated;
@property(nonatomic) struct CGRect itemFrame; // @synthesize itemFrame=_itemFrame;
- (id)copy;

@end

