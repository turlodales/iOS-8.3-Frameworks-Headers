//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface CLVehicleHeadingInternal : NSObject <NSCopying>
{
    struct {
        double trueHeading;
        double timestamp;
    } fHeading;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithClientVehicleHeading:(CDStruct_c3b9c2ee)arg1;

@end

