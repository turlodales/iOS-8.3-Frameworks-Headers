//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABPeoplePickerNavigationController, NSMutableArray;

@interface ABPeoplePickerNavigationControllerPromptHandler : NSObject
{
    ABPeoplePickerNavigationController *_ppnc;
    NSMutableArray *_prompts;
}

- (id)initWithNavigationController:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dealloc;
- (unsigned int)indexForViewControllerType:(int)arg1;
- (BOOL)_shouldShowPromptForOrientation:(int)arg1;
- (void)setPrompt:(id)arg1 forViewControllerType:(int)arg2;
- (id)promptForViewControllerType:(int)arg1 orientation:(int)arg2;

@end
