//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOServiceRequester.h>

@interface GEORPProblemOptInRequester : GEOServiceRequester
{
}

+ (unsigned int)_urlType;
+ (id)sharedInstance;
- (id)_validateResponse:(id)arg1;
- (void)startWithRequest:(id)arg1 traits:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cancelRequest:(id)arg1;

@end

