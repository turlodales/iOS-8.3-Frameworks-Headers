//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNEventHandler.h>

@class SCNNode, UIGestureRecognizer;

@interface SCNCameraControlEventHandler : SCNEventHandler
{
    id _dReserved;
    SCNNode *_freeViewCameraNode;
    struct CGPoint _initialPoint;
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]), name: _initialMatrix
    float _initialZoom;
    float _savedZfar;
    float _savedZnear;
    float _originalFovX;
    float _originalFovY;
    float _originalOrthoScale;
    float _zoomFactor;
    // Error parsing type: , name: _clickOrigin
    int _lastGestureFingerCount;
    BOOL _isDraggingWithOneFinger;
    float _roll;
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]), name: _initialMatrixForRoll
    UIGestureRecognizer *_pressGesture;
    UIGestureRecognizer *_tapGesture;
    UIGestureRecognizer *_pinchGesture;
    UIGestureRecognizer *_panGesture;
    UIGestureRecognizer *_rotateGesture;
    int _stickyAxis;
    // Error parsing type: {C3DSphere="vector"}, name: _viewedObjectSphere
    unsigned int _hasCheckedIfViewingAnObject:1;
    unsigned int _isViewingAnObject:1;
    unsigned int _isViewedObjectSphereComputed:1;
    unsigned int _automaticCameraTarget:1;
    unsigned int _inertia:1;
    unsigned int _alternateMode:1;
    unsigned int _upDirIsSet:1;
    unsigned int _gimbalLockMode:1;
    unsigned int _inertiaRunning:1;
    int _mode;
    struct SCNVector3 _gimbalLockVector;
    // Error parsing type: , name: _upDir
    struct SCNVector3 _cameraTarget;
    float _friction;
    struct CGPoint _totalDragWithInertia;
    struct CGPoint _inertiaVelocity;
    double _lastSimulationTime;
}

- (void)viewWillDraw;
@property float friction;
- (id)gestureRecognizers;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)rotateWithVector:(int)arg1 mode: /* Error: Ran out of types for this method. */;
- (void)translateByX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (float)zoomFactor;
- (void)zoomBy:(float)arg1;
- (void)rotateOf:(float)arg1;
- (BOOL)isViewingAnObject;
@property int stickyAxis;
@property struct SCNVector3 cameraTarget;
@property BOOL automaticCameraTarget;
@property struct SCNVector3 gimbalLockVector;
@property BOOL gimbalLockMode;
@property BOOL enableInertia;
- (void)_translateTo:(struct CGPoint)arg1;
- (void)endDraggingWithVelocity:(struct CGPoint)arg1;
- (void)setZoomFactor:(float)arg1;
- (void)_beginTranslateAtLocation:(struct CGPoint)arg1;
- (void)_startBrowsingIfNeeded:(struct CGPoint)arg1;
- (void)rotateWithGestureRecognizer:(id)arg1;
- (void)panWithGestureRecognizer:(id)arg1;
- (void)pinchWithGestureRecognizer:(id)arg1;
- (void)beginGesture:(id)arg1;
- (void)_handleDoubleTap:(id)arg1;
- (void)_handleRotation:(id)arg1;
- (void)_handlePress:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)_handlePinch:(id)arg1;
-     // Error parsing type: 8@0:4, name: frontVector
- (BOOL)computeBoundingSphereOmittingFloorsForNode:(struct __C3DNode *)arg1 sphere:(struct C3DSphere *)arg2;
- (void)_onInertiaTimer;
- (void)_rotateWithDrag:(struct CGPoint)arg1 mode:(int)arg2 stickyAxis:(int)arg3;
- (void)_stopInertiaIfNeeded;
- (void)_resetFreeViewCamera;
- (float)_translationCoef;
- (void)zoomBy:(float)arg1 animate:(BOOL)arg2;
- (void)_switchToFreeViewCamera;
- (struct C3DSphere)viewedObjectSphere;
- (void)_installFreeViewCameraIfNeeded;
- (void)_prepareFreeViewCamera;
- (BOOL)_freeCameraActivated;
- (void)updateCameraTargetIfNeeded;
- (BOOL)wantsRedraw;
- (void)cameraDidChange;
- (void)cameraWillChange;
- (void)sceneDidChange;
- (void)sceneWillChange;

@end

