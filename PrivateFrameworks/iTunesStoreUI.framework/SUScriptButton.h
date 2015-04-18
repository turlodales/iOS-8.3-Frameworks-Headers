//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

#import "SUScriptNavigationItem.h"

@class NSString, SUScriptCanvasContext, UIImage, WebScriptObject;

@interface SUScriptButton : SUScriptObject <SUScriptNavigationItem>
{
    id _action;
    SUScriptCanvasContext *_canvas;
    BOOL _shouldPerformDefaultAction;
    WebScriptObject *_target;
}

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;
@property(nonatomic) BOOL shouldPerformDefaultAction; // @synthesize shouldPerformDefaultAction=_shouldPerformDefaultAction;
- (id)_systemItemString;
@property BOOL loading;
- (void)setNativeButton:(id)arg1;
- (void)performActionWithArguments:(id)arg1;
- (void)setImageWithURLString:(id)arg1 scale:(id)arg2;
- (void)setImageInsetsTop:(float)arg1 left:(float)arg2 bottom:(float)arg3 right:(float)arg4;
- (void)showConfirmationWithTitle:(id)arg1 animated:(BOOL)arg2;
- (void)hideConfirmationAnimated:(BOOL)arg1;
- (id)_nativeButton;
- (id)nativeButtonOfType:(int)arg1;
- (id)_boxedNativeButton;
- (id)initWithSystemItemString:(id)arg1;
- (id)_initSUScriptButton;
- (id)buttonItem;
- (id)attributeKeys;
@property(retain) SUScriptCanvasContext *canvas;
@property(readonly) id showingConfirmation;
- (id)_className;
- (id)scriptAttributeKeys;
@property(readonly, nonatomic) struct UIEdgeInsets imageEdgeInsets;
@property BOOL enabled;
@property(retain) NSString *subtitle;
- (id)_action;
@property(retain) id action;
@property(retain) NSString *style;
@property int tag;
@property(retain) WebScriptObject *target;
@property(retain, nonatomic) UIImage *image;
@property(retain) NSString *title;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

