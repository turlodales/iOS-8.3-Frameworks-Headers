//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADProperties.h>

#import "NSCopying.h"

@class OADColor, OADDash, OADFill, OADLineEnd, OADLineJoin;

@interface OADStroke : OADProperties <NSCopying>
{
    OADColor *mColor;
    OADFill *mFill;
    OADDash *mDash;
    OADLineJoin *mJoin;
    OADLineEnd *mHead;
    OADLineEnd *mTail;
    float mWidth;
    unsigned char mCap;
    unsigned char mCompoundType;
    unsigned char mPenAlignment;
    unsigned int mIsColorOverridden:1;
    unsigned int mIsCompoundTypeOverridden:1;
    unsigned int mIsCapOverridden:1;
    unsigned int mIsWidthOverridden:1;
    unsigned int mIsJoinOverridden:1;
    unsigned int mIsDashOverridden:1;
    unsigned int mIsFillOverridden:1;
    unsigned int mIsPenAlignmentOverridden:1;
}

+ (id)blackStroke;
+ (id)nullStroke;
+ (id)defaultProperties;
@property(retain, nonatomic) OADLineEnd *head; // @synthesize head=mHead;
- (void)setParent:(id)arg1;
- (int)penAlignment;
- (BOOL)isPenAlignmentOverridden;
- (BOOL)isJoinOverridden;
- (id)join;
@property(retain, nonatomic) OADLineEnd *tail; // @synthesize tail=mTail;
- (id)initWithDefaults;
- (int)cap;
- (BOOL)isCapOverridden;
- (void)setStyleColor:(id)arg1;
- (void)setJoin:(id)arg1;
- (void)setDash:(id)arg1;
- (void)setPenAlignment:(int)arg1;
- (void)setCompoundType:(int)arg1;
- (void)setCap:(int)arg1;
- (void)setFill:(id)arg1;
- (int)compoundType;
- (BOOL)isCompoundTypeOverridden;
- (id)dash;
- (BOOL)isDashOverridden;
- (BOOL)isFillOverridden;
- (BOOL)isColorOverridden;
- (BOOL)isWidthOverridden;
- (void)setWidth:(float)arg1;
- (void)setColor:(id)arg1;
- (id)color;
- (float)width;
- (id)fill;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;

@end
