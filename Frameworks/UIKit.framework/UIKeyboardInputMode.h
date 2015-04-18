//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UITextInputMode.h>

#import "NSCopying.h"

@class NSArray, NSBundle, NSExtension, NSString;

@interface UIKeyboardInputMode : UITextInputMode <NSCopying>
{
    BOOL isDisplayed;
    NSString *primaryLanguage;
    NSString *languageWithRegion;
    NSString *identifier;
    NSString *normalizedIdentifier;
    NSString *softwareLayout;
    NSString *hardwareLayout;
}

+ (id)hardwareLayoutFromIdentifier:(id)arg1;
+ (id)softwareLayoutFromIdentifier:(id)arg1;
+ (id)canonicalLanguageIdentifierFromIdentifier:(id)arg1;
+ (id)intlInputMode;
+ (id)dictationInputMode;
+ (id)keyboardInputModeWithIdentifier:(id)arg1;
@property(nonatomic) BOOL isDisplayed; // @synthesize isDisplayed;
@property(retain, nonatomic) NSString *softwareLayout; // @synthesize softwareLayout;
@property(readonly, nonatomic) NSString *containingBundleDisplayName;
@property(readonly, nonatomic) NSString *extendedDisplayName;
@property(readonly, retain, nonatomic) NSArray *normalizedIdentifierLevels;
@property(retain, nonatomic) NSString *hardwareLayout; // @synthesize hardwareLayout;
@property(retain, nonatomic) NSString *languageWithRegion; // @synthesize languageWithRegion;
@property(retain, nonatomic) NSString *normalizedIdentifier; // @synthesize normalizedIdentifier;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSBundle *containingBundle;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isDesiredForTraits:(id)arg1 forceASCIICapable:(BOOL)arg2;
@property(retain, nonatomic) NSString *primaryLanguage; // @synthesize primaryLanguage;
@property(readonly, nonatomic) BOOL defaultLayoutIsASCIICapable;
- (BOOL)isAllowedForTraits:(id)arg1;
@property(readonly, nonatomic) BOOL isDefaultRightToLeft;
@property(readonly, nonatomic) NSString *identifierWithLayouts;
@property(readonly, nonatomic) BOOL isExtensionInputMode;
@property(readonly, nonatomic) NSExtension *extension;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

