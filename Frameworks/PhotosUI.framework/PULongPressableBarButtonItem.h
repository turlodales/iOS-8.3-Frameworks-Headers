//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBarButtonItem.h"

@interface PULongPressableBarButtonItem : UIBarButtonItem
{
    id _longPressTarget;
    SEL _longPressAction;
}

- (void).cxx_destruct;
- (void)_longPressGestureRecognized:(id)arg1;
- (id)createViewForToolbar:(id)arg1;
- (id)createViewForNavigationItem:(id)arg1;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)_addLongPressGestureToView:(id)arg1;

@end

