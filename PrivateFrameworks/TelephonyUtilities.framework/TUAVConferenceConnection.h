//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TUAVConferenceConnection : NSObject
{
    BOOL _host;
    BOOL _receivedDidStart;
    NSString *_identifier;
    CDUnknownBlockType _didStartHandler;
    CDUnknownBlockType _didStopHandler;
}

+ (id)conferenceConnectionWithIdentifier:(id)arg1 host:(BOOL)arg2;
@property(copy, nonatomic) CDUnknownBlockType didStopHandler; // @synthesize didStopHandler=_didStopHandler;
- (void)invokeDidStopIfNecessary:(BOOL)arg1 error:(id)arg2;
@property(nonatomic) BOOL receivedDidStart; // @synthesize receivedDidStart=_receivedDidStart;
- (void)invokeDidStartIfNecessary:(BOOL)arg1 error:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType didStartHandler; // @synthesize didStartHandler=_didStartHandler;
@property(nonatomic, getter=isHost) BOOL host; // @synthesize host=_host;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (void)dealloc;

@end

