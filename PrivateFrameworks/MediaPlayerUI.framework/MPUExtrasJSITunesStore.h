//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKJSITunesStore.h"

#import "IKJSITunesStore.h"
#import "MPUExtrasJSITunesStore.h"
#import "SKStoreProductViewControllerDelegatePrivate.h"

@class NSDictionary, NSString, UIViewController;

@interface MPUExtrasJSITunesStore : IKJSITunesStore <SKStoreProductViewControllerDelegatePrivate, MPUExtrasJSITunesStore, IKJSITunesStore>
{
    UIViewController *_formPresentationViewController;
}

- (void)loadStoreURL:(id)arg1 playOnLaunch:(id)arg2;
@property(nonatomic) __weak UIViewController *formPresentationViewController; // @synthesize formPresentationViewController=_formPresentationViewController;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, nonatomic) NSString *DSID;
@property(readonly, nonatomic) NSDictionary *accountInfo;
@property(retain, nonatomic) id cookie;
@property(retain, nonatomic) NSString *cookieURL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSString *networkConnectionType;
@property(retain, nonatomic) NSString *storefront;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userAgent;

@end

