//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADProperties.h>

@interface ODDLayoutVariablePropertySet : OADProperties
{
    int mDirection;
    BOOL mHasDirection;
}

+ (id)defaultProperties;
- (BOOL)hasDirection;
- (id)initWithDefaults;
- (int)direction;
- (void)setDirection:(int)arg1;
- (id)description;

@end

