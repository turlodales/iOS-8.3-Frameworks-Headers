//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLResourceSPI.h"
#import "MTLTexture.h"

@protocol MTLTextureSPI <MTLTexture, MTLResourceSPI>
@property(readonly) BOOL isDrawable;
@property(readonly) unsigned int numFaces;
@property(readonly) unsigned int rotation;
@property(readonly) unsigned int iosurfacePlane;
@property(readonly) struct __IOSurface *iosurface;
@end

