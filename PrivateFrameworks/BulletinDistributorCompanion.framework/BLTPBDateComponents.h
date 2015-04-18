//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface BLTPBDateComponents : PBCodable <NSCopying>
{
    int _hour;
    int _minute;
    int _second;
    int _weekday;
    struct {
        unsigned int hour:1;
        unsigned int minute:1;
        unsigned int second:1;
        unsigned int weekday:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) BOOL hasWeekday;
@property(nonatomic) BOOL hasMinute;
@property(nonatomic) BOOL hasHour;
@property(nonatomic) BOOL hasSecond;
@property(nonatomic) int weekday; // @synthesize weekday=_weekday;
@property(nonatomic) int second; // @synthesize second=_second;
@property(nonatomic) int minute; // @synthesize minute=_minute;
- (id)dictionaryRepresentation;
@property(nonatomic) int hour; // @synthesize hour=_hour;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

