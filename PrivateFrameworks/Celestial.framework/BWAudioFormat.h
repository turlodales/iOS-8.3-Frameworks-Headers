//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Celestial/BWFormat.h>

@class NSDictionary;

@interface BWAudioFormat : BWFormat
{
    struct opaqueCMFormatDescription *_audioFormatDescription;
    NSDictionary *_avAudioSettings;
}

+ (id)formatForAVAudioSettings:(id)arg1 inputFormat:(id)arg2;
+ (id)formatWithAudioFormatDescription:(struct opaqueCMFormatDescription *)arg1;
+ (void)initialize;
- (unsigned long)mediaType;
@property(readonly) NSDictionary *audioCompressionSBPOptions;
@property(readonly) struct opaqueCMFormatDescription *audioFormatDescription;
- (id)_initForAVAudioSettings:(id)arg1 inputFormat:(id)arg2;
- (id)_initWithAudioFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (id)debugDescription;
- (id)description;
- (void)dealloc;
- (struct opaqueCMFormatDescription *)formatDescription;

@end

