//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDCollection;

@interface EDLink : NSObject
{
    int mType;
    EDCollection *mExternalNames;
}

+ (id)linkWithType:(int)arg1;
- (id)externalNames;
- (id)initWithType:(int)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (void)dealloc;

@end
