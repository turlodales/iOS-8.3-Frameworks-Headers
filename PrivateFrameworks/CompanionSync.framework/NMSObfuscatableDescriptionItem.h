//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NMSObfuscatableDescriptionItem : NSObject
{
    BOOL _obfuscated;
    NSString *_format;
    id <NSObject> _value;
}

@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(nonatomic) BOOL obfuscated; // @synthesize obfuscated=_obfuscated;
- (id)initWithFormat:(id)arg1 value:(id)arg2 obfuscated:(BOOL)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) id <NSObject> value; // @synthesize value=_value;

@end

