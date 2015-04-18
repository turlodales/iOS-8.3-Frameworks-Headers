//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSString;

@interface MPUKeyValueObserver : NSObject
{
    id _observedObject;
    NSString *_observedKeyPath;
    CDUnknownBlockType _observationHandler;
    NSOperationQueue *_queue;
}

+ (id)observerForKeyPath:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType observationHandler; // @synthesize observationHandler=_observationHandler;
@property(copy, nonatomic) NSString *observedKeyPath; // @synthesize observedKeyPath=_observedKeyPath;
@property(retain, nonatomic) id observedObject; // @synthesize observedObject=_observedObject;
- (id)initWithKeyPath:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

@end

