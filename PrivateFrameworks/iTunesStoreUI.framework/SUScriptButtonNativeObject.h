//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptNativeObject.h>

@class NSString, UIImage;

@interface SUScriptButtonNativeObject : SUScriptNativeObject
{
    BOOL _loading;
    NSString *_subtitle;
    NSString *_styleString;
    NSString *_systemItemString;
}

+ (id)objectWithDefaultButtonForScriptButton:(id)arg1;
@property(readonly, nonatomic) NSString *systemItemString; // @synthesize systemItemString=_systemItemString;
- (void)showConfirmationWithTitle:(id)arg1 animated:(BOOL)arg2;
- (void)setStyleFromString:(id)arg1;
- (void)connectButtonAction;
- (void)disconnectButtonAction;
- (void)hideConfirmationAnimated:(BOOL)arg1;
@property(readonly, nonatomic, getter=isBackButton) BOOL backButton;
- (void)configureFromScriptButtonNativeObject:(id)arg1;
- (id)initWithSystemItemString:(id)arg1;
- (void)buttonAction:(id)arg1;
@property(readonly, nonatomic, getter=isShowingConfirmation) BOOL showingConfirmation;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(nonatomic) struct UIEdgeInsets imageInsets;
@property(readonly, nonatomic) int buttonType;
@property(retain, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *styleString;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @dynamic enabled;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) UIImage *image; // @dynamic image;
@property(nonatomic) int tag; // @dynamic tag;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

