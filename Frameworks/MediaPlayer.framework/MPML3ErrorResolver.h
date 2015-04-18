//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPAVErrorResolver.h>

#import "SSRequestDelegate.h"

@class MPMediaItem, NSError, NSString, SSKeybagRequest;

@interface MPML3ErrorResolver : MPAVErrorResolver <SSRequestDelegate>
{
    MPMediaItem *_mediaItem;
    SSKeybagRequest *_request;
    NSError *_error;
}

@property(retain, nonatomic) SSKeybagRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (id)initWithMediaItem:(id)arg1;
- (void)resolveError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
