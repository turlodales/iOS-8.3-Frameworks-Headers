//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIImage, UISegmentedControl, UIView;

@protocol ABCardContentProvider <NSObject>
- (UIImage *)contentSwitchingControlPocketShadow;
- (int)defaultContentIndex;
- (UISegmentedControl *)newContentSwitchingControl;
- (UIView *)newContentViewForItemAtIndex:(int)arg1;
- (UIView *)newCustomHeaderView;
- (id)initWithPerson:(void *)arg1;

@optional
- (int)style;
- (BOOL)showsContentSwitchingControl;
- (UIImage *)contentSwitchingControlBorder;
- (UIColor *)backgroundColor;
@end

