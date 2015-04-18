//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UISettings.h"

#import "_UISettingsKeyObserver.h"

@class NSData, NSString, UIImage;

@interface PTSImageSettings : _UISettings <_UISettingsKeyObserver>
{
    BOOL _unarchiving;
    UIImage *_image;
    NSData *_pngData;
    int _imageOrientation;
    float _imageScale;
}

@property float imageScale; // @synthesize imageScale=_imageScale;
@property(retain) NSData *pngData; // @synthesize pngData=_pngData;
- (void)_updateImageProperties;
- (void)_updateImageData;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)archiveValueForKey:(id)arg1;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
@property(retain) UIImage *image; // @synthesize image=_image;
@property int imageOrientation; // @synthesize imageOrientation=_imageOrientation;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

