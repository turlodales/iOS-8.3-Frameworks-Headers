//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableString, NSString;

@interface TPPasscodeView : UIView
{
    NSMutableString *_passcodeMutableString;
}

@property(retain) NSMutableString *passcodeMutableString; // @synthesize passcodeMutableString=_passcodeMutableString;
@property(readonly) NSString *passcodeString; // @dynamic passcodeString;
- (void)appendCharacter:(id)arg1;
- (void)clear;
- (void)deleteLastCharacter;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

