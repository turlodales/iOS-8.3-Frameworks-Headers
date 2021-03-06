//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIDelayedAction, UIInputSwitcherView;

@interface UIInputSwitcher : NSObject
{
    UIDelayedAction *m_switcherDelay;
    int m_state;
    UIInputSwitcherView *m_switcherView;
    NSString *_newMode;
}

+ (id)activeInstance;
+ (id)sharedInstance;
- (void)touchSwitcherTimer;
- (id)newMode;
- (void)setNewMode:(id)arg1;
- (void)showSwitcher;
- (void)handleRotate:(id)arg1;
- (void)touchHideSwitcherTimer;
- (void)cancelSwitcherTimer;
- (void)clearHideSwitcherTimer;
- (void)clearSwitcherTimer;
- (BOOL)handleModifiersChangedEvent:(id)arg1;
- (void)hideSwitcher;
- (BOOL)isVisible;
- (BOOL)handleSwitchCommand:(BOOL)arg1;
- (BOOL)switchMode:(id)arg1 withDelay:(BOOL)arg2;
- (id)init;
- (void)dealloc;

@end

