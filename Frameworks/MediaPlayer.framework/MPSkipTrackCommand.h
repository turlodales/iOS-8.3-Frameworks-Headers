//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommand.h>

@interface MPSkipTrackCommand : MPRemoteCommand
{
    BOOL _adPreventsDisplay;
    CDStruct_e0453228 _skipLimit;
}

@property(nonatomic) BOOL adPreventsDisplay; // @synthesize adPreventsDisplay=_adPreventsDisplay;
@property(nonatomic) CDStruct_e0453228 skipLimit; // @synthesize skipLimit=_skipLimit;
- (id)_mediaRemoteCommandInfoOptions;

@end

