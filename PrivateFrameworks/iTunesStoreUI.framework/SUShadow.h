//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class UIColor;

@interface SUShadow : NSObject <NSCoding, NSCopying>
{
    UIColor *_color;
    struct CGSize _offset;
    float _opacity;
    float _radius;
}

- (void)applyToLayer:(id)arg1;
@property(nonatomic) float radius; // @synthesize radius=_radius;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) struct CGSize offset; // @synthesize offset=_offset;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

