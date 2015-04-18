//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, NSMutableArray, NSString;

@interface GEOPDClientMetadata : PBCodable <NSCopying>
{
    NSString *_deviceCountryCode;
    NSString *_deviceDisplayLocale;
    NSMutableArray *_deviceInstalledKeyboardLocales;
    NSString *_deviceKeyboardLocale;
    GEOLatLng *_deviceLocation;
    NSString *_deviceSpokenLocale;
    int _resultListAttributionSupport;
    unsigned int _timeSinceMapEnteredForeground;
    struct {
        unsigned int resultListAttributionSupport:1;
        unsigned int timeSinceMapEnteredForeground:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) int resultListAttributionSupport; // @synthesize resultListAttributionSupport=_resultListAttributionSupport;
@property(retain, nonatomic) NSMutableArray *deviceInstalledKeyboardLocales; // @synthesize deviceInstalledKeyboardLocales=_deviceInstalledKeyboardLocales;
@property(retain, nonatomic) NSString *deviceSpokenLocale; // @synthesize deviceSpokenLocale=_deviceSpokenLocale;
@property(retain, nonatomic) NSString *deviceKeyboardLocale; // @synthesize deviceKeyboardLocale=_deviceKeyboardLocale;
@property(retain, nonatomic) NSString *deviceDisplayLocale; // @synthesize deviceDisplayLocale=_deviceDisplayLocale;
@property(nonatomic) BOOL hasResultListAttributionSupport;
@property(readonly, nonatomic) BOOL hasDeviceSpokenLocale;
@property(readonly, nonatomic) BOOL hasDeviceKeyboardLocale;
@property(readonly, nonatomic) BOOL hasDeviceDisplayLocale;
- (id)deviceInstalledKeyboardLocaleAtIndex:(unsigned int)arg1;
- (void)clearDeviceInstalledKeyboardLocales;
- (unsigned int)deviceInstalledKeyboardLocalesCount;
- (void)addDeviceInstalledKeyboardLocale:(id)arg1;
@property(nonatomic) unsigned int timeSinceMapEnteredForeground; // @synthesize timeSinceMapEnteredForeground=_timeSinceMapEnteredForeground;
@property(retain, nonatomic) GEOLatLng *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
@property(retain, nonatomic) NSString *deviceCountryCode; // @synthesize deviceCountryCode=_deviceCountryCode;
@property(nonatomic) BOOL hasTimeSinceMapEnteredForeground;
@property(readonly, nonatomic) BOOL hasDeviceLocation;
@property(readonly, nonatomic) BOOL hasDeviceCountryCode;
- (id)initWithTraits:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
