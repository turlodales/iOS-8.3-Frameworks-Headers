//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Celestial/BWSourceNode.h>

@class NSObject<OS_dispatch_queue>;

@interface BWMetadataSourceNode : BWSourceNode
{
    BOOL _running;
    struct opaqueCMFormatDescription *_formatDescription;
    struct OpaqueCMClock *_clock;
    NSObject<OS_dispatch_queue> *_emitSamplesDispatchQueue;
}

+ (void)initialize;
- (struct OpaqueCMClock *)clock;
- (BOOL)stop:(id *)arg1;
- (void)appendMetadataSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (BOOL)start:(id *)arg1;
- (id)nodeSubType;
- (void)dealloc;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription *)arg1 clock:(struct OpaqueCMClock *)arg2;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *formatDescription; // @synthesize formatDescription=_formatDescription;

@end

