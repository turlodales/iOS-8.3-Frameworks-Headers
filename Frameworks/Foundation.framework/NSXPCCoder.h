//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSCoder.h>

@interface NSXPCCoder : NSCoder
{
    id <NSObject> _userInfo;
    id _reserved1;
}

- (BOOL)requiresSecureCoding;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s *)arg1 forKey:(id)arg2;
- (id)decodeXPCObjectForKey:(id)arg1;
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
@property(retain) id <NSObject> userInfo; // @synthesize userInfo=_userInfo;
- (id)init;
- (void)dealloc;

@end

