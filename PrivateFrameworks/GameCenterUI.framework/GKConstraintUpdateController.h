//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPointerArray;

@interface GKConstraintUpdateController : NSObject
{
    NSPointerArray *_constraintsToUpdate;
}

+ (id)sharedController;
@property(retain, nonatomic) NSPointerArray *constraintsToUpdate; // @synthesize constraintsToUpdate=_constraintsToUpdate;
- (void)_updateConstraints;
- (void)updateConstraint:(id)arg1;
- (void)registerConstraint:(id)arg1 leading:(float)arg2 forFontTextStyle:(id)arg3;
- (void)dealloc;

@end

