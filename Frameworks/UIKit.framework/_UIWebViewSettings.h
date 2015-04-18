//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface _UIWebViewSettings : NSObject <NSCopying>
{
    BOOL _allowsInlineMediaPlayback;
    BOOL _mediaPlaybackRequiresUserAction;
    BOOL _mediaPlaybackAllowsAirPlay;
    BOOL _suppressesIncrementalRendering;
    unsigned int _dataDetectorTypes;
    NSString *_customUserAgent;
}

+ (id)defaultSettings;
- (id)_encodeAsDictionary;
- (id)_initWithDictionary:(id)arg1;
@property(copy, nonatomic) NSString *customUserAgent; // @synthesize customUserAgent=_customUserAgent;
@property(nonatomic) BOOL mediaPlaybackRequiresUserAction; // @synthesize mediaPlaybackRequiresUserAction=_mediaPlaybackRequiresUserAction;
@property(nonatomic) BOOL allowsInlineMediaPlayback; // @synthesize allowsInlineMediaPlayback=_allowsInlineMediaPlayback;
@property(nonatomic) BOOL suppressesIncrementalRendering; // @synthesize suppressesIncrementalRendering=_suppressesIncrementalRendering;
@property(nonatomic) BOOL mediaPlaybackAllowsAirPlay; // @synthesize mediaPlaybackAllowsAirPlay=_mediaPlaybackAllowsAirPlay;
@property(nonatomic) unsigned int dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)dealloc;

@end

