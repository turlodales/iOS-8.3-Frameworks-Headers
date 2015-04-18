//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SBFMagnifyMode : NSObject <NSCopying>
{
    NSString *_name;
    float _zoomFactor;
    struct CGSize _size;
}

+ (id)magnifyModeWithSize:(struct CGSize)arg1 name:(id)arg2;
+ (id)currentMagnifyMode;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
@property(nonatomic) float zoomFactor; // @synthesize zoomFactor=_zoomFactor;

@end

