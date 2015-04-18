//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathExpression.h>

@class NSArray, NSString;

@interface SCRCMathArrayExpression : SCRCMathExpression
{
    NSArray *_children;
}

- (id)children;
- (id)mathMLString;
- (id)localizableSuffixForChildAtIndex:(unsigned int)arg1;
- (id)localizablePrefixForChildAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) NSArray *mathMLAttributes;
- (id)suffixForChildAtIndex:(unsigned int)arg1;
- (id)prefixForChildAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) NSString *mathMLTag;
- (id)childSpeakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned int)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned int *)arg4;
- (BOOL)hasSimpleArrayOfChildren;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned int)arg2 treePosition:(id)arg3;
- (id)subExpressions;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)description;
- (void)dealloc;

@end

