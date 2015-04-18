//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOLeaveNowFeedbackCollection : PBCodable <NSCopying>
{
    CDStruct_612aec5b _sessionID;
    double _currentTimestamp;
    double _eventTimestamp;
    double _travelDuration;
    int _actionType;
    int _alertType;
    int _travelState;
    struct {
        unsigned int sessionID:1;
        unsigned int currentTimestamp:1;
        unsigned int eventTimestamp:1;
        unsigned int travelDuration:1;
        unsigned int actionType:1;
        unsigned int alertType:1;
        unsigned int travelState:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) double travelDuration; // @synthesize travelDuration=_travelDuration;
@property(nonatomic) double currentTimestamp; // @synthesize currentTimestamp=_currentTimestamp;
@property(nonatomic) double eventTimestamp; // @synthesize eventTimestamp=_eventTimestamp;
@property(nonatomic) int travelState; // @synthesize travelState=_travelState;
@property(nonatomic) int alertType; // @synthesize alertType=_alertType;
@property(nonatomic) BOOL hasTravelDuration;
@property(nonatomic) BOOL hasCurrentTimestamp;
@property(nonatomic) BOOL hasEventTimestamp;
@property(nonatomic) BOOL hasTravelState;
@property(nonatomic) BOOL hasAlertType;
@property(nonatomic) BOOL hasActionType;
@property(nonatomic) BOOL hasSessionID;
@property(nonatomic) CDStruct_612aec5b sessionID; // @synthesize sessionID=_sessionID;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

