//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PrototypeTools/PTSPushViewControllerRowAction.h>

@class NSString;

@interface PTSDrillDownRowAction : PTSPushViewControllerRowAction
{
    NSString *_settingsKeyPath;
}

+ (id)actionWithSettingsKeyPath:(id)arg1;
@property(copy, nonatomic) NSString *settingsKeyPath; // @synthesize settingsKeyPath=_settingsKeyPath;
- (void)resolveTemplatesWithIndex:(unsigned int)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

