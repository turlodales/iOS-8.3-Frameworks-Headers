//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class SUCellConfiguration, SUItemOfferButton, SUTableCellContentView, UIBezierPath, UIColor;

@interface SUTableCell : UITableViewCell
{
    UIColor *_bottomBorderColor;
    SUTableCellContentView *_configurationView;
    unsigned int _hideHighlight:1;
    SUItemOfferButton *_itemOfferButton;
    CDStruct_b08558f4 _position;
    UIColor *_topBorderColor;
    int _editState;
}

@property(nonatomic) int editState; // @synthesize editState=_editState;
@property(nonatomic) BOOL showHighlight;
@property(nonatomic) BOOL usesSubviews;
@property(readonly, nonatomic) UIBezierPath *clippingPath;
- (id)copyPurchaseAnimationView;
@property(nonatomic) BOOL highlightsOnlyContentView;
@property(nonatomic) BOOL drawAsDisabled;
@property(retain, nonatomic) UIColor *topBorderColor; // @synthesize topBorderColor=_topBorderColor;
@property(retain, nonatomic) UIColor *bottomBorderColor; // @synthesize bottomBorderColor=_bottomBorderColor;
@property(readonly, retain, nonatomic) SUItemOfferButton *itemOfferButton;
@property(retain, nonatomic) SUCellConfiguration *configuration;
@property(nonatomic) int clipCorners;
- (void)setShowingDeleteConfirmation:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic) CDStruct_b08558f4 position; // @synthesize position=_position;
- (BOOL)_canDrawContent;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

