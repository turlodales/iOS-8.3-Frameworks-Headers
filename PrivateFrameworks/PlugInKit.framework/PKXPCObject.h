//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSObject<OS_xpc_object>;

@interface PKXPCObject : NSObject <NSSecureCoding>
{
    NSObject<OS_xpc_object> *_object;
}

+ (id)object:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id)initWithObject:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSObject<OS_xpc_object> *object; // @synthesize object=_object;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

