//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "IKJSPlayer.h"

@class IKDOMElement;

@interface IKJSPlayer : IKJSObject <IKJSPlayer>
{
    id <IKJSPlayerAppBridge> _appBridge;
}

@property(readonly, nonatomic) __weak IKDOMElement *currentAVMediaElement;
@property(nonatomic) __weak id <IKJSPlayerAppBridge> appBridge; // @synthesize appBridge=_appBridge;
- (void).cxx_destruct;

@end

