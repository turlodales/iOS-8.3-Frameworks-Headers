//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLGeocoderInternal;

@interface CLGeocoder : NSObject
{
    CLGeocoderInternal *_internal;
}

- (id)init;
- (void)dealloc;
- (void)_notifyResult:(id)arg1;
- (void)_notifyError:(id)arg1;
- (void)geocodeAddressDictionary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reverseGeocodeLocation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isGeocoding) BOOL geocoding;
- (void)cancelGeocode;
- (void)geocodeAddressString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_notifyPartialResult:(id)arg1;
- (void)reverseGeocodeLocation:(id)arg1 localResultsOnly:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_notifyResult:(id)arg1 error:(id)arg2;
- (void)_notifyCancel;
- (void)geocodeAddressString:(id)arg1 inRegion:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_ticket:(id)arg1 didReturnError:(id)arg2;
- (void)_ensureMainThreadExecutionContextForBlock:(CDUnknownBlockType)arg1;
- (void)_ticket:(id)arg1 didReturnGeoMapItems:(id)arg2;
- (void)_ticket:(id)arg1 didReturnError:(id)arg2 partialResultForLocation:(id)arg3;
- (void)_notifyNoResult;
- (void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 localResultsOnly:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

