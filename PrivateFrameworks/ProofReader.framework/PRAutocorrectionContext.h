//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PRAutocorrectionContext : NSObject
{
}

+ (id)autocorrectionContextOfType:(unsigned int)arg1;
- (id)addedModifications;
- (id)removedModifications;
- (void)setValidSequenceCorrectionThreshold:(double)arg1;
- (id)prefixes;
- (void)addInputCharacter:(unsigned short)arg1 geometryModel:(void *)arg2 geometryData:(id)arg3;
- (double)validSequenceCorrectionThreshold;
- (void)addInputCharacter:(unsigned short)arg1 geometryData:(id)arg2;
- (id)currentModifications;
- (void)reset;

@end

