//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKMapItemVendorDeal.h"

@class NSString;

@interface MKYelpDeal : NSObject <MKMapItemVendorDeal>
{
    NSString *identifier;
    NSString *title;
    NSString *urlString;
}

+ (id)dealWithJSONObject:(id)arg1;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

