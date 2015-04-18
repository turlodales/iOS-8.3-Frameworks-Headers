//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class BLTPBImage, NSString;

@interface BLTPBAppearance : PBCodable <NSCopying>
{
    BLTPBImage *_image;
    NSString *_title;
    BOOL _destructive;
    struct {
        unsigned int destructive:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasImage;
@property(nonatomic) BOOL destructive; // @synthesize destructive=_destructive;
@property(nonatomic) BOOL hasDestructive;
@property(readonly, nonatomic) BOOL hasTitle;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) BLTPBImage *image; // @synthesize image=_image;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

