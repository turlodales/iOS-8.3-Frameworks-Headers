//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@interface _MFMailRecipientTextField : UITextField
{
    BOOL _isShowingDictationPlaceholder;
}

@property(readonly, nonatomic) BOOL isShowingDictationPlaceholder; // @synthesize isShowingDictationPlaceholder=_isShowingDictationPlaceholder;
- (id)customOverlayContainer;
- (void)paste:(id)arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (id)insertDictationResultPlaceholder;
- (id)_previousKeyResponder;
- (void)_handleKeyUIEvent:(id)arg1;

@end

