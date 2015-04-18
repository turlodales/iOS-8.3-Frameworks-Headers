//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIFont;

@interface _UIInlineCandidateCell : UIView
{
    NSString *_candidate;
    unsigned int _index;
    UIFont *_font;
    struct CGSize _stringImageSize;
    BOOL _highlighted;
    id _target;
    SEL _action;
    BOOL _lastItem;
    BOOL _dontDrawRightEdge;
}

- (void)dontDrawRightEdge:(BOOL)arg1;
- (void)setLastItem:(BOOL)arg1;
- (struct CGSize)stringImageSize;
- (id)initWithCandidate:(id)arg1 andIndex:(unsigned int)arg2 withFontSize:(float)arg3 target:(id)arg4 action:(SEL)arg5;
- (unsigned int)index;
- (void)setHighlighted:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

