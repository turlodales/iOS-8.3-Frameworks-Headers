//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface _HKCFGReplacementRule : NSObject
{
    NSString *_description;
    NSArray *_rightHandSide;
    CDUnknownBlockType _nodeEvaluator;
    unsigned int _lengthIncrease;
}

+ (id)ruleWithLHS:(id)arg1 RHS:(id)arg2 nodeEvaluator:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) unsigned int lengthIncrease; // @synthesize lengthIncrease=_lengthIncrease;
@property(readonly, copy, nonatomic) NSArray *rightHandSide; // @synthesize rightHandSide=_rightHandSide;
@property(readonly, copy, nonatomic) CDUnknownBlockType nodeEvaluator; // @synthesize nodeEvaluator=_nodeEvaluator;

@end

