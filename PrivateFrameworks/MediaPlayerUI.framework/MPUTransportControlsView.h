//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MPUTransportButtonAttributes, NSArray, NSMutableDictionary, UIButton, UIButton<MPUTransportButton>, UIFont;

@interface MPUTransportControlsView : UIView
{
    UIButton<MPUTransportButton> *_leftButton;
    UIButton<MPUTransportButton> *_middleButton;
    UIButton<MPUTransportButton> *_rightButton;
    MPUTransportButtonAttributes *_leftButtonAttributes;
    MPUTransportButtonAttributes *_middleButtonAttributes;
    MPUTransportButtonAttributes *_rightButtonAttributes;
    NSMutableDictionary *_availableControlsByGroup;
    UIButton *_shuffleButton;
    UIButton *_repeatButton;
    struct UIEdgeInsets _insetsForExpandingButtons;
    BOOL _useCustomHighlightAppearance;
    BOOL _alwaysLive;
    BOOL _showAccessoryButtons;
    BOOL _showIsPlaying;
    NSArray *_availableControls;
    UIFont *_displayedSkipIntervalFont;
    unsigned int _repeatType;
    unsigned int _shuffleType;
    Class _transportButtonClass;
    id <MPUTransportControlsViewDelegate> _delegate;
    double _displayedSkipForwardInterval;
    double _displayedSkipBackwardInterval;
}

+ (id)_stringForDisplayedSkipInterval:(double)arg1;
+ (id)_skipIntervalButtonImageForInterval:(double)arg1 baseImage:(id)arg2 font:(id)arg3 scale:(float)arg4;
+ (id)defaultTransportControls;
@property(retain, nonatomic) Class transportButtonClass; // @synthesize transportButtonClass=_transportButtonClass;
@property(nonatomic) BOOL showIsPlaying; // @synthesize showIsPlaying=_showIsPlaying;
@property(nonatomic) BOOL showAccessoryButtons; // @synthesize showAccessoryButtons=_showAccessoryButtons;
@property(retain, nonatomic) UIFont *displayedSkipIntervalFont; // @synthesize displayedSkipIntervalFont=_displayedSkipIntervalFont;
@property(nonatomic) double displayedSkipBackwardInterval; // @synthesize displayedSkipBackwardInterval=_displayedSkipBackwardInterval;
@property(nonatomic) double displayedSkipForwardInterval; // @synthesize displayedSkipForwardInterval=_displayedSkipForwardInterval;
@property(copy, nonatomic) NSArray *availableControls; // @synthesize availableControls=_availableControls;
- (id)_transportButtonForControlType:(int)arg1;
@property(nonatomic, setter=_setInsetsForExpandingButtons:) struct UIEdgeInsets _insetsForExpandingButtons;
@property(nonatomic, getter=isAlwaysLive) BOOL alwaysLive; // @synthesize alwaysLive=_alwaysLive;
- (id)_accessoryButtonEmphasizedTextAttributes;
- (id)_accessoryButtonTextAttributes;
- (void)_configureButton:(id)arg1 withAttributes:(id)arg2 forTransportControl:(id)arg3 deferApplyingAttributes:(BOOL)arg4;
- (id)_availableControlForGroup:(int)arg1;
- (id)_createTransportButton;
- (void)_accessoryControlTap:(id)arg1;
- (void)_transportControlTouchExited:(id)arg1;
- (void)_transportControlTouchEntered:(id)arg1;
- (void)_transportControlTap:(id)arg1;
- (void)_transportControlLongPressEnd:(id)arg1;
- (void)_transportControlLongPressBegin:(id)arg1;
- (id)availableTransportControlWithType:(int)arg1;
- (id)_createAccessoryButton;
- (void)_updateTransportControlButtons;
- (void)_reloadTransportButtons;
- (void)_layoutButton:(id)arg1 withAttributes:(id)arg2 frame:(struct CGRect)arg3 inExpandedTouchRect:(struct CGRect)arg4;
- (struct CGRect)_adjustedFrameForButton:(id)arg1 proposedFrame:(struct CGRect)arg2;
- (struct CGSize)_transportControlButtonSize;
- (void)_updateTransportControlButtonsAndDeferApplyingAttributes:(BOOL)arg1;
- (void)_clearTransportButtonWeakReferencesToSelf;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MPUTransportControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)reload;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) unsigned int shuffleType; // @synthesize shuffleType=_shuffleType;
@property(nonatomic) unsigned int repeatType; // @synthesize repeatType=_repeatType;

@end

