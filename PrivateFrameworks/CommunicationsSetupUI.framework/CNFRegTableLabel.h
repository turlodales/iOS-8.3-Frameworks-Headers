//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PSHeaderFooterView.h"

@class CNFRegLearnMoreButton, NSString, NSURL, PSSpecifier, UILabel, UITableView;

@interface CNFRegTableLabel : UIView <PSHeaderFooterView>
{
    UILabel *_label;
    PSSpecifier *_specifier;
    UITableView *_cnfreg_tableView;
    BOOL _isTopmostHeader;
    CNFRegLearnMoreButton *_urlButton;
    NSString *_URLText;
    NSURL *_URLTarget;
}

@property(copy, nonatomic) NSURL *URLTarget; // @synthesize URLTarget=_URLTarget;
@property(copy, nonatomic) NSString *URLText; // @synthesize URLText=_URLText;
@property(nonatomic) UITableView *cnfreg_tableView; // @synthesize cnfreg_tableView=_cnfreg_tableView;
- (id)_URLText;
- (void)_urlTapped:(id)arg1;
- (id)_labelText;
- (id)_URLTarget;
- (int)_labelTextAlignment;
- (float)_labelInset;
@property(nonatomic) BOOL isTopmostHeader; // @synthesize isTopmostHeader=_isTopmostHeader;
- (void)updateLabelText;
- (void)clearSpecifier;
- (float)_bottomPadding;
- (float)_topPadding;
- (void)layoutSubviews;
- (void)dealloc;
- (float)preferredHeightForWidth:(float)arg1;
- (id)initWithSpecifier:(id)arg1;

@end
