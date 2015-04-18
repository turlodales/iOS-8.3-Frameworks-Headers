//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface SUVariableCellConfigurationCache : NSObject
{
    NSMutableDictionary *_caches;
    id _cellContext;
    float _tableHeight;
}

@property(readonly, nonatomic) NSArray *caches;
@property(retain, nonatomic) id cellContext; // @synthesize cellContext=_cellContext;
- (id)initWithTableHeight:(float)arg1;
- (id)cacheForClass:(Class)arg1;
- (void)resetLayoutCaches;
- (void)reset;
- (void)dealloc;

@end

