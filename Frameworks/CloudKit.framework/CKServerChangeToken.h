//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData;

@interface CKServerChangeToken : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

