//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSDate, NSString;

@interface CPLRecordChange : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _alterationTypeFlags;
    BOOL _shouldFilterDefaultValuesForNewProperties;
    BOOL _isSparseFullChange;
    BOOL _inTrash;
    BOOL _inExpunged;
    NSString *_identifier;
    NSDate *_recordModificationDate;
    unsigned int _changeType;
    NSDate *_dateDeleted;
    NSString *_realIdentifier;
    NSData *_recordChangeData;
}

+ (int)maxInlineDataSize;
+ (id)newRecordWithIdentifier:(id)arg1;
+ (id)newChangeWithType:(unsigned int)arg1;
+ (id)_descriptionForChangeType:(unsigned int)arg1 isSparseFullChange:(BOOL)arg2;
+ (id)newRecord;
+ (id)descriptionForChangeType:(unsigned int)arg1;
+ (id)deleteChangeWithIdentifier:(id)arg1;
+ (id)newChangeWithIdentifier:(id)arg1 changeType:(unsigned int)arg2;
+ (Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2;
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (unsigned long long)totalResourceSize;
- (unsigned long long)realResourceSize;
- (BOOL)supportsResources;
@property(copy, nonatomic) NSDate *dateDeleted; // @synthesize dateDeleted=_dateDeleted;
@property(nonatomic) BOOL inTrash; // @synthesize inTrash=_inTrash;
@property(copy, nonatomic) NSDate *recordModificationDate; // @synthesize recordModificationDate=_recordModificationDate;
- (id)resourceForType:(unsigned int)arg1;
@property(nonatomic) BOOL inExpunged; // @synthesize inExpunged=_inExpunged;
@property(nonatomic) unsigned int changeType; // @synthesize changeType=_changeType;
- (BOOL)hasChangeType:(unsigned int)arg1;
- (BOOL)isFullRecord;
- (id)resources;
- (void)setResources:(id)arg1;
- (id)propertiesDescription;
- (BOOL)addExpandedChangesToChangeBatch:(id)arg1 andApplyToClientCache:(id)arg2 error:(id *)arg3;
- (BOOL)_addRealChangeToChangeBatch:(id)arg1 withStoredRecord:(id)arg2 andApplyToClientCache:(id)arg3 error:(id *)arg4;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(BOOL)arg2 usingClientCache:(id)arg3;
@property(copy, nonatomic) NSData *recordChangeData; // @synthesize recordChangeData=_recordChangeData;
@property(copy, nonatomic) NSString *realIdentifier; // @synthesize realIdentifier=_realIdentifier;
- (void)setAlterationTypeFlags:(unsigned int)arg1;
- (unsigned int)alterationTypeFlags;
- (BOOL)isSparseFullChange;
- (BOOL)shouldFilterDefaultValuesForNewProperties;
- (void)setShouldFilterDefaultValuesForNewProperties:(BOOL)arg1;
- (BOOL)shouldApplyPropertiesWithSelector:(SEL)arg1;
- (id)mergeRecordChangeWithNewRecordChange:(id)arg1;
- (id)realRecordChangeFromRecordChange:(id)arg1 newRecord:(id *)arg2;
- (BOOL)decodePropertiesFromObject:(id)arg1;
- (BOOL)encodePropertiesInObject:(id)arg1;
- (id)realRecordChangeFromRecordChange:(id)arg1 newRecord:(id *)arg2 updatedProperties:(id *)arg3;
- (BOOL)applyChange:(id)arg1 copyPropertiesToFinalChange:(id)arg2 forChangeType:(unsigned int)arg3 updatedProperty:(id *)arg4;
- (void)setSecondaryIdentifier:(id)arg1;
- (id)secondaryIdentifier;
- (void)markAsSparseFullChange;
- (void)setRelatedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)identifiersForMapping;
- (id)proposedLocalIdentifier;
- (id)proposedCloudIdentifierWithError:(id *)arg1;
- (id)storedClassNameForCPLArchiver:(id)arg1;
- (id)cplFullDescription;
- (void)awakeFromStorage;
- (void)prepareForStorage;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)propertiesForChangeType:(unsigned int)arg1;
- (id)resourcesDescription;
- (int)dequeueOrder;
- (BOOL)isDelete;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

