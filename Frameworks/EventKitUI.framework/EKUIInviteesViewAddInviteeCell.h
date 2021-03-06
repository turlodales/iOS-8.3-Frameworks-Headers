//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSLayoutConstraint, NSString, UILabel;

@interface EKUIInviteesViewAddInviteeCell : UITableViewCell
{
    float _leftInset;
    UILabel *_simpleTextLabel;
    NSArray *_persistentConstraints;
    NSLayoutConstraint *_leftInsetConstraint;
    NSString *_simpleText;
}

+ (id)_simpleTextLabelFont;
@property(nonatomic) float leftInset; // @synthesize leftInset=_leftInset;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) NSString *simpleText; // @synthesize simpleText=_simpleText;
@property(retain, nonatomic) NSLayoutConstraint *leftInsetConstraint; // @synthesize leftInsetConstraint=_leftInsetConstraint;
@property(retain, nonatomic) UILabel *simpleTextLabel; // @synthesize simpleTextLabel=_simpleTextLabel;
@property(retain, nonatomic) NSArray *persistentConstraints; // @synthesize persistentConstraints=_persistentConstraints;

@end

