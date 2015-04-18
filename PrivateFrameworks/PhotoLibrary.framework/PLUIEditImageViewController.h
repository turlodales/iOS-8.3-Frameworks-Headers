//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibrary/PLUIImageViewController.h>

@interface PLUIEditImageViewController : PLUIImageViewController
{
    id _delegate;
    int _saveOptions;
    int _mode;
}

- (int)imageFormat;
- (int)saveOptions;
- (void)setImageSavingOptions:(int)arg1;
- (void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2;
- (unsigned int)_tileAutoresizingMask;
- (unsigned int)_contentAutoresizingMask;
- (int)cropOverlayMode;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)cropOverlayWasCancelled:(id)arg1;
- (id)imageTile;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithPhoto:(id)arg1;
- (id)photo;

@end

