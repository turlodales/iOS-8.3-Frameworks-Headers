//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, NSTimer, NSXPCConnection, NSXPCListener, PKInAppPaymentService, PKPaymentAuthorizationControllerExportedObject, PKPaymentRequest;

@interface PKPaymentAuthorizationController : NSObject <NSXPCListenerDelegate>
{
    BOOL _didPresent;
    PKInAppPaymentService *_inAppPaymentService;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSTimer *_timer;
    PKPaymentRequest *_paymentRequest;
    NSString *_hostIdentifier;
    PKPaymentAuthorizationControllerExportedObject *_exportedObject;
    CDUnknownBlockType _presentationCompletionBlock;
    double _connectionTimeout;
}

+ (BOOL)canMakePayments;
+ (BOOL)canMakePaymentsUsingNetworks:(id)arg1;
@property(nonatomic) BOOL didPresent; // @synthesize didPresent=_didPresent;
@property(retain, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
- (id)initWithPaymentRequest:(id)arg1;
- (id)_remoteObjectProxy;
@property(nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic, setter=_setPrivateDelegate:) id <PKPaymentAuthorizationControllerPrivateDelegate> _privateDelegate;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) PKPaymentAuthorizationControllerExportedObject *exportedObject; // @synthesize exportedObject=_exportedObject;
@property(nonatomic) id <PKPaymentAuthorizationControllerDelegate> delegate;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType presentationCompletionBlock; // @synthesize presentationCompletionBlock=_presentationCompletionBlock;
@property(retain, nonatomic) NSString *hostIdentifier; // @synthesize hostIdentifier=_hostIdentifier;
@property(nonatomic) double connectionTimeout; // @synthesize connectionTimeout=_connectionTimeout;
@property(retain, nonatomic) PKInAppPaymentService *inAppPaymentService; // @synthesize inAppPaymentService=_inAppPaymentService;
- (void)_invokeCallbackWithSuccess:(BOOL)arg1;
- (void)_viewServiceTimerFired:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

