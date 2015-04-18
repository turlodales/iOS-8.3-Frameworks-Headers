//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIKBTree, UITouch;

@interface UIKeyboardTouchInfo : NSObject
{
    UITouch *_touch;
    UIKBTree *_key;
    UIKBTree *_keyplane;
    UIKBTree *_slidOffKey;
    struct CGPoint _initialPoint;
    struct CGPoint _initialDragPoint;
    BOOL _dragged;
    int _stage;
    BOOL _maySuppressUpAction;
    int _initialKeyState;
}

@property(nonatomic) int initialKeyState; // @synthesize initialKeyState=_initialKeyState;
@property(nonatomic) BOOL maySuppressUpAction; // @synthesize maySuppressUpAction=_maySuppressUpAction;
@property(nonatomic) BOOL dragged; // @synthesize dragged=_dragged;
@property(nonatomic) struct CGPoint initialDragPoint; // @synthesize initialDragPoint=_initialDragPoint;
@property(nonatomic) int stage; // @synthesize stage=_stage;
@property(nonatomic) struct CGPoint initialPoint; // @synthesize initialPoint=_initialPoint;
@property(retain, nonatomic) UIKBTree *slidOffKey; // @synthesize slidOffKey=_slidOffKey;
@property(retain, nonatomic) UIKBTree *keyplane; // @synthesize keyplane=_keyplane;
@property(retain, nonatomic) UIKBTree *key; // @synthesize key=_key;
@property(retain, nonatomic) UITouch *touch; // @synthesize touch=_touch;
- (void)dealloc;

@end

