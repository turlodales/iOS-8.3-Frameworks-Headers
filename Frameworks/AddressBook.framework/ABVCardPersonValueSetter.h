//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABVCardValueSetter.h>

@interface ABVCardPersonValueSetter : ABVCardValueSetter
{
    void *_person;
    struct __CFArray *_properties;
}

+ (struct __CFArray *)supportedProperties;
- (id)fullName;
- (id)imageData;
- (BOOL)setValue:(void *)arg1 forProperty:(unsigned int)arg2;
- (void *)valueForProperty:(unsigned int)arg1;
- (void)dealloc;
- (void)setValueInTemporaryCache:(id)arg1 forProperty:(unsigned int)arg2;
- (BOOL)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5;
- (struct __CFArray *)foundProperties;
- (id)initWithPerson:(void *)arg1;

@end

