//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AFUISiriLanguage : NSObject
{
    NSString *_spokenLanguageCode;
    id <AFUISiriLanguageDelegate> _delegate;
}

- (void)_currentLocaleDidChange:(id)arg1;
- (id)initWithDelegate:(id)arg1;
@property(copy, nonatomic) NSString *spokenLanguageCode; // @synthesize spokenLanguageCode=_spokenLanguageCode;
- (void)_setSpokenLanguageCode:(id)arg1;
- (void)_updateSpokenLanguageCode;
- (void)_spokenLanguageDidChange:(id)arg1;
- (id)_computeSpokenLanguageCode;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_delegate) __weak id <AFUISiriLanguageDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

@end

