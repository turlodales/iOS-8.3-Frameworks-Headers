//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface MTLSamplerDescriptor : NSObject <NSCopying>
{
    struct MTLSamplerDescriptorPrivate *_private;
}

- (float)lodBias;
- (void)setLodBias:(float)arg1;
@property(copy, nonatomic) NSString *label;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
@property(nonatomic) unsigned int maxAnisotropy;
@property(nonatomic) unsigned int mipFilter;
@property(nonatomic) unsigned int magFilter;
@property(nonatomic) unsigned int minFilter;
@property(nonatomic) float lodMaxClamp;
@property(nonatomic) float lodMinClamp;
@property(nonatomic) BOOL normalizedCoordinates;
@property(nonatomic) unsigned int rAddressMode;
@property(nonatomic) unsigned int tAddressMode;
@property(nonatomic) unsigned int sAddressMode;
- (const struct MTLSamplerDescriptorPrivate *)descriptorPrivate;

@end

