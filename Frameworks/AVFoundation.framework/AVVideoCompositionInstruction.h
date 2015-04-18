//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVVideoCompositionInstruction.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class AVVideoCompositionInstructionInternal, NSArray, NSString;

@interface AVVideoCompositionInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, AVVideoCompositionInstruction>
{
    AVVideoCompositionInstructionInternal *_instruction;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
- (void)finalize;
- (void)setTimeRange:(CDStruct_e83c9415)arg1;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) struct CGColor *backgroundColor;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) int passthroughTrackID;
@property(readonly, nonatomic) NSArray *requiredSourceTrackIDs;
@property(readonly, nonatomic) BOOL containsTweening;
- (void)setLayerInstructions:(id)arg1;
- (void)_setValuesFromDictionary:(id)arg1;
- (void)setEnablePostProcessing:(BOOL)arg1;
@property(readonly, nonatomic) BOOL enablePostProcessing;
@property(readonly, copy, nonatomic) NSArray *layerInstructions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

