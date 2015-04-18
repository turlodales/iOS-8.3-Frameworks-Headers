//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKOperationInfo.h>

#import "NSSecureCoding.h"

@class CKServerChangeToken;

@interface CKFetchNotificationChangesOperationInfo : CKOperationInfo <NSSecureCoding>
{
    CKServerChangeToken *_previousServerChangeToken;
    unsigned int _resultsLimit;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
@property(nonatomic) unsigned int resultsLimit; // @synthesize resultsLimit=_resultsLimit;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

