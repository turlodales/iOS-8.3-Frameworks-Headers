//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TelephonyUI/TPNumberPad.h>

@class UIButton;

@interface TPSimpleNumberPad : TPNumberPad
{
    UIButton *_deleteButton;
    BOOL _showsDeleteButton;
    id <TPSimpleNumberPadDelegate> _delegate;
}

+ (id)_numberPadCharacters;
@property(nonatomic) BOOL showsDeleteButton; // @synthesize showsDeleteButton=_showsDeleteButton;
- (void)_deleteButtonClicked:(id)arg1 withEvent:(id)arg2;
- (id)initWithButtons:(id)arg1;
- (void)setNumberButtonsEnabled:(BOOL)arg1;
- (void)_updateDeleteButton;
@property id <TPSimpleNumberPadDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)buttonUp:(id)arg1;

@end

