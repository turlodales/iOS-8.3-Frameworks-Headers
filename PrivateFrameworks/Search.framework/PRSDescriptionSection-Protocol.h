//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PRSSection.h"

@class NSString, PRSImage;

@protocol PRSDescriptionSection <PRSSection>
@property(retain, nonatomic) NSString *resultDescription;

@optional
@property(retain, nonatomic) NSString *image_align;
@property(retain, nonatomic) PRSImage *image;
@property(nonatomic) int description_weight;
@property(nonatomic) int description_size;
@property(retain, nonatomic) NSString *description_expand_text;
@property(nonatomic) BOOL description_expand;
@property(nonatomic) int description_maxlines;
@property(nonatomic) int title_weight;
@property(nonatomic) BOOL title_nowrap;
@property(retain, nonatomic) NSString *title;
@end

