//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface VKPGenericShieldVariant : PBCodable <NSCopying>
{
    CDStruct_e9f6a06b *_layers;
    unsigned int _layersCount;
    unsigned int _layersSpace;
    NSString *_fontName;
    float _fontSize;
    float _leftCapWidth;
    float _leftPadding;
    float _lineSpacing;
    unsigned int _numberOfLines;
    float _rightCapWidth;
    float _rightPadding;
    float _textBaseline;
    struct {
        unsigned int fontSize:1;
        unsigned int leftCapWidth:1;
        unsigned int leftPadding:1;
        unsigned int lineSpacing:1;
        unsigned int numberOfLines:1;
        unsigned int rightCapWidth:1;
        unsigned int rightPadding:1;
        unsigned int textBaseline:1;
    } _has;
}

@property(nonatomic) BOOL hasRightPadding;
@property(nonatomic) BOOL hasLeftPadding;
@property(nonatomic) float leftPadding; // @synthesize leftPadding=_leftPadding;
@property(nonatomic) BOOL hasLineSpacing;
@property(nonatomic) BOOL hasRightCapWidth;
@property(nonatomic) float rightCapWidth; // @synthesize rightCapWidth=_rightCapWidth;
@property(nonatomic) BOOL hasLeftCapWidth;
@property(nonatomic) float leftCapWidth; // @synthesize leftCapWidth=_leftCapWidth;
@property(nonatomic) BOOL hasNumberOfLines;
- (struct CGImage *)newImageWithBackgroundColor:(struct CGColor *)arg1 borderColor:(struct CGColor *)arg2 textureAtlases:(id)arg3 contentScale:(float)arg4;
- (struct CGSize)_imageSizeWithTextureAtlases:(id)arg1;
- (void)setLayers:(CDStruct_e9f6a06b *)arg1 count:(unsigned int)arg2;
@property(readonly, nonatomic) CDStruct_e9f6a06b *layers;
@property(nonatomic) BOOL hasFontSize;
@property(nonatomic) BOOL hasTextBaseline;
@property(nonatomic) float textBaseline; // @synthesize textBaseline=_textBaseline;
- (void)addLayer:(CDStruct_e9f6a06b)arg1;
- (void)clearLayers;
- (CDStruct_e9f6a06b)layerAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int layersCount;
@property(readonly, nonatomic) BOOL hasFontName;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) float rightPadding; // @synthesize rightPadding=_rightPadding;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (id)dictionaryRepresentation;
@property(nonatomic) float lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) unsigned int numberOfLines; // @synthesize numberOfLines=_numberOfLines;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

