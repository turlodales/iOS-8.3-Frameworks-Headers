//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface HKDataCategoryController : NSObject
{
    NSMutableArray *_dataCategories;
    NSMutableDictionary *_dataCategoriesByCategoryID;
}

+ (id)sharedInstance;
- (id)allDataCategories;
- (id)categoryWithID:(int)arg1;
- (void).cxx_destruct;
- (id)init;

@end

