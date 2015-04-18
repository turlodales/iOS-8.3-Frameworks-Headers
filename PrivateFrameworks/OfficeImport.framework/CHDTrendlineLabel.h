//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CHDFormula, EDResources, OADGraphicProperties;

@interface CHDTrendlineLabel : NSObject
{
    EDResources *mResources;
    CHDFormula *mName;
    unsigned int mLastCachedNameStringIndex;
    unsigned int mContentFormatId;
    _Bool mGeneratedText;
    _Bool mAutomaticLabelDeleted;
    OADGraphicProperties *mGraphicProperties;
}

+ (id)trendlineLabelWithResources:(id)arg1;
- (_Bool)isAutomaticLabelDeleted;
- (_Bool)isGeneratedText;
- (void)setStringIndex:(unsigned int)arg1;
- (unsigned int)stringIndex;
- (void)setContentFormat:(id)arg1;
- (void)setAutomaticLabelDeleted:(_Bool)arg1;
- (void)setGeneratedText:(_Bool)arg1;
- (void)setName:(id)arg1 chart:(id)arg2;
- (void)setLastCachedName:(id)arg1;
- (id)initWithResources:(id)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setContentFormatId:(unsigned int)arg1;
- (id)lastCachedName;
- (id)contentFormat;
- (unsigned int)contentFormatId;
- (id)graphicProperties;
- (id)name;
- (void)dealloc;

@end

