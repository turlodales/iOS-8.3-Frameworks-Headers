//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/WDRun.h>

@class NSDate, WDCharacterProperties;

@interface WDDateTime : WDRun
{
    WDCharacterProperties *mProperties;
    NSDate *mDate;
}

- (id)initWithParagraph:(id)arg1 date:(id)arg2;
- (int)runType;
- (id)properties;
- (void)setProperties:(id)arg1;
- (id)date;
- (void)dealloc;
- (void)clearProperties;

@end

