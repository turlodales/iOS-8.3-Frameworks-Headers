//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, TDElementProduction, TDRenditionKeySpec, TDRenditionType;

@interface TDRenditionSpec : NSManagedObject
{
}

- (void)awakeFromInsert;
@property(retain, nonatomic) TDRenditionType *renditionType; // @dynamic renditionType;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned int)arg2 document:(id)arg3;
- (void)resetToBaseKeySpec;

// Remaining properties
@property(retain, nonatomic) NSDate *dateOfLastChange; // @dynamic dateOfLastChange;
@property(retain, nonatomic) TDRenditionKeySpec *keySpec; // @dynamic keySpec;
@property(retain, nonatomic) TDElementProduction *production; // @dynamic production;

@end

