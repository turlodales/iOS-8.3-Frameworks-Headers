//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDModifyBadgeURLRequest : CKDURLRequest
{
    unsigned int _badgeValue;
}

- (int)operationType;
- (id)initWithBadgeValue:(unsigned int)arg1;
- (id)requestOperationClasses;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
@property(readonly, nonatomic) unsigned int badgeValue; // @synthesize badgeValue=_badgeValue;

@end

