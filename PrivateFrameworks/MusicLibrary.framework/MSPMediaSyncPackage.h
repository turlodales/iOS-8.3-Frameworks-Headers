//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class MSPMediaSyncError, MSPMediaSyncHeader, MSPMediaSyncOperation;

@interface MSPMediaSyncPackage : PBCodable <NSCopying>
{
    MSPMediaSyncError *_error;
    MSPMediaSyncHeader *_header;
    MSPMediaSyncOperation *_syncOperation;
    int _type;
    BOOL _lastPackage;
    struct {
        unsigned int type:1;
        unsigned int lastPackage:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) MSPMediaSyncOperation *syncOperation; // @synthesize syncOperation=_syncOperation;
@property(retain, nonatomic) MSPMediaSyncHeader *header; // @synthesize header=_header;
@property(nonatomic) BOOL lastPackage; // @synthesize lastPackage=_lastPackage;
@property(readonly, nonatomic) BOOL hasError;
@property(readonly, nonatomic) BOOL hasSyncOperation;
@property(readonly, nonatomic) BOOL hasHeader;
@property(nonatomic) BOOL hasLastPackage;
@property(retain, nonatomic) MSPMediaSyncError *error; // @synthesize error=_error;
@property(nonatomic) BOOL hasType;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

