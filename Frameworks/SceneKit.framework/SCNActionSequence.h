//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNAction.h>

@class NSArray;

@interface SCNActionSequence : SCNAction
{
    struct SCNCActionSequence *_mycaction;
    NSArray *_actions;
}

+ (BOOL)supportsSecureCoding;
+ (id)sequenceWithActions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)reversedAction;
- (BOOL)isCustom;

@end

