//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class SYPeer;

@interface SYClock : PBCodable <NSCopying>
{
    unsigned long long _version;
    SYPeer *_peer;
}

+ (void)initialize;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)increaseBy:(unsigned long long)arg1;
- (id)_myDescription;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)increment;
@property(retain, nonatomic) SYPeer *peer; // @synthesize peer=_peer;

@end

