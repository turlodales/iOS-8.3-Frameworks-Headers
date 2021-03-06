//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSApplicationWorkspaceObserverProtocol.h"

@class NSDictionary, NSSet, NSString;

@interface PKDiscoveryDriver : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSDictionary *_attributes;
    unsigned int _flags;
    CDUnknownBlockType _report;
    NSSet *_lastResults;
    int _annotationNotifyToken;
}

- (id)initWithAttributes:(id)arg1 flags:(unsigned int)arg2 report:(CDUnknownBlockType)arg3;
@property int annotationNotifyToken; // @synthesize annotationNotifyToken=_annotationNotifyToken;
- (void)performWithPreviousResults:(id)arg1 forceNotify:(BOOL)arg2;
@property(retain) NSSet *lastResults; // @synthesize lastResults=_lastResults;
@property(copy) CDUnknownBlockType report; // @synthesize report=_report;
@property unsigned int flags; // @synthesize flags=_flags;
@property(retain) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (void)pluginsDidUninstall:(id)arg1;
- (void)pluginsDidInstall:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

