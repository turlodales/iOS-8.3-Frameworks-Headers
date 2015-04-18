//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPaymentValidating.h"

@class NSString, PKPaymentAuthorizationDataModel;

@interface PKPaymentDataItem : NSObject <PKPaymentValidating>
{
    int _type;
    int _status;
    PKPaymentAuthorizationDataModel *_model;
}

+ (int)dataType;
- (BOOL)isValidWithError:(id *)arg1;
@property(readonly, nonatomic, getter=isRejected) BOOL rejected;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) PKPaymentAuthorizationDataModel *model; // @synthesize model=_model;
- (id)initWithModel:(id)arg1;
@property(nonatomic) int type; // @synthesize type=_type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

