//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UILabel;

@interface _MCDAlbumTracksCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_trackNumberLabel;
    UILabel *_durationLabel;
    float _maximumDurationWidth;
}

@property(copy, nonatomic) NSString *trackNumberText;
@property(copy, nonatomic) NSString *durationText;
@property(nonatomic) float maximumDurationWidth; // @synthesize maximumDurationWidth=_maximumDurationWidth;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end

