//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "RemoteUITableFooter.h"

@class GKLabel, NSString;

@interface GKRemoteUIFooterView : UIView <RemoteUITableFooter>
{
    BOOL _shouldApplyGameCenterTheme;
    GKLabel *_textLabel;
    float _leftMargin;
    float _rightMargin;
    float _bottomMargin;
    float _paragraphMargin;
    int _layoutStyle;
}

- (id)initWithAttributes:(id)arg1;
@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) float bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) float leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) BOOL shouldApplyGameCenterTheme; // @synthesize shouldApplyGameCenterTheme=_shouldApplyGameCenterTheme;
@property(nonatomic) float paragraphMargin; // @synthesize paragraphMargin=_paragraphMargin;
- (id)attributedStringForString:(id)arg1 withStyle:(id)arg2;
- (float)footerHeightForWidth:(float)arg1 inTableView:(id)arg2;
@property(retain, nonatomic) GKLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) float rightMargin; // @synthesize rightMargin=_rightMargin;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

