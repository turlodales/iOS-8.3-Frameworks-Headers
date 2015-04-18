//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, NSString;

@interface SKUILibraryItemState : NSObject <NSCopying>
{
    int _availability;
    unsigned int _avTypes;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    BOOL _highDefinition;
    BOOL _preview;
    BOOL _rental;
    NSNumber *_storeAccountIdentifier;
    NSString *_storeFlavorIdentifier;
    NSString *_storePlatformKind;
    NSNumber *_storeVersionIdentifier;
}

@property(copy, nonatomic) NSNumber *storeVersionIdentifier; // @synthesize storeVersionIdentifier=_storeVersionIdentifier;
@property(copy, nonatomic) NSString *storeFlavorIdentifier; // @synthesize storeFlavorIdentifier=_storeFlavorIdentifier;
@property(copy, nonatomic) NSNumber *storeAccountIdentifier; // @synthesize storeAccountIdentifier=_storeAccountIdentifier;
@property(nonatomic, getter=isPreview) BOOL preview; // @synthesize preview=_preview;
@property(nonatomic, getter=isHighDefinition) BOOL highDefinition; // @synthesize highDefinition=_highDefinition;
@property(copy, nonatomic) NSString *storePlatformKind; // @synthesize storePlatformKind=_storePlatformKind;
@property(nonatomic) unsigned int AVTypes; // @synthesize AVTypes=_avTypes;
- (id)initWithApplication:(id)arg1;
@property(readonly, nonatomic) NSString *itemStateVariantIdentifier;
- (id)newJavaScriptRepresentation;
@property(nonatomic, getter=isRental) BOOL rental; // @synthesize rental=_rental;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) int availability; // @synthesize availability=_availability;

@end
