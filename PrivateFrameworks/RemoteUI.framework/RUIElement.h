//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface RUIElement : NSObject
{
    NSDictionary *_attributes;
    BOOL _enabled;
}

- (int)_horizontalAlignmentForString:(id)arg1;
- (void)imageLoaded:(id)arg1;
- (id)URLAttributeForImageName:(id)arg1 getScale:(float *)arg2;
- (id)subElementsWithName:(id)arg1;
- (BOOL)loadImage;
- (void)setImageSize:(struct CGSize)arg1;
- (void)populatePostbackDictionary:(id)arg1;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) NSString *name;
- (id)init;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (void)setImageAlignment:(int)arg1;
- (id)sourceURL;

@end

