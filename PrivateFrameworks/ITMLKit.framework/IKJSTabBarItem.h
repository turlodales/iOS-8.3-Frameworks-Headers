//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "IKJSTabBarItem.h"

@class IKJSNavigationDocument, IKJSTabBar, JSManagedValue, NSString;

@interface IKJSTabBarItem : IKJSObject <IKJSTabBarItem>
{
    IKJSNavigationDocument *_navigationDocument;
    NSString *_identifier;
    NSString *_rootURL;
    id <IKAppNavigationController> _navigationControllerDelegate;
    JSManagedValue *_managedNavigationDocument;
    JSManagedValue *_managedSelf;
    IKJSTabBar *_owner;
}

@property(nonatomic) __weak IKJSTabBar *owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) IKJSNavigationDocument *navigationDocument; // @synthesize navigationDocument=_navigationDocument;
@property(readonly, nonatomic) __weak id <IKAppNavigationController> navigationControllerDelegate; // @synthesize navigationControllerDelegate=_navigationControllerDelegate;
@property(retain, nonatomic) JSManagedValue *managedSelf; // @synthesize managedSelf=_managedSelf;
@property(retain, nonatomic) JSManagedValue *managedNavigationDocument; // @synthesize managedNavigationDocument=_managedNavigationDocument;
- (id)initWithAppContext:(id)arg1 identifier:(id)arg2 rootURL:(id)arg3 navigationController:(id)arg4 owner:(id)arg5;
@property(readonly, nonatomic) NSString *rootURL; // @synthesize rootURL=_rootURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)dealloc;

@end

