//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSAttributedString, NSString, NSURL;

@interface VSSpeechRequest : NSObject <NSSecureCoding>
{
    BOOL _useCustomVoice;
    BOOL _maintainsInput;
    BOOL _audioSessionIDIsValid;
    NSString *_text;
    NSAttributedString *_attributedText;
    NSString *_languageCode;
    NSString *_voiceName;
    int _footprint;
    int _gender;
    NSURL *_outputPath;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    CDUnknownBlockType _stopHandler;
    CDUnknownBlockType _pauseHandler;
    double _rate;
    double _pitch;
    double _volume;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(copy, nonatomic) CDUnknownBlockType pauseHandler; // @synthesize pauseHandler=_pauseHandler;
@property(copy, nonatomic) CDUnknownBlockType stopHandler; // @synthesize stopHandler=_stopHandler;
@property(nonatomic) unsigned int audioQueueFlags; // @synthesize audioQueueFlags=_audioQueueFlags;
@property(nonatomic) BOOL audioSessionIDIsValid; // @synthesize audioSessionIDIsValid=_audioSessionIDIsValid;
@property(nonatomic) BOOL maintainsInput; // @synthesize maintainsInput=_maintainsInput;
@property(copy, nonatomic) NSURL *outputPath; // @synthesize outputPath=_outputPath;
@property(nonatomic) BOOL useCustomVoice; // @synthesize useCustomVoice=_useCustomVoice;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) int footprint; // @synthesize footprint=_footprint;
@property(nonatomic) double rate; // @synthesize rate=_rate;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(copy, nonatomic) NSString *voiceName; // @synthesize voiceName=_voiceName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) int gender; // @synthesize gender=_gender;

@end

