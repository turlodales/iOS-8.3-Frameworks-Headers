//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface AXRemoteElement : NSObject
{
    NSString *_uuid;
    int _remotePid;
    unsigned int _contextId;
    BOOL _onClientSide;
    id <AXRemoteElementChildrenDelegate> _remoteChildrenDelegate;
    NSMutableSet *_allChildren;
    BOOL _deniesDirectAppConnection;
    unsigned int _machPort;
    id _accessibilityContainer;
}

+ (BOOL)registerRemoteElement:(id)arg1;
+ (id)remoteElementForContextId:(unsigned int)arg1;
+ (id)remoteElementForBlock:(CDUnknownBlockType)arg1;
+ (void)initialize;
@property(readonly, nonatomic) unsigned long long uuidHash;
- (void)platformCleanup;
- (void)_accessibilityIncreaseSelection:(id)arg1;
@property(nonatomic) BOOL onClientSide; // @synthesize onClientSide=_onClientSide;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) BOOL deniesDirectAppConnection; // @synthesize deniesDirectAppConnection=_deniesDirectAppConnection;
@property(nonatomic) id <AXRemoteElementChildrenDelegate> remoteChildrenDelegate; // @synthesize remoteChildrenDelegate=_remoteChildrenDelegate;
- (id)_remoteElementWithAttribute:(int)arg1;
@property(nonatomic) int remotePid; // @synthesize remotePid=_remotePid;
@property(nonatomic) unsigned int contextId; // @synthesize contextId=_contextId;
- (void)unregister;
@property(nonatomic) id accessibilityContainer; // @synthesize accessibilityContainer=_accessibilityContainer;
- (struct CGRect)accessibilityFrame;
- (id)description;
- (void)dealloc;
@property(nonatomic) unsigned int machPort; // @synthesize machPort=_machPort;
- (id)initWithUUID:(id)arg1 andRemotePid:(int)arg2 andContextId:(unsigned int)arg3;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilitySortedElementsWithin;
- (id)accessibilityContainerElements;
- (id)_accessibilityLastElement;
- (id)_accessibilityFirstElement;
- (id)_accessibilityResponderElement;

@end

