//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSSet;

@interface BBBulletinRequestParameters : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _publisherDestination;
    int _maximumCount;
    NSSet *_enabledSectionIDs;
}

+ (id)requestParametersForDestination:(unsigned int)arg1 withMaximumCount:(int)arg2 enabledSectionIDs:(id)arg3;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned int publisherDestination; // @synthesize publisherDestination=_publisherDestination;
@property(readonly, nonatomic) NSSet *enabledSectionIDs;
- (id)initWithDestination:(unsigned int)arg1 maximumCount:(int)arg2 enabledSectionIDs:(id)arg3;
@property(readonly, nonatomic) unsigned int maximumCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

