//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DiagnosticExtensions/DEAttachmentItem.h>

@class UIImage;

@interface DEAttachmentVideo : DEAttachmentItem
{
    UIImage *_thumbnail;
}

+ (id)newAttachmentVideoWithAssetURL:(id)arg1 andThumbnail:(id)arg2;
+ (id)newAttachmentVideoWithURL:(id)arg1;
- (id)generateThumbnailFromURL:(id)arg1;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void).cxx_destruct;

@end

