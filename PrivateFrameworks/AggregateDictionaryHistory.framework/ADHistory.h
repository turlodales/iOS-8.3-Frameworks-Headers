//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ADHistory : NSObject
{
    struct Database *_database;
    NSString *_path;
}

- (BOOL)distributionsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(CDUnknownBlockType)arg4;
- (BOOL)scalarsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(CDUnknownBlockType)arg4;
- (id)initWithDefaultPath;
- (id)initWithPath:(id)arg1;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void)dealloc;

@end

