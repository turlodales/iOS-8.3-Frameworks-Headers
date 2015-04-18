//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOGeocodeProvider.h>

#import "PBRequesterDelegate.h"

@class GEORequester, NSString;

@interface GEOVoltaireGeocodeProvider : GEOGeocodeProvider <PBRequesterDelegate>
{
    GEORequester *_requester;
    BOOL _isForwardGeocodeRequest;
    BOOL _isBatchRequest;
    BOOL _cancelled;
}

+ (id)batchReverseGeocoderURL;
+ (id)reverseGeocoderURL;
+ (id)forwardGeocoderURL;
+ (id)providerName;
- (void)_singleRequesterDidFinish:(id)arg1;
- (void)_batchRequesterDidFinish:(id)arg1;
- (id)newRequester:(id)arg1;
- (void)batchReverseGeocode:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)reverseGeocode:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)forwardGeocode:(id)arg1 success:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)dealloc;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

