//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

@class EKPersistentSource, NSSet, NSString, NSURL;

@interface EKPersistentCalendar : EKPersistentObject
{
}

+ (id)calendar;
+ (id)relations;
+ (id)defaultPropertiesToLoad;
- (void)setUUID:(id)arg1;
- (BOOL)validate:(id *)arg1;
@property(copy, nonatomic) NSString *sharedOwnerName;
@property(retain, nonatomic) EKPersistentSource *source;
@property(readonly, nonatomic) NSString *UUID;
@property(copy, nonatomic) NSString *title;
- (id)description;
- (id)init;
@property(nonatomic, getter=isHidden) BOOL hidden;
- (int)entityType;
@property(nonatomic, getter=isPublished) BOOL published;
@property(copy, nonatomic) NSString *publishedURL;
@property(nonatomic) BOOL isMarkedImmutableSharees;
@property(nonatomic) BOOL isMarkedUndeletable;
@property(nonatomic) BOOL isFamilyCalendar;
@property(nonatomic) BOOL isHolidaySubscribedCalendar;
@property(nonatomic) BOOL isFacebookBirthdayCalendar;
@property(nonatomic) BOOL schedulingProhibited;
@property(nonatomic, getter=isSharingInvitation) BOOL sharingInvitation;
@property(nonatomic, getter=isImmutable) BOOL immutable;
@property(nonatomic, getter=isSubscribed) BOOL subscribed;
@property(nonatomic) BOOL prohibitsScheduling;
@property(nonatomic) BOOL allowsContentModifications;
@property(nonatomic, getter=isColorDisplayOnly) BOOL colorDisplayOnly;
- (void)setDigest:(id)arg1;
- (id)digest;
@property(copy, nonatomic) NSString *pushKey;
@property(copy, nonatomic) NSString *subcalAccountID;
@property(copy, nonatomic) NSString *bulkRequests;
@property(copy, nonatomic) NSString *ownerIdentityLastName;
@property(copy, nonatomic) NSString *ownerIdentityFirstName;
@property(copy, nonatomic) NSURL *ownerIdentityAddress;
@property(copy, nonatomic) NSString *ownerIdentityEmail;
@property(copy, nonatomic) NSString *ownerIdentityDisplayName;
@property(copy, nonatomic) NSString *selfIdentityLastName;
@property(copy, nonatomic) NSString *selfIdentityFirstName;
@property(copy, nonatomic) NSURL *selfIdentityAddress;
@property(copy, nonatomic) NSString *selfIdentityEmail;
@property(copy, nonatomic) NSString *selfIdentityDisplayName;
- (void)removeSharee:(id)arg1;
- (void)addSharee:(id)arg1;
@property(copy, nonatomic) NSSet *sharees;
@property(copy, nonatomic) NSString *externalModificationTag;
@property(nonatomic) BOOL isIgnoringSharedCalendarNotifications;
@property(nonatomic) BOOL isIgnoringEventAlerts;
@property(nonatomic) BOOL canBeShared;
@property(nonatomic) BOOL canBePublished;
- (void)setIsPublished:(BOOL)arg1;
@property(copy, nonatomic) NSURL *sharedOwnerAddress;
@property(nonatomic) int sharingInvitationResponse;
@property(nonatomic) unsigned int invitationStatus;
@property(nonatomic) int sharingStatus;
@property(readonly, nonatomic) BOOL isDefaultCalendarForSource;
@property(nonatomic) int displayOrder;
@property(copy, nonatomic) NSString *colorString;
@property(copy, nonatomic) NSString *symbolicColorName;
@property(nonatomic) unsigned int allowedEntityTypes;
@property(copy, nonatomic) NSString *externalID;

@end

