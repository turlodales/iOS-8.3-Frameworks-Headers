//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface GEOSearchAttributionInfo : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    unsigned int _version;
    NSArray *_logoPaths;
    NSArray *_snippetLogoPaths;
    NSString *_displayName;
    NSString *_webBaseActionURL;
    NSArray *_attributionApps;
    unsigned int _attributionRequirementsMask;
}

+ (BOOL)supportsSecureCoding;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)addLogoPath:(id)arg1;
- (id)snippetLogoPathForScale:(float)arg1;
- (id)initWithSource:(id)arg1 localizedAttribution:(id)arg2 logoPaths:(id)arg3 snippetLogoPaths:(id)arg4;
@property(nonatomic) unsigned int requirementsMask; // @synthesize requirementsMask=_attributionRequirementsMask;
@property(retain, nonatomic) NSString *webBaseActionURL; // @synthesize webBaseActionURL=_webBaseActionURL;
@property(retain, nonatomic) NSArray *attributionApps; // @synthesize attributionApps=_attributionApps;
- (BOOL)supportsActionURLs;
- (id)logoPathForScale:(float)arg1;
- (BOOL)hasAttributionRequirement:(int)arg1;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

