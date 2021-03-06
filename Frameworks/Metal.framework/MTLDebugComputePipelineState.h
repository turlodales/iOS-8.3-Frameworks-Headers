//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLToolsComputePipelineState.h>

@class MTLComputePipelineDescriptor, MTLComputePipelineReflection;

@interface MTLDebugComputePipelineState : MTLToolsComputePipelineState
{
    id <MTLFunction> _function;
    MTLComputePipelineDescriptor *_descriptor;
    MTLComputePipelineReflection *_reflection;
}

@property(readonly, nonatomic) MTLComputePipelineReflection *reflection; // @synthesize reflection=_reflection;
- (id)getParameter:(id)arg1;
@property(readonly, nonatomic) id <MTLFunction> function; // @synthesize function=_function;
@property(readonly, nonatomic) MTLComputePipelineDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void).cxx_destruct;
- (id)description;
- (id)initWithComputePipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;

@end

