//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKGame.h"

@interface GKGame (UI)
+ (void)preloadIconsForGames:(id)arg1 style:(int)arg2 handler:(CDUnknownBlockType)arg3;
+ (struct CGSize)serverImageSizeForIconStyle:(int)arg1;
- (void)removeGameWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)cachedIconForStyle:(int)arg1;
- (id)iconForStyle:(int)arg1;
- (void)uninstallApplicationWithBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_imageURLForIconStyle:(int)arg1;
- (id)macBrushForIconStyle:(int)arg1;
- (id)imageSourceForiOSIconStyle:(int)arg1;
- (id)loadIconForStyle:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)URLStringForImageWithShineIfNeeded;
- (id)imageSourceForIconStyle:(int)arg1;
@end

