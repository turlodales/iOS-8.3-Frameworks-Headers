//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface CKRecordZoneID : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_zoneName;
    NSString *_ownerName;
}

+ (BOOL)supportsSecureCoding;
- (id)ckShortDescription;
- (id)CKPropertiesDescription;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2;
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(retain, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSqliteRepresentation:(id)arg1;
- (id)sqliteRepresentation;

@end

