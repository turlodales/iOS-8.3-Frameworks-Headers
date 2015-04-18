//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Celestial/FigCaptureRecordingSettings.h>

#import "NSCoding.h"

@class NSDictionary;

@interface FigCaptureMovieFileRecordingSettings : FigCaptureRecordingSettings <NSCoding>
{
    NSDictionary *_videoSettings;
    NSDictionary *_audioSettings;
    BOOL _videoMirrored;
    int _videoOrientation;
    CDStruct_1b6d18a9 _movieFragmentInterval;
    NSDictionary *_movieLevelMetadata;
    BOOL _sendThumbnailIOSurface;
}

@property(nonatomic) BOOL videoMirrored; // @synthesize videoMirrored=_videoMirrored;
@property(nonatomic) BOOL sendThumbnailIOSurface; // @synthesize sendThumbnailIOSurface=_sendThumbnailIOSurface;
@property(copy, nonatomic) NSDictionary *movieLevelMetadata; // @synthesize movieLevelMetadata=_movieLevelMetadata;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(copy, nonatomic) NSDictionary *videoSettings; // @synthesize videoSettings=_videoSettings;
@property(copy, nonatomic) NSDictionary *audioSettings; // @synthesize audioSettings=_audioSettings;
@property(nonatomic) int videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(nonatomic) CDStruct_1b6d18a9 movieFragmentInterval; // @synthesize movieFragmentInterval=_movieFragmentInterval;

@end
