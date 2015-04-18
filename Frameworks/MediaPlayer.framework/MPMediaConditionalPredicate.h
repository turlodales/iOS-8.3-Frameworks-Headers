//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPMediaPredicate.h>

#import "MPPProtobufferCoding.h"

@class NSString;

@interface MPMediaConditionalPredicate : MPMediaPredicate <MPPProtobufferCoding>
{
    MPMediaPredicate *_conditionPredicate;
    MPMediaPredicate *_thenPredicate;
    MPMediaPredicate *_elsePredicate;
}

+ (id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;
@property(readonly, copy, nonatomic) MPMediaPredicate *elsePredicate; // @synthesize elsePredicate=_elsePredicate;
@property(readonly, copy, nonatomic) MPMediaPredicate *thenPredicate; // @synthesize thenPredicate=_thenPredicate;
@property(readonly, copy, nonatomic) MPMediaPredicate *conditionPredicate; // @synthesize conditionPredicate=_conditionPredicate;
- (id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;
- (void).cxx_destruct;
- (id)_ML3PredicateForEntityTypeSelector:(SEL)arg1;
- (id)ML3PredicateForTrack;
- (id)ML3PredicateForContainer;
- (id)protobufferEncodableObject;
- (id)initWithProtobufferDecodableObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

