//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Radio/RadioHistoryCategory.h>

@class NSArray, NSString;

@interface RadioMutableHistoryCategory : RadioHistoryCategory
{
}

@property(nonatomic) long long stationID;
@property(copy, nonatomic) NSString *stationHash;
@property(copy, nonatomic) NSString *categoryDescription;
@property(copy, nonatomic) NSArray *items;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) int type;
@property(copy, nonatomic) NSString *name;

@end

