//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface CertUIItemDetail : NSObject
{
    BOOL _showCheckmarkView;
    BOOL _showCheckmark;
    NSString *_detailTitle;
    NSString *_detail;
    UIColor *_detailHighlightColor;
    NSString *_checkmarkText;
    UIColor *_checkmarkHighlightColor;
}

+ (id)itemDetailWithDetailTitle:(id)arg1 detail:(id)arg2 detailHighlightColor:(id)arg3 showCheckmarkView:(BOOL)arg4 checkmarkText:(id)arg5 checkmarkHighlightColor:(id)arg6 showCheckmark:(BOOL)arg7;
+ (id)itemDetailWithDetailTitle:(id)arg1 detail:(id)arg2 detailHighlightColor:(id)arg3;
+ (id)itemDetailWithDetailTitle:(id)arg1 detail:(id)arg2;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
@property(nonatomic) BOOL showCheckmark; // @synthesize showCheckmark=_showCheckmark;
@property(retain, nonatomic) UIColor *checkmarkHighlightColor; // @synthesize checkmarkHighlightColor=_checkmarkHighlightColor;
@property(retain, nonatomic) NSString *checkmarkText; // @synthesize checkmarkText=_checkmarkText;
@property(nonatomic) BOOL showCheckmarkView; // @synthesize showCheckmarkView=_showCheckmarkView;
@property(retain, nonatomic) UIColor *detailHighlightColor; // @synthesize detailHighlightColor=_detailHighlightColor;
- (id)initWithDetailTitle:(id)arg1 detail:(id)arg2 detailHighlightColor:(id)arg3 showCheckmarkView:(BOOL)arg4 checkmarkText:(id)arg5 checkmarkHighlightColor:(id)arg6 showCheckmark:(BOOL)arg7;
- (void).cxx_destruct;

@end

