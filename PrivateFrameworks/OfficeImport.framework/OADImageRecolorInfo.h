//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface OADImageRecolorInfo : NSObject
{
    NSDictionary *mColors;
    NSDictionary *mFills;
}

- (id)fills;
- (id)initWithColors:(id)arg1 fills:(id)arg2;
- (id)colors;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
