//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Radio/RadioTrack.h>

@class NSURL;

@interface RadioStreamTrack : RadioTrack
{
}

@property(readonly, retain, nonatomic) NSURL *certificateURL;
@property(readonly, retain, nonatomic) NSURL *keyServerURL;
@property(readonly, nonatomic, getter=isSkipable) BOOL skipable;
@property(readonly, retain, nonatomic) NSURL *contentURL;

@end

