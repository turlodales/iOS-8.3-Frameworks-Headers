//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface MPClosedCaptionDisplay : UIView
{
    UILabel *_label;
    UIView *_backgroundView;
    BOOL _hidden;
    BOOL _rotating;
}

- (void).cxx_destruct;
- (void)setText:(id)arg1;
- (void)setNeedsLayout;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_hidePanel;
- (void)_updatePositioning:(BOOL)arg1;
- (void)endLayoutChange;
- (void)startLayoutChange:(BOOL)arg1;

@end

