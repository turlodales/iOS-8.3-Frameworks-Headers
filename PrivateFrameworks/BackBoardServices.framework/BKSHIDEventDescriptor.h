//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface BKSHIDEventDescriptor : NSObject <NSSecureCoding>
{
    unsigned int _hidEventType;
}

+ (id)reusableKeyboardDescriptorWithPage:(unsigned int)arg1 usage:(unsigned int)arg2;
+ (id)reusableVendorDefinedDescriptorWithPage:(unsigned int)arg1 usage:(unsigned int)arg2;
+ (id)reusableDescriptorWithEventType:(unsigned int)arg1;
+ (id)descriptorWithEventType:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;
- (BOOL)describes:(id)arg1;
@property(readonly) unsigned int hidEventType; // @synthesize hidEventType=_hidEventType;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(unsigned int)arg1;

@end

