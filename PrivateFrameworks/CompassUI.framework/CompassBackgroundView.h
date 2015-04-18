//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CompassUI/CompassRotatingView.h>

#import "GLKViewDelegate.h"

@class CompassAtlas, CompassShader, EAGLContext, GLKView, NSString;

@interface CompassBackgroundView : CompassRotatingView <GLKViewDelegate>
{
    struct CGPoint _compassCenter;
    float _ticLength;
    BOOL _shownInCompass;
    GLKView *_glView;
    EAGLContext *_context;
    CompassShader *_normalShader;
    CompassShader *_knockoutShader;
    CompassShader *_textureShader;
    CompassShader *_lineShader;
    union _GLKMatrix4 _modelViewMatrix;
    union _GLKMatrix4 _projectionMatrix;
    unsigned int _ticVertexArray;
    unsigned int _ticVertexBuffer;
    unsigned int _ticIndexBuffer;
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
        float _field5;
        float _field6;
        CDStruct_818bb265 _field7;
    } *_ticPoints;
    unsigned int *_ticIndexes;
    unsigned int _labelsVertexArray;
    unsigned int _labelsVertexBuffer;
    unsigned int _labelsIndexBuffer;
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
        CDStruct_818bb265 _field5;
    } *_labelsPoints;
    unsigned int *_labelsIndexes;
    unsigned int _otherLinesVertexArray;
    unsigned int _otherLinesVertexBuffer;
    unsigned int _otherLinesIndexBuffer;
    CompassAtlas *_imageAtlas;
    struct CGPoint _currentOffset;
    float _ticRadius;
    float _bearing;
}

- (void)updateDisplay;
@property(nonatomic) float bearing; // @synthesize bearing=_bearing;
@property(nonatomic) float ticRadius; // @synthesize ticRadius=_ticRadius;
- (BOOL)setCrosshairOffset:(struct CGSize)arg1;
- (void)setCompassHeading:(double)arg1;
- (void)positionLabels;
- (void)generateExtraLines;
- (void)positionLabelNamed:(id)arg1 atDegrees:(int)arg2 fromCenter:(struct CGPoint)arg3 withRadius:(float)arg4 vertexOffset:(unsigned int)arg5 color:(CDStruct_818bb265)arg6;
- (void)renderCrosshairInRect:(struct CGRect)arg1;
- (void)tearDownGL;
- (void)generateNumberAtlas;
- (void)generateCompassPoints;
- (void)setupGL;
@property(readonly, nonatomic) float ticLength; // @synthesize ticLength=_ticLength;
- (id)initWithFrame:(struct CGRect)arg1 forCompass:(BOOL)arg2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

