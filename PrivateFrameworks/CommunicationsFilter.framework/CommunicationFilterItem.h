//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CommunicationFilterItem : NSObject
{
    struct __CFPhoneNumber *_phoneNumber;
    NSString *_emailAddress;
}

- (BOOL)isPhoneNumber;
- (id)initWithDictionaryRepresentation:(id)arg1;
@property(readonly, nonatomic) NSString *unformattedID;
- (id)initWithPhoneNumber:(struct __CFPhoneNumber *)arg1;
- (BOOL)_acceptVersion:(id)arg1;
- (BOOL)_acceptItemType:(id)arg1;
- (id)_dictionaryRepresentationWithRedaction;
- (BOOL)matchesFilterItem:(id)arg1;
- (id)initWithEmailAddress:(id)arg1;
@property(readonly, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) struct __CFPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (id)description;
- (void)dealloc;

@end

