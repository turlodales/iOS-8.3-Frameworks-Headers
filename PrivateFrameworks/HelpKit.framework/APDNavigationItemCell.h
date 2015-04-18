//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class APDDataManager, APDNavigationItem, APDURLSession, UIColor, UIImageView, UILabel;

@interface APDNavigationItemCell : UITableViewCell
{
    int _indentLevel;
    APDURLSession *_imageUrlSession;
    BOOL _RTL;
    BOOL _showFulLSeparator;
    BOOL _shouldIndent;
    BOOL _closed;
    BOOL _indentWithSectionImage;
    APDNavigationItem *_navigationItem;
    APDDataManager *_dataManager;
    UILabel *_nameLabel;
    UIImageView *_arrowImageView;
    UIImageView *_accessoryImageView;
    UIImageView *_sectionImageView;
}

@property(nonatomic, getter=isRTL) BOOL RTL; // @synthesize RTL=_RTL;
- (void)toggle;
@property(retain, nonatomic) APDNavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
@property(retain, nonatomic) UIImageView *sectionImageView; // @synthesize sectionImageView=_sectionImageView;
@property(retain, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(nonatomic) BOOL indentWithSectionImage; // @synthesize indentWithSectionImage=_indentWithSectionImage;
@property(nonatomic) BOOL showFulLSeparator; // @synthesize showFulLSeparator=_showFulLSeparator;
@property(retain, nonatomic) UIColor *cellHighlightedColor; // @dynamic cellHighlightedColor;
- (void)setShouldIdent:(BOOL)arg1;
@property(retain, nonatomic) APDDataManager *dataManager; // @synthesize dataManager=_dataManager;
- (void)updateFonts;
- (void)cancelSectionImageRequest;
- (void)updateToggleImageAnimated:(BOOL)arg1;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) BOOL closed; // @synthesize closed=_closed;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (void)prepareForReuse;
- (id)accessibilityLabel;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
@property(nonatomic) BOOL shouldIndent; // @synthesize shouldIndent=_shouldIndent;

@end

