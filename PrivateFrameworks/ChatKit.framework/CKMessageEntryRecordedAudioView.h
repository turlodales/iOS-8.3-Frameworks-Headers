//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CKAudioControllerDelegate.h"

@class CKAudioController, CKAudioMediaObject, CKAudioProgressView, NSString, UIImage, UIImageView, UILabel;

@interface CKMessageEntryRecordedAudioView : UIView <CKAudioControllerDelegate>
{
    CKAudioMediaObject *_audioMediaObject;
    id <CKMessageEntryRecordedAudioViewDelegate> _delegate;
    UIImageView *_balloonImageView;
    CKAudioController *_audioController;
    CKAudioProgressView *_progressView;
    UILabel *_timeLabel;
    UIImage *_waveformImage;
    UIImageView *_waveformImageView;
    NSString *_timeFormat;
    double _time;
}

@property(readonly, nonatomic) BOOL isPlaying;
@property(retain, nonatomic) UIImage *waveformImage; // @synthesize waveformImage=_waveformImage;
@property(copy, nonatomic) NSString *timeFormat; // @synthesize timeFormat=_timeFormat;
- (void)updateProgress;
- (void)updateTimeString;
- (void)updateTimeFormat;
@property(retain, nonatomic) CKAudioMediaObject *audioMediaObject; // @synthesize audioMediaObject=_audioMediaObject;
- (void)tapRecognized:(id)arg1;
- (void)audioControllerDidStop:(id)arg1;
- (void)audioControllerDidPause:(id)arg1;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
@property(retain, nonatomic) CKAudioController *audioController; // @synthesize audioController=_audioController;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *balloonImageView; // @synthesize balloonImageView=_balloonImageView;
@property(retain, nonatomic) UIImageView *waveformImageView; // @synthesize waveformImageView=_waveformImageView;
- (id)initWithPlaybackButton:(BOOL)arg1;
- (void)pause;
@property(retain, nonatomic) CKAudioProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) id <CKMessageEntryRecordedAudioViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)play;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

