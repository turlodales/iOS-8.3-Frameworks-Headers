//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface TCFontFamily : NSObject
{
    NSDictionary *_namesByLanguage;
    NSArray *_members;
}

- (id)variantByRemovingBoldFromFont:(id)arg1;
- (BOOL)fontIsDesignatedBold:(id)arg1;
- (id)variantByRemovingItalicFromFont:(id)arg1;
- (id)variantByAddingBoldToFont:(id)arg1;
- (id)variantByAddingItalicToFont:(id)arg1;
- (id)memberForFullName:(id)arg1;
- (id)memberForPSName:(id)arg1;
- (id)bestMatchForStyling:(struct TCFontStyling)arg1;
- (id)initWithNamesByLanguage:(id)arg1 members:(id)arg2;
@property(readonly, nonatomic) NSArray *members; // @synthesize members=_members;
@property(readonly, nonatomic) NSDictionary *namesByLanguage; // @synthesize namesByLanguage=_namesByLanguage;
- (id)equivalentDictionary;
- (id)initWithDictionary:(id)arg1;
- (id)description;
- (void)dealloc;

@end

