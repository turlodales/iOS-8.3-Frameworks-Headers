//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSSet, TDEffectRenditionSpec, TDEffectType;

@interface TDEffectComponent : NSManagedObject
{
}

- (void)updatePresetParameters:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setEffectParametersFromPreset:(id)arg1 atIndex:(unsigned int)arg2 withDocument:(id)arg3;

// Remaining properties
@property(retain, nonatomic) TDEffectType *effectType; // @dynamic effectType;
@property(nonatomic) BOOL isEnabled; // @dynamic isEnabled;
@property(retain, nonatomic) NSSet *parameters; // @dynamic parameters;
@property(retain, nonatomic) TDEffectRenditionSpec *rendition; // @dynamic rendition;

@end

