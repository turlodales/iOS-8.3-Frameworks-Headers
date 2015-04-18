//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFTranscriptionType.h"

@class NSData, NSString, NSURL;

@interface AFLocation : NSObject <AFTranscriptionType>
{
    NSURL *_addressBookID;
    NSString *_addressLabel;
    NSString *_contactName;
    NSData *_geoResult;
    int _resultType;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;
@property(copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(copy, nonatomic) NSString *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(copy, nonatomic) NSData *geoResult; // @synthesize geoResult=_geoResult;
@property(copy, nonatomic) NSURL *addressBookID; // @synthesize addressBookID=_addressBookID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

