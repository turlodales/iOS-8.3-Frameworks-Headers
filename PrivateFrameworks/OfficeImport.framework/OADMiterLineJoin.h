//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADLineJoin.h>

@interface OADMiterLineJoin : OADLineJoin
{
    float mLimit;
    unsigned int mIsLimitOverridden:1;
}

+ (id)defaultProperties;
- (BOOL)isLimitOverridden;
- (id)initWithDefaults;
- (float)limit;
- (void)setLimit:(float)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;

@end

