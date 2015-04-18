//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class HKQuantity, NSArray, NSData, NSDate, NSNumber, NSString;

@interface _HKMedicalIDData : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isDisabled;
    NSData *_pictureData;
    NSString *_name;
    NSDate *_birthdate;
    HKQuantity *_height;
    HKQuantity *_weight;
    int _bloodType;
    NSNumber *_isOrganDonor;
    NSArray *_emergencyContacts;
    NSString *_medicalConditions;
    NSString *_medicalNotes;
    NSString *_allergyInfo;
    NSString *_medicationInfo;
    NSDate *_dateSaved;
    int _schemaVersion;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDate *birthdate; // @synthesize birthdate=_birthdate;
@property(nonatomic) BOOL isDisabled; // @synthesize isDisabled=_isDisabled;
@property(retain, nonatomic) NSData *pictureData; // @synthesize pictureData=_pictureData;
@property(nonatomic) int schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(retain, nonatomic) HKQuantity *weight; // @synthesize weight=_weight;
@property(retain, nonatomic) HKQuantity *height; // @synthesize height=_height;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasAnyData;
@property(retain, nonatomic) NSDate *dateSaved; // @synthesize dateSaved=_dateSaved;
@property(retain, nonatomic) NSString *medicationInfo; // @synthesize medicationInfo=_medicationInfo;
@property(retain, nonatomic) NSString *allergyInfo; // @synthesize allergyInfo=_allergyInfo;
@property(retain, nonatomic) NSString *medicalNotes; // @synthesize medicalNotes=_medicalNotes;
@property(retain, nonatomic) NSString *medicalConditions; // @synthesize medicalConditions=_medicalConditions;
@property(retain, nonatomic) NSArray *emergencyContacts; // @synthesize emergencyContacts=_emergencyContacts;
@property(retain, nonatomic) NSNumber *isOrganDonor; // @synthesize isOrganDonor=_isOrganDonor;
@property(nonatomic) int bloodType; // @synthesize bloodType=_bloodType;

@end

