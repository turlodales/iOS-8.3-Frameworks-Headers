//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFSiriRequest.h"

@class NSData;

@interface STShowMapPointRequest : AFSiriRequest
{
    NSData *_placeData;
    BOOL _isCurrentLocation;
}

+ (BOOL)supportsSecureCoding;
- (id)mapPointData;
- (id)_initWithPlaceData:(id)arg1;
@property(nonatomic) BOOL isCurrentLocation; // @synthesize isCurrentLocation=_isCurrentLocation;
- (id)createResponse;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

