//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUCellConfiguration.h>

@interface SUArrayCellConfiguration : SUCellConfiguration
{
    unsigned int _numberOfStrings;
    struct CGRect *_stringFrames;
    id *_strings;
    unsigned int _numberOfImages;
    struct CGRect *_imageFrames;
    id *_images;
    id *_selectedImages;
}

- (id)_accessibilityStringsArrayPointer;
- (id)initWithStringCount:(unsigned int)arg1 imageCount:(unsigned int)arg2;
- (void)reloadLayoutInformation;
- (void)reloadStrings;
- (void)reloadImages;
- (struct CGRect)frameForImageAtIndex:(unsigned int)arg1;
- (id)imageAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (struct CGRect)frameForLabelAtIndex:(unsigned int)arg1;
- (id)stringForLabelAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfLabels;
- (void)setLayoutSize:(struct CGSize)arg1;
- (unsigned int)numberOfImages;
- (void)reloadData;
- (void)dealloc;

@end

