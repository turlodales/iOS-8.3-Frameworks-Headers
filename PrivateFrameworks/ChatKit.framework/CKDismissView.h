//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface CKDismissView : UIView
{
    id <CKDismissViewDelegate> _delegate;
    NSArray *_passthroughViews;
}

@property(copy, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(nonatomic) id <CKDismissViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end

