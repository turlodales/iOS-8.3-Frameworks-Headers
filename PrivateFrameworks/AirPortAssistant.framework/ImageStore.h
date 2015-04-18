//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ImageStore : NSObject
{
}

+ (struct CGImage *)cgImageFromImage:(id)arg1 forContentsScale:(float)arg2;
+ (id)imageForBaseStationWithProductID:(unsigned int)arg1 subProductID:(unsigned int)arg2 deviceKind:(int)arg3 small:(BOOL)arg4 cropped:(BOOL)arg5 threeDee:(BOOL)arg6;
+ (id)insetImageForInformationalDiagram:(unsigned int)arg1;
+ (id)imageForInformationalDiagramNamed:(id)arg1 small:(BOOL)arg2;
+ (float)informationDiagramBaseImageRightEdgeInset:(unsigned int)arg1 small:(BOOL)arg2;
+ (float)informationDiagramBaseImageCenterOffset:(unsigned int)arg1 small:(BOOL)arg2;
+ (id)imageForInformationalDiagram:(unsigned int)arg1;
+ (id)sharedImageStore;
+ (id)kitImageOfType:(int)arg1;
+ (id)imageNameForProductID:(unsigned int)arg1 subProductID:(unsigned int)arg2 deviceKind:(int)arg3 small:(BOOL)arg4 cropped:(BOOL)arg5 threeDee:(BOOL)arg6;
+ (id)insetImageForInformationalDiagram:(unsigned int)arg1 deviceKind:(int)arg2 audioImage:(BOOL)arg3 small:(BOOL)arg4;
+ (id)imageNameForInformationalDiagram:(unsigned int)arg1 subProductID:(unsigned int)arg2 deviceKind:(int)arg3 audioImage:(BOOL)arg4 small:(BOOL)arg5 useDataCache:(char *)arg6;
+ (id)imageForInformationalDiagram:(unsigned int)arg1 subProductID:(unsigned int)arg2 deviceKind:(int)arg3 audioImage:(BOOL)arg4 small:(BOOL)arg5;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2 ofType:(id)arg3;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageNamed:(id)arg1;

@end

