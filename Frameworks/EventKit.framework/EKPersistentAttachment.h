//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

#import "NSCopying.h"

@class NSDictionary, NSNumber, NSString, NSURL;

@interface EKPersistentAttachment : EKPersistentObject <NSCopying>
{
}

+ (id)relations;
@property(copy, nonatomic) NSString *fileName;
@property(copy, nonatomic) NSNumber *fileSize;
@property(copy, nonatomic) NSURL *localURL;
@property(copy, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSString *UUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (int)entityType;
- (void)setIsBinary:(BOOL)arg1;
@property(copy, nonatomic) NSDictionary *XProperties;
@property(copy, nonatomic) NSString *fileFormat;
@property(readonly, nonatomic) BOOL isBinary;

@end

