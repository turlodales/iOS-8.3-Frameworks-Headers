//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface _UIMonogramView : UIView
{
    NSString *_name;
    NSString *_monogram;
    UILabel *_label;
}

- (id)labelForMonogram:(id)arg1;
@property(copy, nonatomic) NSString *monogram; // @synthesize monogram=_monogram;
- (id)monogramForName:(id)arg1;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

