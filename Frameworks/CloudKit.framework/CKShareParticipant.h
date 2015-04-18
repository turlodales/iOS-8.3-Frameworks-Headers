//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CKShareID, CKUserIdentity, NSString;

@interface CKShareParticipant : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isCurrentUser;
    CKUserIdentity *_userIdentity;
    int _type;
    int _acceptanceStatus;
    int _permission;
    NSString *_participantID;
    CKShareID *_shareID;
    CKUserIdentity *_originalUserIdentity;
    int _originalParticipantType;
    int _originalAcceptanceStatus;
    int _originalPermission;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int acceptanceStatus; // @synthesize acceptanceStatus=_acceptanceStatus;
@property(retain, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(nonatomic) BOOL isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
- (id)initWithUserIdentity:(id)arg1;
@property(nonatomic) int permission; // @synthesize permission=_permission;
- (id)CKPropertiesDescription;
@property(retain, nonatomic) CKUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(retain, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)debugDescription;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) CKUserIdentity *originalUserIdentity; // @synthesize originalUserIdentity=_originalUserIdentity;
@property(nonatomic) int originalPermission; // @synthesize originalPermission=_originalPermission;
@property(nonatomic) int originalAcceptanceStatus; // @synthesize originalAcceptanceStatus=_originalAcceptanceStatus;
@property(nonatomic) int originalParticipantType; // @synthesize originalParticipantType=_originalParticipantType;
- (BOOL)isEquivalentToParticipant:(id)arg1;

@end
