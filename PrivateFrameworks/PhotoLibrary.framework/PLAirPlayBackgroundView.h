//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibrary/PLPlayingExternallyBackgroundView.h>

@class NSString;

@interface PLAirPlayBackgroundView : PLPlayingExternallyBackgroundView
{
    NSString *_deviceName;
}

- (void)setIsMovie:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1 deviceName:(id)arg2;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void)dealloc;

@end

