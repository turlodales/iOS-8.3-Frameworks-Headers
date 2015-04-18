//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextAttachment.h"

@class NSURL;

@interface SKUIBadgeTextAttachment : NSTextAttachment
{
    NSURL *_imageURL;
}

@property(readonly, nonatomic) struct CGSize badgeSize;
- (void)_loadImageWithResourceName:(id)arg1 fallbackImage:(id)arg2 styleColor:(id)arg3;
- (id)initWithViewElement:(id)arg1;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;

@end

