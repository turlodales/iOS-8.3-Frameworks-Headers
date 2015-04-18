//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FigStateMachine : NSObject
{
    id _owner;
    int _lock;
    BOOL _performsAtomicStateTransitions;
    unsigned int _currentState;
    struct FigStateMachineStateConfiguration *_stateConfigurations;
    BOOL _stateCount;
    NSString *_label;
}

+ (void)initialize;
- (BOOL)transitionToState:(unsigned int)arg1;
@property(nonatomic) BOOL performsAtomicStateTransitions; // @synthesize performsAtomicStateTransitions=_performsAtomicStateTransitions;
- (BOOL)transitionToState:(unsigned int)arg1 fromStates:(unsigned int)arg2;
- (void)whenTransitioningToStatesFail:(unsigned int)arg1 callHandler:(CDUnknownBlockType)arg2;
- (void)whenTransitioningToStates:(unsigned int)arg1 callHandler:(CDUnknownBlockType)arg2;
- (void)markStateAsTerminal:(unsigned int)arg1;
- (id)labelForState:(unsigned int)arg1;
- (BOOL)_transitionToState:(unsigned int)arg1 fromStates:(unsigned int)arg2 errorStatus:(long)arg3;
- (void)whenTransitioningToStateFails:(unsigned int)arg1 callHandler:(CDUnknownBlockType)arg2;
@property(readonly) NSString *currentStateLabel;
- (BOOL)transitionToState:(unsigned int)arg1 errorStatus:(long)arg2;
- (BOOL)transitionToState:(unsigned int)arg1 fromState:(unsigned int)arg2;
- (void)whenTransitioningToState:(unsigned int)arg1 callHandler:(CDUnknownBlockType)arg2;
- (void)whenTransitioningFromState:(unsigned int)arg1 toState:(unsigned int)arg2 callHandler:(CDUnknownBlockType)arg3;
- (void)setLabel:(id)arg1 forState:(unsigned int)arg2;
- (id)initWithLabel:(id)arg1 stateCount:(BOOL)arg2 initialState:(unsigned int)arg3 owner:(id)arg4;
@property(readonly) NSString *label;
@property(readonly) unsigned int currentState;
- (id)description;
- (void)dealloc;

@end

