//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Radio/RadioRequest.h>

@class NSArray, NSData, SSURLConnectionRequest;

@interface RadioFetchMetadataRequest : RadioRequest
{
    SSURLConnectionRequest *_request;
    NSArray *_itemIDs;
    NSData *_timedMetadata;
    NSArray *_tracks;
}

@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(copy, nonatomic) NSData *timedMetadata; // @synthesize timedMetadata=_timedMetadata;
- (id)_itemIDsToRadioTracks;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSArray *itemIDs; // @synthesize itemIDs=_itemIDs;
- (void).cxx_destruct;
- (void)cancel;

@end

