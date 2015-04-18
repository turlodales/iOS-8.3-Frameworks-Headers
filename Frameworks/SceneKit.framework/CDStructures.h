//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct C3DColor4 {
    union {
        float rgba[4];
        struct {
            float r;
            float g;
            float b;
            float a;
        } ;
    } ;
};

struct CGPath;

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct InplaceSolverIslandCallback;

struct SCNCAction {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    float _field8;
    float _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    int _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
};

struct SCNCActionCustom {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    float _field8;
    float _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    int _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    CDUnknownBlockType _field20;
};

struct SCNCActionFade {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    float _field8;
    float _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    int _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
    float _field21;
    float _field22;
    char _field23;
};

struct SCNCActionGroup {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    float _field8;
    float _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    int _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    struct list<SCNCAction *, std::__1::allocator<SCNCAction *>> _field20;
};

struct SCNCActionMove {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    float _field8;
    float _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    int _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
    char _field21;
    char _field22;
};

struct SCNCActionRepeat {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    float _field8;
    float _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    int _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    struct SCNCAction *_field20;
    unsigned int _field21;
    unsigned int _field22;
    char _field23;
};

struct SCNCActionRotate {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    float _field8;
    float _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    int _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
    struct __C3DQuaternion _field21;
    struct __C3DQuaternion _field22;
    char _field23;
    char _field24;
    char _field25;
    char _field26;
};

struct SCNCActionScale {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    float _field8;
    float _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    int _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
    float _field21;
    float _field22;
    float _field23;
    float _field24;
    char _field25;
    char _field26;
};

struct SCNCActionSequence {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    float _field8;
    float _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    int _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    struct vector<SCNCAction *, std::__1::allocator<SCNCAction *>> _field20;
    unsigned long _field21;
};

struct SCNCActionWait {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    CDUnknownBlockType _field3;
    id _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    float _field8;
    float _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
    CDUnknownBlockType _field13;
    struct __CFString *_field14;
    int _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
};

struct SCNMatrix4 {
    float m11;
    float m12;
    float m13;
    float m14;
    float m21;
    float m22;
    float m23;
    float m24;
    float m31;
    float m32;
    float m33;
    float m34;
    float m41;
    float m42;
    float m43;
    float m44;
};

struct SCNVector3 {
    float x;
    float y;
    float z;
};

struct SCNVector4 {
    float x;
    float y;
    float z;
    float w;
};

struct UIBezierPath {
    Class _field1;
    struct CGPath *_field2;
    float *_field3;
    unsigned int _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    int _field9;
    int _field10;
    char _field11;
    struct CGPath *_field12;
    char _field13;
};

struct UIImage {
    Class _field1;
    void *_field2;
    float _field3;
    struct {
        unsigned int :1;
        unsigned int :3;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :2;
        unsigned int :1;
        unsigned int :1;
    } _field4;
};

struct _C3DAnimationPendingEvent;

struct __C3DAnimation {
    struct __C3DEntity _field1;
    double _field2;
    float _field3;
    struct __C3DTimingFunction *_field4;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :2;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    double _field5;
    double _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    CDUnknownFunctionPointerType _field11;
    void *_field12;
    void *_field13;
    void *_field14;
    struct __C3DAnimationEvents *_field15;
    CDStruct_2921ca3b _field16;
};

struct __C3DAnimationChannel {
    struct __CFRuntimeBase _field1;
    struct __C3DAnimation *_field2;
    struct __CFArray *_field3;
    void *_field4;
    struct __C3DModelTarget *_field5;
    struct __CFString *_field6;
};

struct __C3DAnimationManager {
    struct __CFRuntimeBase _field1;
    struct __C3DModelValueStorage *_field2;
    struct __CFDictionary *_field3;
    struct __CFDictionary *_field4;
    struct __CFSet *_field5;
    struct __CFArray *_field6;
    _Bool _field7;
    _Bool _field8;
    _Bool _field9;
    struct _C3DAnimationPendingEvent *_field10;
    struct __C3DAllocator *_field11;
    struct __CFDictionary *_field12;
    struct __CFArray *_field13;
    double _field14;
    double _field15;
    struct _opaque_pthread_mutex_t {
        long _field1;
        char _field2[40];
    } _field16;
    int _field17;
    int _field18;
    int _field19;
    int _field20;
};

struct __C3DConstraint {
    struct __C3DEntity _field1;
    struct __CFString *_field2;
    CDStruct_2921ca3b _field3;
    float _field4;
    _Bool _field5;
};

struct __C3DEffectCommonProfile {
    struct __C3DEffectProfile {
        struct __CFRuntimeBase _field1;
        long _field2;
    } _field1;
    struct __C3DMaterial *_field2;
    long _field3;
    struct __C3DEffectSlot *_field4;
    struct __C3DEffectSlot *_field5;
    struct __C3DEffectSlot *_field6;
    struct __C3DEffectSlot *_field7;
    struct __C3DEffectSlot *_field8;
    struct __C3DEffectSlot *_field9;
    struct __C3DEffectSlot *_field10;
    struct __C3DEffectSlot *_field11;
    float _field12;
    float _field13;
    float _field14;
    float _field15;
    float _field16;
    char _field17;
    int _field18;
    _Bool _field19;
    _Bool _field20;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :10;
    struct __C3DFXProgram *_field21;
};

struct __C3DEffectSlot {
    struct __CFRuntimeBase _field1;
    struct C3DColor4 _field2;
    struct __C3DImage *_field3;
    struct __C3DTextureSampler *_field4;
    struct __C3DTexture *_field5;
    struct __C3DImageProxy *_field6;
    struct __C3DTransforms *_field7;
    long _field8;
    float _field9;
    int _field10;
    void *_field11;
};

struct __C3DEntity {
    struct __CFRuntimeBase _field1;
    void *_field2;
    struct __CFString *_field3;
    struct __CFString *_field4;
    struct __CFDictionary *_field5;
    int _field6;
    int _field7;
};

struct __C3DFloor {
    struct __C3DGeometry _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    int _field6;
    float _field7;
};

struct __C3DFramebuffer;

struct __C3DGenericSource {
    struct __C3DEntity _field1;
    struct __C3DSourceAccessor *_field2;
    union {
        struct __CFData *_field1;
        void *_field2;
    } _field3;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
};

struct __C3DGeometry {
    struct __C3DEntity _field1;
    struct __C3DMesh *_field2;
    struct __C3DMaterial *_field3;
    struct __CFArray *_field4;
    struct __CFArray *_field5;
    struct __CFSet *_field6;
    struct __CFArray *_field7;
    struct __C3DAABB *_field8;
    CDUnknownFunctionPointerType _field9;
    struct {
        _Bool _field1;
        _Bool _field2;
        unsigned short _field3;
        unsigned short _field4;
        float _field5;
        float _field6;
        unsigned char _field7;
        unsigned char _field8;
        unsigned char _field9;
        unsigned char _field10;
        struct __C3DMeshElement *_field11;
        struct __C3DMeshSource *_field12;
        struct __C3DMesh *_field13;
        _Bool _field14;
        _Bool _field15;
        void *_field16;
        void *_field17;
    } _field10;
};

struct __C3DKeyframedAnimation {
    struct __C3DAnimation _field1;
    struct __C3DKeyframeController *_field2;
};

struct __C3DLight {
    struct __C3DEntity _field1;
    struct C3DColor4 _field2;
    long _field3;
    float _field4[6];
    struct C3DColor4 _field5;
    union C3DVector2 _field6;
    float _field7;
    float _field8;
    unsigned int _field9;
    unsigned int _field10;
    _Bool _field11;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    double _field12;
    double _field13;
    double _field14;
    struct __C3DEffectSlot *_field15;
    struct __C3DFXTechnique *_field16;
};

struct __C3DMaterial;

struct __C3DMesh;

struct __C3DMeshSource {
    struct __C3DGenericSource _field1;
    unsigned short _field2;
    unsigned short _field3;
};

struct __C3DMorph {
    struct __C3DEntity _field1;
    long _field2;
    struct __CFArray *_field3;
    struct __C3DGenericSource *_field4;
    unsigned int _field5;
    _Bool _field6;
};

struct __C3DParametricGeometry {
    struct __C3DGeometry _field1;
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
        float _field5;
        float _field6;
        float _field7;
        float _field8;
        float _field9;
        float _field10;
        float _field11;
        float _field12;
        int _field13;
        int _field14;
        int _field15;
        int _field16;
        int _field17;
        int _field18;
        int _field19;
        int _field20;
        int _field21;
        int _field22;
        int _field23;
        unsigned int _field24;
    } _field2;
    struct {
        CDUnknownFunctionPointerType _field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        CDUnknownFunctionPointerType _field4;
        CDUnknownFunctionPointerType _field5;
        CDUnknownFunctionPointerType _field6;
    } _field3;
    struct __CFData *_field4;
};

struct __C3DQuaternion {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct __C3DShapeGeometry {
    struct __C3DGeometry _field1;
    struct {
        char _field1;
        float _field2;
        float _field3;
        float _field4;
        long _field5;
        float _field6;
        struct CGPath *_field7;
        void *_field8;
        struct CGPath *_field9;
        void *_field10;
    } _field2;
    struct __C3DMesh *_field3;
    unsigned char _field4[16];
};

struct __C3DTextGeometry {
    struct __C3DShapeGeometry _field1;
    struct {
        struct __CTFrame *_field1;
        void *_field2;
        void *_field3;
        long _field4;
        long _field5;
        _Bool _field6;
        _Bool _field7;
        _Bool _field8;
        struct CGRect _field9;
    } _field2;
};

struct __C3DTextureSampler {
    struct __CFRuntimeBase _field1;
    long _field2;
    long _field3;
    long _field4;
    long _field5;
    long _field6;
    long _field7;
    struct C3DColor4 _field8;
    float _field9;
    unsigned char _field10;
    long _field11;
    unsigned int _field12;
};

struct __C3DValue {
    struct __CFRuntimeBase _field1;
    short _field2;
    short _field3;
    char *_field4;
    int _field5;
};

struct __CFArray;

struct __CFData;

struct __CFDictionary;

struct __CFRuntimeBase {
    unsigned int _field1;
    unsigned char _field2[4];
};

struct __CFSet;

struct __CFString;

struct __list_node<SCNCAction *, void *>;

struct btActionInterface;

struct btAlignedAllocator<btActionInterface *, 16>;

struct btAlignedAllocator<btCollisionObject *, 16>;

struct btAlignedAllocator<btPersistentManifold *, 16>;

struct btAlignedAllocator<btRigidBody *, 16>;

struct btAlignedAllocator<btTypedConstraint *, 16>;

struct btAlignedAllocator<btVector3, 16>;

struct btAlignedAllocator<btWheelInfo, 16>;

struct btAlignedAllocator<float, 16>;

struct btAlignedObjectArray<btActionInterface *> {
    struct btAlignedAllocator<btActionInterface *, 16> _field1;
    int _field2;
    int _field3;
    struct btActionInterface **_field4;
    _Bool _field5;
};

struct btAlignedObjectArray<btCollisionObject *> {
    struct btAlignedAllocator<btCollisionObject *, 16> _field1;
    int _field2;
    int _field3;
    struct btCollisionObject **_field4;
    _Bool _field5;
};

struct btAlignedObjectArray<btPersistentManifold *> {
    struct btAlignedAllocator<btPersistentManifold *, 16> _field1;
    int _field2;
    int _field3;
    struct btPersistentManifold **_field4;
    _Bool _field5;
};

struct btAlignedObjectArray<btRigidBody *> {
    struct btAlignedAllocator<btRigidBody *, 16> _field1;
    int _field2;
    int _field3;
    struct btRigidBody **_field4;
    _Bool _field5;
};

struct btAlignedObjectArray<btTypedConstraint *> {
    struct btAlignedAllocator<btTypedConstraint *, 16> _field1;
    int _field2;
    int _field3;
    struct btTypedConstraint **_field4;
    _Bool _field5;
};

struct btAlignedObjectArray<btVector3> {
    struct btAlignedAllocator<btVector3, 16> _field1;
    int _field2;
    int _field3;
    struct btVector3 *_field4;
    _Bool _field5;
};

struct btAlignedObjectArray<btWheelInfo> {
    struct btAlignedAllocator<btWheelInfo, 16> _field1;
    int _field2;
    int _field3;
    struct btWheelInfo *_field4;
    _Bool _field5;
};

struct btAlignedObjectArray<float> {
    struct btAlignedAllocator<float, 16> _field1;
    int _field2;
    int _field3;
    float *_field4;
    _Bool _field5;
};

struct btAngularLimit {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    _Bool _field8;
};

struct btBroadphaseInterface;

struct btBroadphaseProxy;

struct btC3DDebugDraw {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    void *_field3;
};

struct btCapsuleShape {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    void *_field3;
    struct btVector3 _field4;
    struct btVector3 _field5;
    float _field6;
    float _field7;
    int _field8;
};

struct btCharacterControllerInterface {
    CDUnknownFunctionPointerType *_field1;
};

struct btCollisionObject;

struct btCollisionShape {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    void *_field3;
};

struct btConstraintSetting {
    float _field1;
    float _field2;
    float _field3;
};

struct btConstraintSolver;

struct btContactSolverInfo {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    int _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    int _field12;
    float _field13;
    float _field14;
    float _field15;
    float _field16;
    int _field17;
    int _field18;
    int _field19;
    float _field20;
    float _field21;
};

struct btDiscreteDynamicsWorld {
    CDUnknownFunctionPointerType *_field1;
    struct btAlignedObjectArray<btCollisionObject *> _field2;
    struct btDispatcher *_field3;
    struct btDispatcherInfo _field4;
    struct btBroadphaseInterface *_field5;
    struct btIDebugDraw *_field6;
    _Bool _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    void *_field10;
    struct btContactSolverInfo _field11;
    float _field12;
    struct btAlignedObjectArray<btTypedConstraint *> _field13;
    struct InplaceSolverIslandCallback *_field14;
    struct btConstraintSolver *_field15;
    struct btSimulationIslandManager *_field16;
    struct btAlignedObjectArray<btTypedConstraint *> _field17;
    struct btAlignedObjectArray<btRigidBody *> _field18;
    struct btVector3 _field19;
    float _field20;
    _Bool _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
    struct btAlignedObjectArray<btActionInterface *> _field25;
    int _field26;
    struct btAlignedObjectArray<btPersistentManifold *> _field27;
    _Bool _field28;
};

struct btDispatcher;

struct btDispatcherInfo {
    float _field1;
    int _field2;
    int _field3;
    float _field4;
    _Bool _field5;
    struct btIDebugDraw *_field6;
    _Bool _field7;
    _Bool _field8;
    _Bool _field9;
    float _field10;
    _Bool _field11;
    float _field12;
};

struct btDynamicsWorld {
    CDUnknownFunctionPointerType *_field1;
    struct btAlignedObjectArray<btCollisionObject *> _field2;
    struct btDispatcher *_field3;
    struct btDispatcherInfo _field4;
    struct btBroadphaseInterface *_field5;
    struct btIDebugDraw *_field6;
    _Bool _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    void *_field10;
    struct btContactSolverInfo _field11;
    float _field12;
};

struct btHashedOverlappingPairCache;

struct btHingeConstraint {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    CDUnion_15924c16 _field4;
    float _field5;
    _Bool _field6;
    _Bool _field7;
    int _field8;
    struct btRigidBody *_field9;
    struct btRigidBody *_field10;
    float _field11;
    float _field12;
    struct btJointFeedback *_field13;
    struct btJacobianEntry _field14[3];
    struct btJacobianEntry _field15[3];
    struct btTransform _field16;
    struct btTransform _field17;
    float _field18;
    float _field19;
    struct btAngularLimit _field20;
    float _field21;
    float _field22;
    float _field23;
    float _field24;
    _Bool _field25;
    _Bool _field26;
    _Bool _field27;
    _Bool _field28;
    _Bool _field29;
    float _field30;
    int _field31;
    float _field32;
    float _field33;
    float _field34;
};

struct btIDebugDraw;

struct btJacobianEntry {
    struct btVector3 _field1;
    struct btVector3 _field2;
    struct btVector3 _field3;
    struct btVector3 _field4;
    struct btVector3 _field5;
    float _field6;
};

struct btJointFeedback;

struct btManifoldPoint {
    struct btVector3 _field1;
    struct btVector3 _field2;
    struct btVector3 _field3;
    struct btVector3 _field4;
    struct btVector3 _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    int _field10;
    int _field11;
    int _field12;
    int _field13;
    void *_field14;
    _Bool _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
    float _field21;
    float _field22;
    int _field23;
    struct btVector3 _field24;
    struct btVector3 _field25;
};

struct btMatrix3x3 {
    struct btVector3 _field1[3];
};

struct btMotionState;

struct btOverlapFilterCallback {
    CDUnknownFunctionPointerType *_field1;
};

struct btOverlappingPairCallback {
    CDUnknownFunctionPointerType *_field1;
};

struct btPairCachingGhostObject {
    CDUnknownFunctionPointerType *_field1;
    struct btTransform _field2;
    struct btTransform _field3;
    struct btVector3 _field4;
    struct btVector3 _field5;
    struct btVector3 _field6;
    int _field7;
    float _field8;
    struct btBroadphaseProxy *_field9;
    struct btCollisionShape *_field10;
    void *_field11;
    struct btCollisionShape *_field12;
    int _field13;
    int _field14;
    int _field15;
    int _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
    int _field21;
    void *_field22;
    float _field23;
    float _field24;
    float _field25;
    int _field26;
    struct btAlignedObjectArray<btCollisionObject *> _field27;
    struct btHashedOverlappingPairCache *_field28;
};

struct btPersistentManifold {
    int _field1;
    struct btManifoldPoint _field2[4];
    struct btCollisionObject *_field3;
    struct btCollisionObject *_field4;
    int _field5;
    float _field6;
    float _field7;
    int _field8;
    int _field9;
    int _field10;
    struct c3dContactCallback *_field11;
};

struct btPoint2PointConstraint {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    CDUnion_15924c16 _field4;
    float _field5;
    _Bool _field6;
    _Bool _field7;
    int _field8;
    struct btRigidBody *_field9;
    struct btRigidBody *_field10;
    float _field11;
    float _field12;
    struct btJointFeedback *_field13;
    struct btJacobianEntry _field14[3];
    struct btVector3 _field15;
    struct btVector3 _field16;
    int _field17;
    float _field18;
    float _field19;
    _Bool _field20;
    struct btConstraintSetting _field21;
};

struct btRaycastVehicle {
    CDUnknownFunctionPointerType *_field1;
    struct btAlignedObjectArray<btVector3> _field2;
    struct btAlignedObjectArray<btVector3> _field3;
    struct btAlignedObjectArray<float> _field4;
    struct btAlignedObjectArray<float> _field5;
    int _field6;
    int _field7;
    float _field8;
    float _field9;
    struct btVehicleRaycaster *_field10;
    float _field11;
    float _field12;
    float _field13;
    struct btRigidBody *_field14;
    int _field15;
    int _field16;
    int _field17;
    struct btAlignedObjectArray<btWheelInfo> _field18;
};

struct btRigidBody {
    CDUnknownFunctionPointerType *_field1;
    struct btTransform _field2;
    struct btTransform _field3;
    struct btVector3 _field4;
    struct btVector3 _field5;
    struct btVector3 _field6;
    int _field7;
    float _field8;
    struct btBroadphaseProxy *_field9;
    struct btCollisionShape *_field10;
    void *_field11;
    struct btCollisionShape *_field12;
    int _field13;
    int _field14;
    int _field15;
    int _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
    int _field21;
    void *_field22;
    float _field23;
    float _field24;
    float _field25;
    int _field26;
    struct btMatrix3x3 _field27;
    struct btVector3 _field28;
    struct btVector3 _field29;
    float _field30;
    struct btVector3 _field31;
    struct btVector3 _field32;
    struct btVector3 _field33;
    struct btVector3 _field34;
    struct btVector3 _field35;
    struct btVector3 _field36;
    float _field37;
    float _field38;
    _Bool _field39;
    float _field40;
    float _field41;
    float _field42;
    float _field43;
    float _field44;
    float _field45;
    float _field46;
    struct btMotionState *_field47;
    struct btAlignedObjectArray<btTypedConstraint *> _field48;
    int _field49;
    int _field50;
    struct btVector3 _field51;
    struct btVector3 _field52;
    struct btVector3 _field53;
    struct btVector3 _field54;
    struct btVector3 _field55;
    struct btVector3 _field56;
    int _field57;
    int _field58;
};

struct btSimulationIslandManager;

struct btSliderConstraint {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    CDUnion_15924c16 _field4;
    float _field5;
    _Bool _field6;
    _Bool _field7;
    int _field8;
    struct btRigidBody *_field9;
    struct btRigidBody *_field10;
    float _field11;
    float _field12;
    struct btJointFeedback *_field13;
    _Bool _field14;
    _Bool _field15;
    struct btTransform _field16;
    struct btTransform _field17;
    _Bool _field18;
    float _field19;
    float _field20;
    float _field21;
    float _field22;
    float _field23;
    float _field24;
    float _field25;
    float _field26;
    float _field27;
    float _field28;
    float _field29;
    float _field30;
    float _field31;
    float _field32;
    float _field33;
    float _field34;
    float _field35;
    float _field36;
    float _field37;
    float _field38;
    float _field39;
    float _field40;
    float _field41;
    float _field42;
    float _field43;
    float _field44;
    float _field45;
    float _field46;
    _Bool _field47;
    _Bool _field48;
    int _field49;
    struct btJacobianEntry _field50[3];
    float _field51[3];
    struct btJacobianEntry _field52[3];
    float _field53;
    struct btTransform _field54;
    struct btTransform _field55;
    struct btVector3 _field56;
    struct btVector3 _field57;
    struct btVector3 _field58;
    struct btVector3 _field59;
    struct btVector3 _field60;
    struct btVector3 _field61;
    struct btVector3 _field62;
    struct btVector3 _field63;
    float _field64;
    float _field65;
    float _field66;
    float _field67;
    _Bool _field68;
    float _field69;
    float _field70;
    float _field71;
    _Bool _field72;
    float _field73;
    float _field74;
    float _field75;
};

struct btTransform {
    struct btMatrix3x3 _field1;
    struct btVector3 _field2;
};

struct btTypedConstraint;

struct btVector3 {
    float _field1[4];
};

struct btVehicleRaycaster {
    CDUnknownFunctionPointerType *_field1;
};

struct btWheelInfo;

struct c3dAether {
    struct vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *>> _fields;
};

struct c3dContactCallback;

struct c3dPhysicsField;

struct list<SCNCAction *, std::__1::allocator<SCNCAction *>> {
    struct __list_node_base<SCNCAction *, void *> {
        struct __list_node<SCNCAction *, void *> *_field1;
        struct __list_node<SCNCAction *, void *> *_field2;
    } _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SCNCAction *, void *>>> {
        unsigned long _field1;
    } _field2;
};

struct vector<SCNCAction *, std::__1::allocator<SCNCAction *>> {
    struct SCNCAction **_field1;
    struct SCNCAction **_field2;
    struct __compressed_pair<SCNCAction **, std::__1::allocator<SCNCAction *>> {
        struct SCNCAction **_field1;
    } _field3;
};

struct vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *>> {
    struct c3dPhysicsField **__begin_;
    struct c3dPhysicsField **__end_;
    struct __compressed_pair<c3dPhysicsField **, std::__1::allocator<c3dPhysicsField *>> {
        struct c3dPhysicsField **__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
} CDStruct_2921ca3b;

typedef struct {
    char _field1;
    float _field2;
    float _field3;
    long _field4;
    float _field5;
    void *_field6;
    void *_field7;
} CDStruct_f4e8402e;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

typedef struct {
    id _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
    struct SCNVector3 _field4;
    struct SCNVector3 _field5;
    float _field6;
} CDStruct_883c2785;

typedef struct {
    struct __C3DFXGLSLProgram *weakProgram;
    struct {
        unsigned int vbo;
        unsigned int ibo;
        unsigned int baseIndex;
        unsigned int baseVertex;
        unsigned int vertexSize;
        unsigned int allocatedVerticesSize;
        unsigned int allocatedIndicesSize;
    } dynamicVBOInfo;
    unsigned int textureID;
    unsigned int vao;
    unsigned int drawMode;
    _Bool orthographic;
    _Bool clearDepthBuffer;
    _Bool enableDepthTest;
    _Bool enableCulling;
    _Bool isDynamic;
} CDStruct_cec9a5d8;

typedef struct {
    struct {
        unsigned int textureID;
        struct CGSize textureSize;
        _Bool isRetina;
    } textureInfo;
    float lineHeight;
    short characterWidth_texture;
    float characterWidth_typography;
    short characterHeight_texture;
    struct *symbolRects;
} CDStruct_f0be1f95;

typedef struct {
    CDStruct_f4e8402e _field1;
    void *_field2;
    void *_field3;
    long _field4;
    long _field5;
    _Bool _field6;
    _Bool _field7;
    struct CGRect _field8;
    float _field9;
} CDStruct_8016081b;

#pragma mark Named Unions

union C3DVector2 {
    float _field1[2];
    CDStruct_b2fbf00d _field2;
    CDStruct_b2fbf00d _field3;
    CDStruct_b2fbf00d _field4;
};

#pragma mark Typedef'd Unions

typedef union {
    int _field1;
    void *_field2;
} CDUnion_15924c16;

