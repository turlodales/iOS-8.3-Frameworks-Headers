//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKModelObject.h>

@class VKMapRasterizer;

@interface VKMapRasterizerRoot : VKModelObject
{
    struct ClearItem _clearItem;
    VKMapRasterizer *_mapRasterizer;
}

- (id)initWithMapRasterizer:(id)arg1;
- (void)stylesheetDidChange;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void).cxx_destruct;
- (id).cxx_construct;
@property(nonatomic) Matrix_5173352a backgroundColor;

@end

