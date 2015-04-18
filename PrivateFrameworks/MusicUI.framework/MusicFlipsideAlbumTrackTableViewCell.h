//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicUI/MusicCollectionTrackTableViewCell.h>

@class MPURatingControl;

@interface MusicFlipsideAlbumTrackTableViewCell : MusicCollectionTrackTableViewCell
{
    BOOL _showsRatingControl;
    MPURatingControl *_ratingControl;
}

+ (Class)contentViewClass;
@property(nonatomic) BOOL showsRatingControl; // @synthesize showsRatingControl=_showsRatingControl;
- (void)setContentBoundsEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)setShowsRatingControl:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) MPURatingControl *ratingControl; // @synthesize ratingControl=_ratingControl;
- (void).cxx_destruct;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;

@end

