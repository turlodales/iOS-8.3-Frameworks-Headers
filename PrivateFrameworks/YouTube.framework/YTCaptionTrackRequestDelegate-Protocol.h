//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, UIMovieClosedCaptionData, YTCaptionTrackRequest;

@protocol YTCaptionTrackRequestDelegate
- (void)captionTrack:(YTCaptionTrackRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)captionTrack:(YTCaptionTrackRequest *)arg1 receivedTrackData:(UIMovieClosedCaptionData *)arg2;
@end

