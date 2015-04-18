//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSCalendarDate, NSMutableArray, NSString, NSURL;

@interface YTVideo : NSObject
{
    NSString *_id;
    NSString *_title;
    NSString *_author;
    NSCalendarDate *_dateUpdated;
    NSCalendarDate *_dateAdded;
    NSArray *_videoReferences;
    NSString *_notificationName;
    NSString *_videoDescription;
    NSString *_category;
    NSArray *_tags;
    unsigned int _numberOfViews;
    unsigned int _numLikes;
    unsigned int _numDislikes;
    int _batchStatus;
    NSURL *_infoURL;
    NSURL *_thumbnailURL;
    NSURL *_commentsURL;
    NSURL *_editURL;
    NSURL *_ratingsURL;
    NSURL *_captionsURL;
    NSString *_shortID;
    NSString *_unplayable;
    BOOL _isProcessing;
    NSMutableArray *_captions;
    int _privacy;
    NSString *_restrictedCountries;
    CDUnknownBlockType _thumbnailProxyBlock;
}

+ (void)playbackDidStall;
+ (void)reset3GPlaybackStallCount;
+ (id)videoIsProcessingError;
+ (id)videoNotFoundError;
+ (id)unsupportedVideoError;
+ (void)disableNotifications;
+ (void)enableNotifications;
- (id)infoURL;
- (BOOL)ownVideo;
- (id)privacyString;
- (id)captions;
- (BOOL)isProcessing;
- (BOOL)isBookmarked;
- (id)anyVideoReference;
- (void)loadThumbnailWithCallback:(CDUnknownBlockType)arg1;
- (struct CGImage *)pluginThumbnailLoadIfAbsent:(BOOL)arg1;
- (struct CGImage *)largeThumbnailLoadIfAbsent:(BOOL)arg1;
- (struct CGImage *)roundedThumbnailLoadIfAbsent:(BOOL)arg1;
- (int)batchStatus;
- (id)restrictedCountries;
- (unsigned int)numberOfViews;
- (id)ratingPercentageString;
- (BOOL)positiveRating;
- (unsigned int)numDislikes;
- (unsigned int)numLikes;
- (id)unplayable;
- (id)tagsString;
- (id)videoDescription;
- (id)captionsURL;
- (id)ratingsURL;
- (id)editURL;
- (id)commentsURL;
- (id)dateAddedString;
- (id)bestVideoReference;
- (id)videoReferenceForProfile:(int)arg1;
- (void)_thumbnailDidLoad;
- (void)carrierBundleDidChangeNotification:(id)arg1;
- (void)_postVideoDidChange;
- (struct CGImage *)thumbnailLoadIfAbsent:(BOOL)arg1;
- (id)initWithID:(id)arg1 title:(id)arg2 dateUpdated:(id)arg3 dateAdded:(id)arg4 videoReferences:(id)arg5 infoURL:(id)arg6 videoDescription:(id)arg7 category:(id)arg8 tags:(id)arg9 author:(id)arg10 thumbnailURL:(id)arg11 numLikes:(unsigned int)arg12 numDislikes:(unsigned int)arg13 numberOfViews:(unsigned int)arg14 batchStatus:(int)arg15 commentsURL:(id)arg16 editURL:(id)arg17 ratingsURL:(id)arg18 captionsURL:(id)arg19 shortID:(id)arg20 unplayable:(id)arg21 isProcessing:(BOOL)arg22 privacy:(int)arg23 restrictedCountries:(id)arg24;
- (id)initFromArchiveDictionary:(id)arg1;
- (id)shortID;
- (BOOL)allowsHighQuality3GPlayback;
- (id)dateAdded;
- (id)dateUpdated;
- (double)age;
- (id)thumbnailURL;
- (BOOL)isPlayable;
- (id)author;
- (id)tags;
- (id)title;
- (id)category;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)archiveDictionary;
- (id)ID;

@end

