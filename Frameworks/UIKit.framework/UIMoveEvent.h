//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIInternalEvent.h>

@interface UIMoveEvent : UIInternalEvent
{
    int _moveDirection;
    unsigned int _focusHeading;
}

- (void)_sendEventToResponder:(id)arg1;
@property(nonatomic, setter=_setMoveDirection:) int _moveDirection; // @synthesize _moveDirection;
@property(nonatomic, setter=_setFocusHeading:) unsigned int _focusHeading; // @synthesize _focusHeading;
- (int)type;

@end

