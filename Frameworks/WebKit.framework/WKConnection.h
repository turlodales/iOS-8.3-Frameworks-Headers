//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WKObject.h"

@class NSString;

@interface WKConnection : NSObject <WKObject>
{
    struct WeakObjCPtr<id<WKConnectionDelegate>> _delegate;
}

- (void)sendMessageWithName:(id)arg1 body:(id)arg2;
@property(readonly) struct Object *_apiObject;
- (struct WebConnection *)_connection;
- (void).cxx_destruct;
- (id).cxx_construct;
@property id <WKConnectionDelegate> delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

