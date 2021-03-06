//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIFont;

@interface UIAutocorrectTextView : UIView
{
    NSString *m_string;
    int m_type;
    int m_edgeType;
    UIFont *m_textFont;
    BOOL m_animating;
    BOOL m_isLongString;
}

@property(nonatomic) BOOL isLongString; // @synthesize isLongString=m_isLongString;
@property(nonatomic) BOOL animating; // @synthesize animating=m_animating;
- (id)initWithFrame:(struct CGRect)arg1 string:(id)arg2 type:(int)arg3 edgeType:(int)arg4;
- (struct CGRect)_calculateRectForExpandedHitRegion;
- (void)setEdgeType:(int)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

