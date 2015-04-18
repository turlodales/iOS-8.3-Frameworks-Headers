//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSSet;

@interface UIUserNotificationSettings : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _types;
    NSSet *_categories;
}

+ (id)settingsForRegisteredSettings:(id)arg1 requestedSettings:(id)arg2;
+ (id)settingsForUserNotificationTypes:(unsigned int)arg1 userNotificationActionSettings:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)settingsForTypes:(unsigned int)arg1 categories:(id)arg2;
- (id)userNotificationActionSettings;
- (unsigned int)allowedUserNotificationTypes;
- (BOOL)mayPresentUserNotificationOfType:(unsigned int)arg1;
@property(readonly, copy, nonatomic) NSSet *categories; // @synthesize categories=_categories;
- (id)initWithTypes:(unsigned int)arg1 categories:(id)arg2;
- (id)initWithUserNotificationTypes:(unsigned int)arg1 userNotificationActionSettings:(id)arg2;
- (id)validatedSettings;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned int types; // @synthesize types=_types;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
