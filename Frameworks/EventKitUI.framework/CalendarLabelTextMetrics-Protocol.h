//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, UIColor, UIFont;

@protocol CalendarLabelTextMetrics
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@property(nonatomic) int textAlignment;
@property(nonatomic) int lineBreakMode;
@property(nonatomic) int numberOfLines;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(int)arg2;
@end

