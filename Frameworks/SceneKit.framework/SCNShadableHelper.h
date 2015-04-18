//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDictionary, SCNProgram;

@interface SCNShadableHelper : NSObject <NSSecureCoding>
{
    NSDictionary *_uniformNameToType;
    id _owner;
    SCNProgram *_program;
    NSDictionary *_shaderModifiers;
    NSDictionary *_symbolToBinder;
    NSDictionary *_symbolToUnbinder;
}

+ (BOOL)supportsSecureCoding;
- (void)finalize;
@property(readonly, nonatomic) id owner;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)isOpaque;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)_unbindValueForSymbol:(id)arg1 atLocation:(unsigned int)arg2 programID:(unsigned int)arg3 node:(id)arg4 renderer:(id)arg5;
- (BOOL)_bindValueForSymbol:(id)arg1 atLocation:(unsigned int)arg2 programID:(unsigned int)arg3 node:(id)arg4 renderer:(id)arg5;
- (void)_didDecodeSCNShadableHelper:(id)arg1;
- (void)_customDecodingOfSCNShadableHelper:(id)arg1;
- (void)_customEncodingOfSCNShadableHelper:(id)arg1;
- (void)_startObservingProgramUniforms:(id)arg1;
- (void)_setC3DProgramDelegate;
- (void)_updateAllC3DProgramInputs;
- (void)_updateC3DProgramInput:(struct __C3DFXGLSLProgram *)arg1 forSymbol:(id)arg2;
- (struct __C3DFXGLSLProgram *)_programFromPassAtIndex:(int)arg1;
- (struct __C3DFXGLSLProfile *)_GLSLProfile;
- (void)_updateC3DProgramInputForSymbol:(id)arg1;
- (void)_setUniform:(id)arg1 withC3DValue:(struct __C3DValue *)arg2;
- (void)_startObservingUniformsOfC3DShaderModifiers:(id)arg1;
- (void)_kvoUpdateUniformNamed:(id)arg1 ofType:(short)arg2 immediate:(BOOL)arg3;
- (void)_startObservingProgram;
- (void)_setC3DProgramAndStartObservingUniforms;
- (void)_programDidChange:(id)arg1;
- (void)commonDestroy;
- (void)_stopObservingProgram;
- (void)_stopObservingUniforms;
- (void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithOwner:(id)arg1;
@property(readonly, nonatomic) NSArray *shaderModifiersUniformNames;
@property(copy, nonatomic) NSDictionary *shaderModifiers;
@property(retain, nonatomic) SCNProgram *program;
- (void)ownerWillDie;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void *)__CFObject;

@end

