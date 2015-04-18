//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface ATStatus : NSObject <NSSecureCoding>
{
    BOOL _wirelessSync;
    BOOL _automaticSync;
    NSString *_libraryID;
    NSString *_dataClass;
    unsigned int _syncStage;
    unsigned int _syncType;
    float _progress;
    NSString *_localizedDescription;
    unsigned int _completedAssetCount;
    unsigned int _totalAssetCount;
    unsigned int _totalItemCount;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned int syncType; // @synthesize syncType=_syncType;
@property(copy, nonatomic) NSString *libraryID; // @synthesize libraryID=_libraryID;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(nonatomic) unsigned int totalItemCount; // @synthesize totalItemCount=_totalItemCount;
@property(nonatomic) unsigned int completedAssetCount; // @synthesize completedAssetCount=_completedAssetCount;
@property(nonatomic, getter=isWirelessSync) BOOL wirelessSync; // @synthesize wirelessSync=_wirelessSync;
@property(nonatomic, getter=isAutomaticSync) BOOL automaticSync; // @synthesize automaticSync=_automaticSync;
@property(nonatomic) unsigned int totalAssetCount; // @synthesize totalAssetCount=_totalAssetCount;
@property(nonatomic) unsigned int syncStage; // @synthesize syncStage=_syncStage;
@property(copy, nonatomic) NSString *dataClass; // @synthesize dataClass=_dataClass;
- (id)initWithLibraryID:(id)arg1 dataClass:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

