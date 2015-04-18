//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVItem.h"

@class ICSDateValue, NSString, NSURL;

@interface CalDAVUpdateOwnerItem : CoreDAVItem
{
    ICSDateValue *_dtstamp;
    NSString *_displayName;
    NSString *_firstName;
    NSString *_lastName;
    NSURL *_address;
    NSString *_emailAddress;
}

@property(retain, nonatomic) NSURL *address; // @synthesize address=_address;
- (id)copyParseRules;
@property(retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)setDisplayNameItem:(id)arg1;
- (void)setEmailAddressItem:(id)arg1;
- (void)setAddressItem:(id)arg1;
- (void)setDtstampItem:(id)arg1;
- (void)setLastNameItem:(id)arg1;
- (void)setFirstNameItem:(id)arg1;
- (id)description;
- (void)dealloc;
@property(retain, nonatomic) ICSDateValue *dtstamp; // @synthesize dtstamp=_dtstamp;

@end

