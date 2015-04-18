//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface PUTextBannerView : UIView
{
    UIImageView *_backgroundView;
    UILabel *_textLabel;
    BOOL _destructiveText;
    NSString *_text;
    int _textAlignment;
}

- (void).cxx_destruct;
@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isDestructiveText) BOOL destructiveText; // @synthesize destructiveText=_destructiveText;
- (void)_updateSubviews;

@end

