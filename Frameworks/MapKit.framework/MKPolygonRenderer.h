//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKOverlayPathRenderer.h>

@class MKPolygon;

@interface MKPolygonRenderer : MKOverlayPathRenderer
{
}

- (void)createPath;
@property(readonly, nonatomic) MKPolygon *polygon;
- (id)initWithPolygon:(id)arg1;
- (void)fillPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;

@end

