//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface PLProgressStack : NSObject
{
    BOOL notifyUsingAssetsdNotificationCenter;
    id delegate;
    float currentMultiplier;
    NSMutableArray *multipliers;
    float currentTotal;
    NSString *mediaPathString;
}

+ (id)unarchiveFromDictionary:(id)arg1;
- (id)archiveToDictionary;
- (void)popAndUpdate;
- (void)push:(float)arg1;
@property(nonatomic) BOOL notifyUsingAssetsdNotificationCenter; // @synthesize notifyUsingAssetsdNotificationCenter;
@property(retain, nonatomic) NSString *mediaPathString; // @synthesize mediaPathString;
- (float)totalProgress:(float)arg1;
@property(nonatomic) float currentTotal; // @synthesize currentTotal;
@property(nonatomic) float currentMultiplier; // @synthesize currentMultiplier;
@property(retain, nonatomic) NSMutableArray *multipliers; // @synthesize multipliers;
- (void)setCurrentMediaPath:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)updateProgress:(float)arg1;
- (void)pop;
@property(nonatomic) id delegate; // @synthesize delegate;
- (void)dealloc;

@end

