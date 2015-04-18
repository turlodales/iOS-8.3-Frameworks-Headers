//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface GSDocumentIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char volumeUUID[16];
    unsigned long long documentID;
    int deviceID;
}

+ (BOOL)supportsSecureCoding;
- (id)initWithDocumentIdentifier:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1 forItemAtURL:(id)arg2 allocateIfNone:(BOOL)arg3 error:(id *)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

