//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, TCFontFamily;

@interface TCFont : NSObject
{
    NSDictionary *_namesByLanguage;
    NSString *_psName;
    TCFontFamily *_family;
    struct TCFontStyling _styling;
}

@property(nonatomic) TCFontFamily *family; // @synthesize family=_family;
- (id)localizedFontName;
- (id)initWithNamesByLanguage:(id)arg1 psName:(id)arg2 styling:(struct TCFontStyling)arg3;
@property(readonly, nonatomic) struct TCFontStyling styling; // @synthesize styling=_styling;
@property(readonly, nonatomic) NSString *psName; // @synthesize psName=_psName;
@property(readonly, nonatomic) NSDictionary *namesByLanguage; // @synthesize namesByLanguage=_namesByLanguage;
- (id)equivalentDictionary;
- (id).cxx_construct;
- (id)initWithDictionary:(id)arg1;
- (id)description;
- (void)dealloc;

@end

