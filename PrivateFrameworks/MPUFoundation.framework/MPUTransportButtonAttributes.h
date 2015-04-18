//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIImage;

@interface MPUTransportButtonAttributes : NSObject
{
    UIImage *_image;
    UIColor *_normalButtonColor;
    UIColor *_selectedButtonColor;
    UIColor *_highlightedButtonColor;
    struct CGRect _frame;
    struct CGRect _expandedTouchRect;
}

@property(nonatomic) struct CGRect expandedTouchRect; // @synthesize expandedTouchRect=_expandedTouchRect;
@property(retain, nonatomic) UIColor *highlightedButtonColor; // @synthesize highlightedButtonColor=_highlightedButtonColor;
@property(retain, nonatomic) UIColor *normalButtonColor; // @synthesize normalButtonColor=_normalButtonColor;
@property(retain, nonatomic) UIColor *selectedButtonColor; // @synthesize selectedButtonColor=_selectedButtonColor;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;

@end

