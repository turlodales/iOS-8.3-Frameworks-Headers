//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NEConfigurationValidating.h"
#import "NEPrettyDescription.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface NEVPNIKEv2SecurityAssociationParameters : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    int _encryptionAlgorithm;
    int _integrityAlgorithm;
    int _diffieHellmanGroup;
    int _lifetimeMinutes;
}

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithIndent:(int)arg1;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
@property int lifetimeMinutes; // @synthesize lifetimeMinutes=_lifetimeMinutes;
@property int diffieHellmanGroup; // @synthesize diffieHellmanGroup=_diffieHellmanGroup;
@property int integrityAlgorithm; // @synthesize integrityAlgorithm=_integrityAlgorithm;
@property int encryptionAlgorithm; // @synthesize encryptionAlgorithm=_encryptionAlgorithm;
- (id)copyDictionary;

@end

