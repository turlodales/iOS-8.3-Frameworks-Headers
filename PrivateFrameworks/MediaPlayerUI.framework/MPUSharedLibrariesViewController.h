//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UINavigationController, _MPUSharedLibrariesViewController;

@interface MPUSharedLibrariesViewController : UIViewController
{
    _MPUSharedLibrariesViewController *_sharedLibariesViewController;
    UINavigationController *_navigationController;
    BOOL _showsCancelButton;
}

- (void)dismissSharedLibrariesViewController:(BOOL)arg1;
@property(nonatomic) BOOL showsLocalLibrary;
- (void)presentSharedLibrariesViewController:(BOOL)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

