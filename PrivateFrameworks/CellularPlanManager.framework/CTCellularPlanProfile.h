//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSString;

@interface CTCellularPlanProfile : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isSelected;
    BOOL _isBootstrap;
    NSData *_profileId;
    NSString *_iccid;
}

+ (BOOL)supportsSecureCoding;
- (id)initWithProfileId:(id)arg1 iccid:(id)arg2 selected:(BOOL)arg3 bootstrap:(BOOL)arg4;
@property(nonatomic) BOOL isBootstrap; // @synthesize isBootstrap=_isBootstrap;
@property(copy, nonatomic) NSString *iccid; // @synthesize iccid=_iccid;
@property(copy, nonatomic) NSData *profileId; // @synthesize profileId=_profileId;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

