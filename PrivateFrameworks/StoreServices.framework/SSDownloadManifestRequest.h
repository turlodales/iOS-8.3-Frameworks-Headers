//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreServices/SSRequest.h>

#import "SSXPCCoding.h"

@class NSString, NSURLRequest;

@interface SSDownloadManifestRequest : SSRequest <SSXPCCoding>
{
    int _manifestFormat;
    BOOL _shouldHideUserPrompts;
    NSURLRequest *_urlRequest;
}

@property int manifestFormat;
@property BOOL shouldHideUserPrompts;
- (void)startWithManifestResponseBlock:(CDUnknownBlockType)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)start;
- (id)init;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1;
@property(readonly) NSURLRequest *URLRequest;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <SSDownloadManifestRequestDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

