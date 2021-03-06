//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

@interface ADTapGestureRecognizer : UIGestureRecognizer
{
    int _finalTrackingID;
    CDUnknownBlockType _touchDownHandler;
    CDUnknownBlockType _touchMovedHandler;
    CDUnknownBlockType _touchUpHandler;
}

@property(copy, nonatomic) CDUnknownBlockType touchUpHandler; // @synthesize touchUpHandler=_touchUpHandler;
@property(copy, nonatomic) CDUnknownBlockType touchMovedHandler; // @synthesize touchMovedHandler=_touchMovedHandler;
@property(copy, nonatomic) CDUnknownBlockType touchDownHandler; // @synthesize touchDownHandler=_touchDownHandler;
@property(nonatomic) int finalTrackingID; // @synthesize finalTrackingID=_finalTrackingID;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end

