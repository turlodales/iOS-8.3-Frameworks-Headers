//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSortDescriptor.h"

#import "NSSecureCoding.h"

@class CLLocation;

@interface CKLocationSortDescriptor : NSSortDescriptor <NSSecureCoding>
{
    CLLocation *_relativeLocation;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) CLLocation *relativeLocation; // @synthesize relativeLocation=_relativeLocation;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)compareObject:(id)arg1 toObject:(id)arg2;
- (id)initWithKey:(id)arg1 relativeLocation:(id)arg2;

@end

