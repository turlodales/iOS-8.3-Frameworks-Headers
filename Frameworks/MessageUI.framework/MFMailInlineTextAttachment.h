//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFMessageTextAttachment.h"

@class MFMimeTextAttachment, NSData;

@interface MFMailInlineTextAttachment : MFMessageTextAttachment
{
    MFMimeTextAttachment *_original;
    NSData *_iconImageData;
    struct CGSize _cachedImageSize;
    unsigned int _hasBeenDownloaded:1;
    BOOL _displayableAsIcon;
}

+ (unsigned int)precedenceLevel;
- (struct CGSize)imageDimensions;
- (BOOL)shouldDownloadAttachmentOnDisplay;
- (BOOL)hasBeenDownloaded;
- (void)dealloc;
- (BOOL)needsRedownload;
- (void)setNeedsRedownload:(BOOL)arg1;
- (void)setDisplayableInsidePlugin:(BOOL)arg1;
- (void)setupForComposition;
- (void)_setImageDimensions:(struct CGSize)arg1;
- (float)constrainedWidth;
- (id)mimeTextAttachment;
- (id)textEncodingGuess;
- (id)initWithMimeTextAttachment:(id)arg1 andMessageBody:(id)arg2;
- (id)persistentUniqueIdentifier;
- (void)setFileWrapper:(id)arg1;
@property BOOL displayableAsIcon; // @synthesize displayableAsIcon=_displayableAsIcon;
- (void)inlineDisplayData:(id *)arg1 mimeType:(id *)arg2;
- (void)_cacheImageSizeIfNecessary;
- (id)initWithWrapper:(id)arg1;
- (BOOL)isDisplayableInsidePlugin;
- (void)setDisplayableInline:(BOOL)arg1;
- (unsigned int)approximateSize;
- (BOOL)isDisplayableInline;
- (void)download;

@end

