//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSLayoutConstraint.h>

@interface NSAutoresizingMaskLayoutConstraint : NSLayoutConstraint
{
}

+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 constant:(float)arg7;
+ (id)constraintsWithAutoresizingMask:(unsigned int)arg1 subitem:(id)arg2 frame:(struct CGRect)arg3 superitem:(id)arg4 bounds:(struct CGRect)arg5;
- (int)_constraintType;
- (id)_viewForAutoresizingMask;
- (id)descriptionAccessory;

@end

