//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class CKAccountInfo, CKContainerID, NSString;

@interface CKContainerSetupInfo : NSObject <NSSecureCoding>
{
    CKContainerID *_containerID;
    NSString *_sourceApplicationBundleIdentifier;
    CKAccountInfo *_accountInfoOverride;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) CKAccountInfo *accountInfoOverride; // @synthesize accountInfoOverride=_accountInfoOverride;
@property(retain, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(retain, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

