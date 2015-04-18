//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface CalMeCard : NSObject <NSSecureCoding>
{
    NSString *_displayName;
    NSArray *_emailAddresses;
    NSString *_uniqueID;
    int _version;
}

+ (id)cardFromPath:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, retain) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(readonly, retain) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
- (BOOL)writeToPath:(id)arg1;
- (id)preferredEmailAddress;
- (id)initWithDisplayName:(id)arg1 emailAddresses:(id)arg2 uniqueID:(id)arg3;
- (BOOL)isEqualToMeCard:(id)arg1;
@property(readonly, retain) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
@property int version; // @synthesize version=_version;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

