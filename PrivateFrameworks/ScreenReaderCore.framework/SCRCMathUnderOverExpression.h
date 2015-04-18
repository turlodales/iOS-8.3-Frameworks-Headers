//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathExpression.h>

@interface SCRCMathUnderOverExpression : SCRCMathExpression
{
    SCRCMathExpression *_under;
    SCRCMathExpression *_over;
    SCRCMathExpression *_base;
}

- (id)mathMLString;
@property(retain, nonatomic) SCRCMathExpression *over; // @synthesize over=_over;
@property(retain, nonatomic) SCRCMathExpression *under; // @synthesize under=_under;
- (BOOL)isRangeSubSuperscript;
- (unsigned int)fractionLevel;
- (id)latexMathModeDescription;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned int)arg2 treePosition:(id)arg3;
- (id)subExpressions;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg1 treePosition:(id)arg2;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
@property(retain, nonatomic) SCRCMathExpression *base; // @synthesize base=_base;
- (id)initWithDictionary:(id)arg1;
- (id)description;
- (void)dealloc;

@end
