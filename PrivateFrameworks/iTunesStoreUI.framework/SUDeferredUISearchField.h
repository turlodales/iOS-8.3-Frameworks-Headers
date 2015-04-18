//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISearchField.h"

#import "SUDeferredUIView.h"

@class NSString;

@interface SUDeferredUISearchField : UISearchField <SUDeferredUIView>
{
    int _deferredClearButtonMode;
    id _deferredFont;
    struct CGRect _deferredFrame;
    float _deferredPaddingLeft;
    float _deferredPaddingTop;
    NSString *_deferredPlaceholder;
    NSString *_deferredText;
    BOOL _isDeferringInterfaceUpdates;
}

- (void)_commitDeferredInterfaceUpdates;
- (void)_saveCurrentStateAsDeferred;
@property(nonatomic, getter=isDeferringInterfaceUpdates) BOOL deferringInterfaceUpdates;
- (int)clearButtonMode;
- (float)paddingLeft;
- (void)setClearButtonMode:(int)arg1;
- (float)paddingTop;
- (id)placeholder;
- (void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2;
- (void)setPlaceholder:(id)arg1;
- (id)font;
- (void)setText:(id)arg1;
- (id)text;
- (void)setFont:(id)arg1;
- (struct CGRect)frame;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
