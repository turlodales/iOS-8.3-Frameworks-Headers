//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSMutableArray, NSString, NSURL, SLFacebookAlbum, SLFacebookPlace, SLFacebookPostPrivacySetting;

@interface SLFacebookPost : NSObject <NSSecureCoding>
{
    NSMutableArray *_imageData;
    NSMutableArray *_imageAssetURLs;
    NSMutableArray *_videoData;
    NSMutableArray *_videoAssetURLs;
    NSString *_maskedApplicationID;
    NSString *_text;
    NSString *_videoExportPreset;
    NSURL *_link;
    SLFacebookPlace *_place;
    SLFacebookAlbum *_album;
    SLFacebookPostPrivacySetting *_privacySetting;
    NSArray *_taggedUserIDs;
}

+ (BOOL)supportsSecureCoding;
@property(retain) SLFacebookAlbum *album; // @synthesize album=_album;
@property(retain) NSArray *imageData; // @dynamic imageData;
@property(retain) SLFacebookPlace *place; // @synthesize place=_place;
@property(retain) NSURL *link; // @synthesize link=_link;
- (void).cxx_destruct;
@property(retain) NSString *text; // @synthesize text=_text;
- (id)copy;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain) NSArray *taggedUserIDs; // @synthesize taggedUserIDs=_taggedUserIDs;
@property(retain) NSString *videoExportPreset; // @synthesize videoExportPreset=_videoExportPreset;
@property(retain) NSString *maskedApplicationID; // @synthesize maskedApplicationID=_maskedApplicationID;
@property(retain) NSArray *videoAssetURLs; // @dynamic videoAssetURLs;
@property(retain) NSArray *videoData; // @dynamic videoData;
@property(retain) NSArray *imageAssetURLs; // @dynamic imageAssetURLs;
- (id)_encodableObjectProperties;
- (void)addVideoAssetURL:(id)arg1;
- (void)addVideoData:(id)arg1;
- (void)addImageAssetURL:(id)arg1;
- (void)addImageData:(id)arg1;
@property(retain) SLFacebookPostPrivacySetting *privacySetting; // @synthesize privacySetting=_privacySetting;

@end

