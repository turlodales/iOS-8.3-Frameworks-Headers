//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPDateStatistics, CKDPIdentifier, CKDPProtectionInfo, CKDPRecordIdentifier, CKDPRecordType, CKDPShareIdentifier, NSMutableArray, NSString;

@interface CKDPRecord : PBCodable <NSCopying>
{
    NSMutableArray *_conflictLoserEtags;
    CKDPIdentifier *_createdBy;
    NSString *_etag;
    NSMutableArray *_fields;
    CKDPIdentifier *_modifiedBy;
    NSString *_modifiedByDevice;
    int _permission;
    NSMutableArray *_pluginFields;
    CKDPProtectionInfo *_protectionInfo;
    CKDPRecordIdentifier *_recordIdentifier;
    CKDPShareIdentifier *_shareId;
    CKDPDateStatistics *_timeStatistics;
    CKDPRecordType *_type;
    struct {
        unsigned int permission:1;
    } _has;
}

+ (id)recordFromData:(id)arg1;
- (id)dataRepresentation;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasType;
@property(retain, nonatomic) CKDPIdentifier *modifiedBy; // @synthesize modifiedBy=_modifiedBy;
@property(retain, nonatomic) NSMutableArray *fields; // @synthesize fields=_fields;
@property(retain, nonatomic) CKDPIdentifier *createdBy; // @synthesize createdBy=_createdBy;
@property(nonatomic) BOOL hasPermission;
@property(nonatomic) int permission; // @synthesize permission=_permission;
@property(readonly, nonatomic) BOOL hasModifiedByDevice;
@property(readonly, nonatomic) BOOL hasModifiedBy;
@property(readonly, nonatomic) BOOL hasCreatedBy;
- (id)pluginFieldsAtIndex:(unsigned int)arg1;
- (void)clearPluginFields;
- (unsigned int)pluginFieldsCount;
@property(retain, nonatomic) NSString *modifiedByDevice; // @synthesize modifiedByDevice=_modifiedByDevice;
- (id)conflictLoserEtagsAtIndex:(unsigned int)arg1;
- (void)clearConflictLoserEtags;
- (unsigned int)conflictLoserEtagsCount;
- (id)fieldsAtIndex:(unsigned int)arg1;
- (unsigned int)fieldsCount;
- (void)addPluginFields:(id)arg1;
- (void)addConflictLoserEtags:(id)arg1;
@property(retain, nonatomic) CKDPDateStatistics *timeStatistics; // @synthesize timeStatistics=_timeStatistics;
@property(readonly, nonatomic) BOOL hasTimeStatistics;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
@property(readonly, nonatomic) BOOL hasShareId;
- (id)fieldForKey:(id)arg1;
- (id)fieldData;
- (void)_inflateFieldsFromData:(id)arg1;
- (void)clearFields;
- (void)addFields:(id)arg1;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
@property(readonly, nonatomic) BOOL hasRecordIdentifier;
@property(retain, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(readonly, nonatomic) BOOL hasProtectionInfo;
@property(retain, nonatomic) NSMutableArray *pluginFields; // @synthesize pluginFields=_pluginFields;
@property(retain, nonatomic) NSMutableArray *conflictLoserEtags; // @synthesize conflictLoserEtags=_conflictLoserEtags;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(readonly, nonatomic) BOOL hasEtag;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) CKDPRecordType *type; // @synthesize type=_type;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

