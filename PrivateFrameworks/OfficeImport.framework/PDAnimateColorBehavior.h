//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/PDAnimateBehavior.h>

@class OADColor;

@interface PDAnimateColorBehavior : PDAnimateBehavior
{
    OADColor *mBy;
    OADColor *mFrom;
    OADColor *mTo;
    int mColorSpace;
    int mDirection;
}

- (void)setBy:(id)arg1;
- (id)by;
- (id)to;
- (void)setTo:(id)arg1;
- (id)from;
- (void)setFrom:(id)arg1;
- (int)direction;
- (void)setDirection:(int)arg1;
- (int)colorSpace;
- (void)setColorSpace:(int)arg1;

@end

