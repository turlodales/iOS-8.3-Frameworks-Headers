//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SSDialogButton;

@interface SSDialog : NSObject
{
    NSArray *_buttons;
    NSMutableDictionary *_dialogDictionary;
}

@property(readonly, nonatomic) NSDictionary *dialogDictionary;
@property(copy, nonatomic) NSArray *buttons;
@property(readonly, nonatomic) NSString *dialogKind;
- (id)initWithDialogDictionary:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
@property(copy, nonatomic) NSString *message;
@property(retain, nonatomic) SSDialogButton *defaultButton;
@property(copy, nonatomic) NSString *title;
- (id)init;
- (void)dealloc;

@end

