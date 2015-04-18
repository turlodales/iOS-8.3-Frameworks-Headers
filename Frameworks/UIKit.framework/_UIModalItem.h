//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSAttributedString, NSMutableArray, NSString, UITextInputTraits, UIView, UIViewController, _UIModalItemBackgroundView, _UIModalItemContentView, _UIModalItemRepresentationView;

@interface _UIModalItem : NSObject
{
    NSString *_title;
    NSString *_message;
    NSString *_cancelButtonTitle;
    NSString *_defaultButtonTitle;
    NSAttributedString *_titleAttributedString;
    NSAttributedString *_messageAttributedString;
    NSString *_subtitleString;
    int _titleMaxLineNumber;
    int _messageMaxLineNumber;
    int _numberOfButtonsRows;
    BOOL _useUndoStyle;
    BOOL _useWifiPickerLayout;
    BOOL _textFieldsHidden;
    BOOL _dontUpdateFrameForKBChanges;
    NSMutableArray *_otherButtonsTitles;
    int _itemType;
    id <UIModalItemDelegate> _delegate;
    CDUnknownBlockType _completionBlock;
    int _modalItemInputStyle;
    UIView *_popoverTargetView;
    struct CGRect _popoverTargetRect;
    UIViewController *_contentViewController;
    struct CGSize _contentViewControllerSize;
    int _presentAnimationType;
    int _dismissAnimationType;
    BOOL _isPresented;
    BOOL _isVisible;
    BOOL _isBeingDismissed;
    BOOL _isHidden;
    UIViewController *_viewController;
    UIViewController *_hostingViewController;
    UIViewController *_anchorViewController;
    int _defaultButtonIndex;
    int _cancelButtonIndex;
    _UIModalItemContentView *_contentView;
    _UIModalItemBackgroundView *_backgroundView;
    _UIModalItemRepresentationView *_representedView;
    NSString *_loginString;
    NSString *_passwordString;
    NSString *_loginPlaceholderString;
    NSString *_passwordPlaceholderString;
    UITextInputTraits *_passwordTraits;
    UITextInputTraits *_loginTraits;
    BOOL _enableFirstOtherButton;
    BOOL _forceVerticalLayout;
    int _dismissIndex;
    int cancelButtonIndex;
    NSArray *_buttonTitles;
}

+ (id)modalItemWithType:(int)arg1 title:(id)arg2 message:(id)arg3 buttonTitles:(id)arg4 completion:(CDUnknownBlockType)arg5;
@property(nonatomic) BOOL forceVerticalLayout; // @synthesize forceVerticalLayout=_forceVerticalLayout;
@property(copy, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
@property(nonatomic) BOOL useWifiPickerLayout; // @synthesize useWifiPickerLayout=_useWifiPickerLayout;
@property(nonatomic) BOOL useUndoStyle; // @synthesize useUndoStyle=_useUndoStyle;
@property(nonatomic) int numberOfButtonsRows; // @synthesize numberOfButtonsRows=_numberOfButtonsRows;
@property(nonatomic) int messageMaxLineNumber; // @synthesize messageMaxLineNumber=_messageMaxLineNumber;
@property(nonatomic) int titleMaxLineNumber; // @synthesize titleMaxLineNumber=_titleMaxLineNumber;
@property(copy, nonatomic) NSAttributedString *messageAttributedString; // @synthesize messageAttributedString=_messageAttributedString;
@property(copy, nonatomic) NSAttributedString *titleAttributedString; // @synthesize titleAttributedString=_titleAttributedString;
@property(nonatomic) struct CGSize contentViewControllerSize; // @synthesize contentViewControllerSize=_contentViewControllerSize;
@property(copy, nonatomic) NSString *passwordPlaceholderString; // @synthesize passwordPlaceholderString=_passwordPlaceholderString;
@property(copy, nonatomic) NSString *loginPlaceholderString; // @synthesize loginPlaceholderString=_loginPlaceholderString;
@property(copy, nonatomic) NSString *passwordString; // @synthesize passwordString=_passwordString;
@property(copy, nonatomic) NSString *loginString; // @synthesize loginString=_loginString;
@property(nonatomic) int dismissAnimationType; // @synthesize dismissAnimationType=_dismissAnimationType;
@property(nonatomic) int presentAnimationType; // @synthesize presentAnimationType=_presentAnimationType;
@property(nonatomic) struct CGRect targetRect; // @synthesize targetRect=_popoverTargetRect;
@property(nonatomic) UIView *targetView; // @synthesize targetView=_popoverTargetView;
@property(nonatomic) int dismissIndex; // @synthesize dismissIndex=_dismissIndex;
@property(nonatomic) BOOL isBeingDismissed; // @synthesize isBeingDismissed=_isBeingDismissed;
@property(readonly) BOOL isPresented; // @synthesize isPresented=_isPresented;
@property(nonatomic) int modalItemInputStyle; // @synthesize modalItemInputStyle=_modalItemInputStyle;
- (id)_loginTraits;
@property(nonatomic) BOOL textFieldsHidden; // @synthesize textFieldsHidden=_textFieldsHidden;
- (void)refreshButtonTitle;
@property(copy, nonatomic) NSString *subtitleString; // @synthesize subtitleString=_subtitleString;
- (id)_defaultButtonTitle;
- (id)_typeKey;
- (void)_setAnchorViewController:(id)arg1;
- (id)_anchorViewController;
- (void)_setHostingViewController:(id)arg1;
- (id)_hostingViewController;
@property(retain, nonatomic, getter=_viewController, setter=_setViewController:) UIViewController *_viewController;
- (id)_popoverBackgroundView;
- (id)buttonTitleAtIndex;
- (void)_updateContentView;
- (id)initWithTitle:(id)arg1 message:(id)arg2 otherButtonTitles:(id)arg3 completion:(CDUnknownBlockType)arg4 delegate:(id)arg5;
@property(nonatomic) int defaultButtonIndex; // @synthesize defaultButtonIndex=_defaultButtonIndex;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) BOOL isHidden; // @synthesize isHidden=_isHidden;
- (void)_setRepresentedView:(id)arg1;
- (id)_representedView;
@property(nonatomic) BOOL dontUpdateFrameForKBChanges; // @synthesize dontUpdateFrameForKBChanges=_dontUpdateFrameForKBChanges;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) BOOL enableFirstOtherButton; // @synthesize enableFirstOtherButton=_enableFirstOtherButton;
- (void)_loginFieldTextDidChange;
- (void)_passwordFieldTextDidChange;
- (float)_maxHeight;
- (float)_maxWidth;
- (id)_passwordTraits;
- (id)textFieldAtIndex:(int)arg1;
- (id)_otherButtonsTitles;
- (id)_cancelButtonTitle;
@property(retain, nonatomic) _UIModalItemBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) _UIModalItemContentView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int type; // @synthesize type=_itemType;
@property(nonatomic) int cancelButtonIndex; // @synthesize cancelButtonIndex;
- (int)addButtonWithTitle:(id)arg1;
- (id)_backgroundView;
@property(nonatomic) id <UIModalItemDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_contentView;
- (void)dealloc;

@end

