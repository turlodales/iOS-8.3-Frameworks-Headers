//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TKDisplayLinkManagerTargetAction : NSObject
{
    id _target;
    SEL _actionSelector;
    NSString *_actionSelectorName;
    unsigned int _frameInterval;
    unsigned int _displayDidRefreshCount;
}

@property(nonatomic, setter=_setDisplayDidRefreshCount:) unsigned int _displayDidRefreshCount; // @synthesize _displayDidRefreshCount;
@property(nonatomic, setter=_setFrameInterval:) unsigned int _frameInterval; // @synthesize _frameInterval;
@property(copy, nonatomic, setter=_setActionSelectorName:) NSString *_actionSelectorName; // @synthesize _actionSelectorName;
@property(nonatomic, setter=_setActionSelector:) SEL _actionSelector; // @synthesize _actionSelector;
- (void)displayDidRefresh:(id)arg1;
- (id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2;
- (id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2 frameInterval:(unsigned int)arg3;
@property(retain, nonatomic, setter=_setTarget:) id _target; // @synthesize _target;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

