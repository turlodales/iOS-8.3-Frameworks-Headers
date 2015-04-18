//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VKRasterOverlayTileSource;

@interface VKRasterOverlay : NSObject
{
    id <VKRasterOverlayDelegate> _delegate;
    struct {
        CDStruct_34734122 origin;
        struct {
            double width;
            double height;
        } size;
    } _replaceMapContentInRect;
    unsigned int _level;
    VKRasterOverlayTileSource *_mapModel;
    VKRasterOverlayTileSource *_tileSource;
}

@property(nonatomic) CDStruct_90e2a262 replaceMapContentInRect; // @synthesize replaceMapContentInRect=_replaceMapContentInRect;
- (void)setNeedsDisplayInRect:(const CDStruct_90e2a262 *)arg1 level:(int)arg2;
- (void)drawKey:(const CDStruct_32a7f38a *)arg1 inContext:(struct CGContext *)arg2;
- (BOOL)canDrawKey:(const CDStruct_32a7f38a *)arg1;
@property(nonatomic) VKRasterOverlayTileSource *tileSource; // @synthesize tileSource=_tileSource;
- (id).cxx_construct;
@property(nonatomic) unsigned int level; // @synthesize level=_level;
@property id <VKRasterOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)setNeedsDisplay;

@end
