//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKColoredBalloonView.h>

#import "CKContactBalloonViewProtocol.h"

@class CKMediaObject, NSString, UIImageView, UILabel;

@interface CKContactBalloonView : CKColoredBalloonView <CKContactBalloonViewProtocol>
{
    CKMediaObject *_mediaObject;
    UIImageView *_chevron;
    UIImageView *_contactImageView;
    UILabel *_nameLabel;
    UILabel *_organizationLabel;
}

@property(retain, nonatomic) UILabel *organizationLabel; // @synthesize organizationLabel=_organizationLabel;
@property(retain, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (void)configureForMessagePart:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(float)arg2 orientation:(BOOL)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)prepareForDisplay;
@property(retain, nonatomic) UIImageView *contactImageView; // @synthesize contactImageView=_contactImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
- (void)prepareForReuse;
- (struct UIEdgeInsets)alignmentRectInsets;
@property(readonly, copy) NSString *description;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

