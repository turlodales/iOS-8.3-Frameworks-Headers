//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLCommandEncoder.h"

@protocol MTLRenderCommandEncoder <MTLCommandEncoder>
- (void)drawIndexedPrimitives:(unsigned int)arg1 indexCount:(unsigned int)arg2 indexType:(unsigned int)arg3 indexBuffer:(id <MTLBuffer>)arg4 indexBufferOffset:(unsigned int)arg5;
- (void)drawIndexedPrimitives:(unsigned int)arg1 indexCount:(unsigned int)arg2 indexType:(unsigned int)arg3 indexBuffer:(id <MTLBuffer>)arg4 indexBufferOffset:(unsigned int)arg5 instanceCount:(unsigned int)arg6;
- (void)drawPrimitives:(unsigned int)arg1 vertexStart:(unsigned int)arg2 vertexCount:(unsigned int)arg3;
- (void)drawPrimitives:(unsigned int)arg1 vertexStart:(unsigned int)arg2 vertexCount:(unsigned int)arg3 instanceCount:(unsigned int)arg4;
- (void)setVisibilityResultMode:(unsigned int)arg1 offset:(unsigned int)arg2;
- (void)setStencilReferenceValue:(unsigned int)arg1;
- (void)setDepthStencilState:(id <MTLDepthStencilState>)arg1;
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setFragmentSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setFragmentSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned int)arg4;
- (void)setFragmentSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setFragmentSamplerState:(id <MTLSamplerState>)arg1 atIndex:(unsigned int)arg2;
- (void)setFragmentTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setFragmentTexture:(id <MTLTexture>)arg1 atIndex:(unsigned int)arg2;
- (void)setFragmentBuffers:(const id *)arg1 offsets:(const unsigned int *)arg2 withRange:(struct _NSRange)arg3;
- (void)setFragmentBufferOffset:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setFragmentBuffer:(id <MTLBuffer>)arg1 offset:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setFragmentBytes:(const void *)arg1 length:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setTriangleFillMode:(unsigned int)arg1;
- (void)setScissorRect:(CDStruct_0a4f9365)arg1;
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;
- (void)setCullMode:(unsigned int)arg1;
- (void)setFrontFacingWinding:(unsigned int)arg1;
- (void)setViewport:(CDStruct_4b2885c7)arg1;
- (void)setVertexSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setVertexSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned int)arg4;
- (void)setVertexSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setVertexSamplerState:(id <MTLSamplerState>)arg1 atIndex:(unsigned int)arg2;
- (void)setVertexTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setVertexTexture:(id <MTLTexture>)arg1 atIndex:(unsigned int)arg2;
- (void)setVertexBuffers:(const id *)arg1 offsets:(const unsigned int *)arg2 withRange:(struct _NSRange)arg3;
- (void)setVertexBufferOffset:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setVertexBuffer:(id <MTLBuffer>)arg1 offset:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setVertexBytes:(const void *)arg1 length:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setRenderPipelineState:(id <MTLRenderPipelineState>)arg1;
@end

