//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABPropertyGroupItem.h>

@class CNPostalAddress;

@interface ABPropertyGroupPostalAddressItem : ABPropertyGroupItem
{
}

@property(readonly, nonatomic) CNPostalAddress *address;
- (BOOL)_isMinimalAddress:(id)arg1;
- (id)bestValue:(id)arg1;
- (id)displayStringForValue:(id)arg1;
- (id)defaultActionURL;
- (id)normalizedValue;
- (BOOL)isEquivalentToItem:(id)arg1 whenEditing:(BOOL)arg2;

@end

