//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, UIAlertController, UIColor, UIImage, UIViewController;

@interface UIAlertAction : NSObject <NSCopying>
{
    NSString *_title;
    int _titleTextAlignment;
    BOOL _enabled;
    BOOL _checked;
    BOOL _isDefault;
    UIColor *_imageTintColor;
    UIColor *_titleTextColor;
    int _style;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _simpleHandler;
    UIImage *_image;
    CDUnknownBlockType _shouldDismissHandler;
    NSString *__descriptiveText;
    UIViewController *_contentViewController;
    id <_UIAlertActionRepresenting> __representer;
    UIAlertController *__alertController;
}

+ (id)_actionWithContentViewController:(id)arg1 style:(int)arg2;
+ (id)_actionWithTitle:(id)arg1 descriptiveText:(id)arg2 image:(id)arg3 style:(int)arg4 handler:(CDUnknownBlockType)arg5 shouldDismissHandler:(CDUnknownBlockType)arg6;
+ (id)_actionWithTitle:(id)arg1 image:(id)arg2 style:(int)arg3 handler:(CDUnknownBlockType)arg4 shouldDismissHandler:(CDUnknownBlockType)arg5;
+ (id)actionWithTitle:(id)arg1 style:(int)arg2 handler:(CDUnknownBlockType)arg3;
@property(setter=_setRepresenter:) id <_UIAlertActionRepresenting> _representer; // @synthesize _representer=__representer;
- (void)_didAddContentViewController;
- (void)_willAddContentViewController;
- (void)_setTitleTextColor:(id)arg1;
- (void)_setImageTintColor:(id)arg1;
- (id)_imageTintColor;
- (int)_titleTextAlignment;
@property(copy, nonatomic, setter=_setDescriptiveText:) NSString *_descriptiveText; // @synthesize _descriptiveText=__descriptiveText;
- (BOOL)_isChecked;
@property(setter=_setIsDefault:) BOOL _isDefault;
@property(retain, nonatomic, getter=_contentViewController, setter=_setContentViewController:) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void)_setChecked:(BOOL)arg1;
- (void)_setTitleTextAlignment:(int)arg1;
@property(nonatomic, setter=_setAlertController:) UIAlertController *_alertController; // @synthesize _alertController=__alertController;
@property(copy, nonatomic) CDUnknownBlockType simpleHandler; // @synthesize simpleHandler=_simpleHandler;
@property(copy, nonatomic) CDUnknownBlockType shouldDismissHandler; // @synthesize shouldDismissHandler=_shouldDismissHandler;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (id)_titleTextColor;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
- (void)dealloc;

@end

