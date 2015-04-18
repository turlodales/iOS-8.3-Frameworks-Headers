//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SKUITracklistColumnData : NSObject
{
    NSArray *_columns;
    float _interColumnSpacing;
    float _leftEdgeInset;
    float _rightEdgeInset;
}

@property(nonatomic) float rightEdgeInset; // @synthesize rightEdgeInset=_rightEdgeInset;
@property(nonatomic) float leftEdgeInset; // @synthesize leftEdgeInset=_leftEdgeInset;
@property(nonatomic) float interColumnSpacing; // @synthesize interColumnSpacing=_interColumnSpacing;
@property(copy, nonatomic) NSArray *columns; // @synthesize columns=_columns;
- (id)viewElementsForTrack:(id)arg1 columnIndex:(int)arg2;
- (void)enumerateColumnsForHeader:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)columnForIdentifier:(int)arg1;
- (void)adjustColumnsToFitWidth:(float)arg1;
- (id)initWithRepresentativeTrack:(id)arg1;
- (void)enumerateColumnsForTrack:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_initSKUITracklistColumnData;
- (void).cxx_destruct;

@end

