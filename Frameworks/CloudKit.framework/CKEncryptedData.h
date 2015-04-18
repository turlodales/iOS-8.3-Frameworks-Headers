//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKRecordValue.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSString;

@interface CKEncryptedData : NSObject <CKRecordValue, NSCopying, NSSecureCoding>
{
    NSData *_data;
    NSData *_encryptedData;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSData *encryptedData; // @synthesize encryptedData=_encryptedData;
- (id)initWithEncryptedData:(id)arg1;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

