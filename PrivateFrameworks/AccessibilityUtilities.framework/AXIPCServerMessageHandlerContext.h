//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AXIPCServerMessageHandlerContext : NSObject
{
    CDUnknownBlockType _handler;
    id _target;
    SEL _selector;
}

- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)initWithHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
- (void)dealloc;

@end

