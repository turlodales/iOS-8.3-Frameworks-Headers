//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPUBorderView, NSCache;

@interface MPUBorderDrawingCache : NSObject
{
    MPUBorderView *_borderView;
    NSCache *_images;
    float _displayScale;
}

- (id)_borderView;
@property(nonatomic) float displayScale; // @synthesize displayScale=_displayScale;
- (void)_applicationDidReceiveMemoryWarning:(id)arg1;
- (id)imageForBorderConfiguration:(id)arg1;
- (void).cxx_destruct;
- (void)_invalidate;
- (id)init;
- (void)dealloc;

@end

