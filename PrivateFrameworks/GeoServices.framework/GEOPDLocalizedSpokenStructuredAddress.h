//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOStructuredAddress, NSString;

@interface GEOPDLocalizedSpokenStructuredAddress : PBCodable <NSCopying>
{
    NSString *_locale;
    GEOStructuredAddress *_spokenStructuredAddress;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasSpokenStructuredAddress;
@property(retain, nonatomic) GEOStructuredAddress *spokenStructuredAddress; // @synthesize spokenStructuredAddress=_spokenStructuredAddress;
@property(readonly, nonatomic) BOOL hasLocale;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
