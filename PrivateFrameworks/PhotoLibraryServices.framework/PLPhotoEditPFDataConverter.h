//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLPhotoEditDataExporter.h"
#import "PLPhotoEditDataImporter.h"

@class NSString;

@interface PLPhotoEditPFDataConverter : NSObject <PLPhotoEditDataImporter, PLPhotoEditDataExporter>
{
}

+ (id)_settingsDictionaryForLegacyAutoEnhanceFilters:(id)arg1;
+ (id)_supportedAdjustments;
+ (BOOL)validateAdjustmentsEnvelope:(id)arg1;
+ (id)_filtersForLegacyAutoEnhanceSettingsDictionary:(id)arg1;
+ (int)_supportLevelForSettings:(id)arg1 typesForKnownKeys:(id)arg2 requiredKeys:(id)arg3;
+ (BOOL)_validateValueTypesForKeys:(id)arg1 requiredKeys:(id)arg2 inDictionary:(id)arg3 error:(id *)arg4;
+ (id)_knownFormatVersions;
+ (id)formatIdentifier;
+ (id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3;
+ (BOOL)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2;
+ (id)formatVersion;
+ (BOOL)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 intoModel:(id)arg4 baseOrientation:(int)arg5;
+ (id)dataFromPhotoEditModel:(id)arg1 imageWidth:(unsigned int)arg2 imageHeight:(unsigned int)arg3 exifOrientation:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

