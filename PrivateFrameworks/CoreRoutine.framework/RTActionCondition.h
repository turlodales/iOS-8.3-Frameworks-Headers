//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSString, RTLocationOfInterest;

@interface RTActionCondition : NSObject <NSSecureCoding>
{
    RTLocationOfInterest *_locationOfInterest;
    int _locationOfInterestState;
    NSDate *_date;
    NSString *_depiction;
}

+ (id)locationOfInterestStateToString:(int)arg1;
+ (BOOL)supportsSecureCoding;
- (id)initWithLoi:(id)arg1 loiState:(int)arg2 date:(id)arg3 depiction:(id)arg4;
@property(readonly, nonatomic) NSString *depiction; // @synthesize depiction=_depiction;
@property(readonly, nonatomic) int locationOfInterestState; // @synthesize locationOfInterestState=_locationOfInterestState;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) RTLocationOfInterest *locationOfInterest; // @synthesize locationOfInterest=_locationOfInterest;

@end

