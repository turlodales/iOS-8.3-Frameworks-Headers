//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ECUtils : NSObject
{
}

+ (double)dateTimeNumberFromNSDate:(id)arg1 edWorkbook:(id)arg2;
+ (_Bool)validDateInExcel:(id)arg1 edWorkbook:(id)arg2;
+ (_Bool)isValidDateTime:(double)arg1 edWorkbook:(id)arg2;
+ (id)lassoDefaultTableName;
+ (id)lassoStyleTableReferenceFromTableId:(id)arg1;
+ (id)renameFunction:(id)arg1;
+ (BOOL)isRenameFunction:(id)arg1;
+ (unsigned int)dateTimeOffsetForBuggy1900Dates:(double)arg1 edWorkbook:(id)arg2;
+ (double)timeIntervalFromXlDateTimeNumber:(double)arg1 edWorkbook:(id)arg2;
+ (id)renameMap;
+ (id)dateFromXlDateTimeNumber:(double)arg1 edWorkbook:(id)arg2;

@end

