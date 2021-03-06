//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVMediaSelectionGroup.h>

@class AVAssetWriterInput, AVAssetWriterInputGroupInternal, NSArray;

@interface AVAssetWriterInputGroup : AVMediaSelectionGroup
{
    AVAssetWriterInputGroupInternal *_internal;
}

+ (id)assetWriterInputGroupWithInputs:(id)arg1 defaultInput:(id)arg2;
- (void)finalize;
- (id)options;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)dealloc;
- (void)_stopObservingInputPropertiesThatMayChangeValueOfOptions;
- (void)_startObservingInputPropertiesThatMayChangeValueOfOptions;
- (id)initWithInputs:(id)arg1 defaultInput:(id)arg2;
@property(readonly, nonatomic) AVAssetWriterInput *defaultInput;
@property(readonly, nonatomic) NSArray *inputs;

@end

