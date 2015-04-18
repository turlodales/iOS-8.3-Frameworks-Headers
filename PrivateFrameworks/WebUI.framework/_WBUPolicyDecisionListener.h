//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebPolicyDecisionListener.h"

@class NSDictionary, NSString, WebFrame;

@interface _WBUPolicyDecisionListener : NSObject <WebPolicyDecisionListener>
{
    WebFrame *_frame;
    int _navigationType;
    NSDictionary *_formMetadata;
    id <WebPolicyDecisionListener> _originalListener;
}

- (id)initWithFrame:(id)arg1 navigationType:(int)arg2 formMetadata:(id)arg3 originalListener:(id)arg4;
- (void).cxx_destruct;
- (void)use;
- (void)ignore;
- (void)download;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

