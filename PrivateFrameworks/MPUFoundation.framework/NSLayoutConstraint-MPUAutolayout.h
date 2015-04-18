//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLayoutConstraint.h"

@interface NSLayoutConstraint (MPUAutolayout)
+ (id)constraintsByCenteringView:(id)arg1 withView:(id)arg2 alongAxes:(int)arg3 offset:(struct UIOffset)arg4;
+ (id)constraintsByCenteringAndContainingView:(id)arg1 inView:(id)arg2 insets:(struct UIEdgeInsets)arg3;
+ (id)constraintsBySizingView:(id)arg1 toSize:(struct CGSize)arg2;
+ (id)constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned int)arg3 insets:(struct UIEdgeInsets)arg4;
+ (id)constraintsByAttachingView:(id)arg1 toView:(id)arg2 inCorner:(unsigned int)arg3 offset:(struct UIOffset)arg4;
@end

