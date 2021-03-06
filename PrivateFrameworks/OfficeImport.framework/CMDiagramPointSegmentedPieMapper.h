//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMDiagramPointMapper.h>

@interface CMDiagramPointSegmentedPieMapper : CMDiagramPointMapper
{
    float mStartAngle;
    float mStopAngle;
    BOOL mDrawArrows;
    unsigned int mSegmentIndex;
    unsigned int mSegmentCount;
}

- (id)_arrowFillWithState:(id)arg1;
- (void)setSegmentIndex:(unsigned int)arg1;
- (void)setStopAngle:(float)arg1;
- (id)transformPresentationName;
- (void)setDrawArrows:(BOOL)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setStartAngle:(float)arg1;
- (void)setSegmentCount:(unsigned int)arg1;

@end

