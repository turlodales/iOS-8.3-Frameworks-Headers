//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray;

@interface NSPersistentStoreRequest : NSObject <NSCopying>
{
    NSArray *_affectedStores;
}

+ (void)initialize;
@property(readonly) unsigned int requestType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSArray *affectedStores;

@end

