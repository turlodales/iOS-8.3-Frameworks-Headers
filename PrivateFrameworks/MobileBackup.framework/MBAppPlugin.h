//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MobileBackup/MBContainer.h>

@class NSArray, NSDictionary, NSString;

@interface MBAppPlugin : MBContainer
{
    NSArray *_groups;
}

+ (id)appPluginWithPropertyList:(id)arg1;
@property(readonly, nonatomic) NSString *bundleDir;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(readonly, nonatomic) NSDictionary *entitlements;
- (id)domain;

@end

