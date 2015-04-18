//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUPhotosGridViewController.h>

@class UIBarButtonItem;

@interface PUPhotosSinglePickerViewController : PUPhotosGridViewController
{
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_done:(id)arg1;
- (void)updateNavigationBarAnimated:(BOOL)arg1;
- (id)newGridLayout;
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out char *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;
- (id)initWithSpec:(id)arg1;

@end

