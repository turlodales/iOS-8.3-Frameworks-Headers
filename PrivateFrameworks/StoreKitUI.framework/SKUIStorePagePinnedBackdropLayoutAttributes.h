//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayoutAttributes.h"

#import "NSCopying.h"

@class NSString, UIColor;

@interface SKUIStorePagePinnedBackdropLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying>
{
    UIColor *_backdropColor;
    int _backdropStyle;
    BOOL _hidesBackdropView;
    float _transitionProgress;
    NSString *_backdropGroupName;
}

@property(retain, nonatomic) UIColor *backdropColor; // @synthesize backdropColor=_backdropColor;
@property(nonatomic) BOOL hidesBackdropView; // @synthesize hidesBackdropView=_hidesBackdropView;
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property(nonatomic) int backdropStyle; // @synthesize backdropStyle=_backdropStyle;
@property(nonatomic) float transitionProgress; // @synthesize transitionProgress=_transitionProgress;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

