//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class PDSlide;

@interface PMSlideMapper : CMMapper
{
    PDSlide *mSlide;
    struct CGRect mRect;
}

- (void)mapBackgroundAt:(id)arg1 recursive:(BOOL)arg2 withState:(id)arg3;
- (id)slideName;
- (void)mapMasterSlideAt:(id)arg1 withState:(id)arg2;
- (id)initWithPDSlide:(id)arg1 slideRect:(struct CGRect)arg2 parent:(id)arg3;
- (id)defaultTheme;
- (struct CGRect)slideRect;
- (void)mapDrawablesAt:(id)arg1 withState:(id)arg2;
- (id)styleMatrix;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id).cxx_construct;

@end

