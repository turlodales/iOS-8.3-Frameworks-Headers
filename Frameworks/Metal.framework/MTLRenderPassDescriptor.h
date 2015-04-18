//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MTLRenderPassColorAttachmentDescriptorArray, MTLRenderPassDepthAttachmentDescriptor, MTLRenderPassStencilAttachmentDescriptor;

@interface MTLRenderPassDescriptor : NSObject <NSCopying>
{
    struct MTLRenderPassDescriptorPrivate _private;
}

+ (id)renderPassDescriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
@property(readonly) MTLRenderPassColorAttachmentDescriptorArray *colorAttachments;
@property(retain, nonatomic) id <MTLBuffer> visibilityResultBuffer;
@property(copy, nonatomic) MTLRenderPassStencilAttachmentDescriptor *stencilAttachment;
@property(copy, nonatomic) MTLRenderPassDepthAttachmentDescriptor *depthAttachment;
- (const struct MTLRenderPassDescriptorPrivate *)_descriptorPrivate;
- (BOOL)validate:(id)arg1 width:(unsigned int *)arg2 height:(unsigned int *)arg3;

@end

