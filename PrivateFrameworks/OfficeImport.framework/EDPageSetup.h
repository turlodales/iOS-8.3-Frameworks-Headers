//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EDPageSetup : NSObject
{
    int mOrientation;
    int mPageOrder;
    _Bool mCustomFirstPageNumber;
    unsigned long mFirstPageNumber;
    unsigned long mFitToHeight;
    unsigned long mFitToWidth;
    unsigned long mScale;
    float mLeftMargin;
    float mRightMargin;
    float mTopMargin;
    float mBottomMargin;
    float mHeaderMargin;
    float mFooterMargin;
}

+ (id)pageSetup;
- (float)footerMargin;
- (unsigned long)fitToWidth;
- (unsigned long)fitToHeight;
- (unsigned long)firstPageNumber;
- (_Bool)customFirstPageNumber;
- (void)setFooterMargin:(float)arg1;
- (void)setHeaderMargin:(float)arg1;
- (void)setFitToWidth:(unsigned long)arg1;
- (void)setFitToHeight:(unsigned long)arg1;
- (void)setCustomFirstPageNumber:(_Bool)arg1;
- (void)setFirstPageNumber:(unsigned long)arg1;
- (void)setBottomMargin:(float)arg1;
- (void)setLeftMargin:(float)arg1;
- (float)bottomMargin;
- (float)headerMargin;
- (float)leftMargin;
- (float)rightMargin;
- (int)order;
- (void)setOrder:(int)arg1;
- (void)setOrientation:(int)arg1;
- (void)setRightMargin:(float)arg1;
- (void)setScale:(unsigned long)arg1;
- (unsigned long)scale;
- (int)orientation;
- (id)init;
- (void)setTopMargin:(float)arg1;
- (float)topMargin;

@end

