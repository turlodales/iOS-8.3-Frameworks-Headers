//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ToneKit/TKPickerRowItem.h>

@class NSString;

@interface TKPickerSelectableItem : TKPickerRowItem
{
    BOOL _textCentered;
    BOOL _showsCheckmark;
    BOOL _showsDisclosureIndicator;
    NSString *_text;
    NSString *_detailText;
}

- (void)_appendDescriptionOfAttributesToString:(id)arg1;
@property(nonatomic) BOOL showsCheckmark; // @synthesize showsCheckmark=_showsCheckmark;
@property(nonatomic, getter=isTextCentered) BOOL textCentered; // @synthesize textCentered=_textCentered;
@property(nonatomic) BOOL showsDisclosureIndicator; // @synthesize showsDisclosureIndicator=_showsDisclosureIndicator;
- (void)_setShowsCheckmark:(BOOL)arg1;
- (void)_setDetailText:(id)arg1;
- (void)_setTextCentered:(BOOL)arg1;
- (void)_setShowsDisclosureIndicator:(BOOL)arg1;
- (void)_setText:(id)arg1;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)dealloc;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;

@end

