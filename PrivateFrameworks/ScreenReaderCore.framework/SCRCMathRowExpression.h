//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

@interface SCRCMathRowExpression : SCRCMathArrayExpression
{
}

- (id)mathMLTag;
- (void)_addSpacingAndChild:(id)arg1 toResult:(id)arg2 nextChild:(id)arg3 previousChild:(id)arg4 numberOfOuterRadicals:(unsigned int)arg5 treePosition:(id)arg6;
- (id)_indexesOfCharactersInWords;
- (id)childSpeakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned int)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned int *)arg4;
- (BOOL)endsWithSpace;
- (BOOL)beginsWithSpace;
- (BOOL)isWordOrAbbreviation;
- (BOOL)isFunctionName;
- (BOOL)isInteger;
- (BOOL)canBeUsedWithBase;
- (BOOL)canBeUsedWithRange;
- (id)speakableSummary;
- (unsigned int)fractionLevel;
- (id)latexDescriptionInMathMode:(BOOL)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg1 treePosition:(id)arg2;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
- (int)integerValue;
- (BOOL)isNumber;

@end

