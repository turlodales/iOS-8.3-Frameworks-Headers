//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface AVAssetWriterInputMediaDataRequester : NSObject
{
    NSObject<OS_dispatch_queue> *_requestQueue;
    CDUnknownBlockType _requestBlock;
    id <AVAssetWriterInputMediaDataRequesterDelegate> _delegate;
}

- (void)finalize;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
@property id <AVAssetWriterInputMediaDataRequesterDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;
- (void)_collectUncollectables_invokedFromDeallocAndFinalize;
- (void)requestMediaDataIfNecessary;
- (id)initWithRequestQueue:(id)arg1 requestBlock:(CDUnknownBlockType)arg2;

@end

