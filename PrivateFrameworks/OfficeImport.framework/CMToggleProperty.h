//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMProperty.h>

@interface CMToggleProperty : CMProperty
{
    int wdValue;
}

- (id)mapStrikeTrough;
- (id)mapItalic;
- (id)mapBold;
- (int)compareValue:(id)arg1;
- (void)resolveWithBaseProperty:(id)arg1;
- (id)cssStringForName:(id)arg1;
- (id)initWithCMTogglePropertyValue:(int)arg1;
- (int)value;

@end

