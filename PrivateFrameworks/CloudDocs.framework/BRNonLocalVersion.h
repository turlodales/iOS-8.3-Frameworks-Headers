//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GSPermanentStorage, NSDate, NSString, NSURL;

@interface BRNonLocalVersion : NSObject
{
    NSURL *_url;
    NSString *_displayName;
    NSString *_etag;
    unsigned long long _size;
    NSDate *_modificationDate;
    NSString *_lastEditorDeviceName;
    NSString *_lastEditorFormattedName;
    BOOL _hasThumbnail;
    GSPermanentStorage *_versionsStore;
    long long _sandboxHandle;
    NSURL *_physicalURL;
}

+ (id)listVersionsOfDocumentAtURL:(id)arg1;
@property(readonly, nonatomic) NSString *lastEditorDeviceName; // @synthesize lastEditorDeviceName=_lastEditorDeviceName;
@property(nonatomic) BOOL hasThumbnail; // @synthesize hasThumbnail=_hasThumbnail;
@property(readonly, nonatomic) NSString *etag; // @synthesize etag=_etag;
- (id)initWithURL:(id)arg1 physicalURL:(id)arg2 size:(id)arg3 extension:(id)arg4 etag:(id)arg5 hasThumbnail:(BOOL)arg6 displayName:(id)arg7 lastEditorDeviceName:(id)arg8 lastEditorFormattedName:(id)arg9 modificationDate:(id)arg10 versionsStore:(id)arg11;
@property(readonly, nonatomic) BOOL isLatestVersion;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)description;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
- (void)dealloc;
@property(readonly, nonatomic) id <NSCopying><NSSecureCoding> persistentIdentifier;
@property(readonly, nonatomic) NSString *lastEditorFormattedName; // @synthesize lastEditorFormattedName=_lastEditorFormattedName;

@end

