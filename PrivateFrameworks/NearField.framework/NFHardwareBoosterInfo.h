//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface NFHardwareBoosterInfo : NSObject
{
    unsigned int _siliconVersion;
    NSData *_staticConfig;
    NSData *_dynamicConfig;
}

@property(readonly, nonatomic) NSData *dynamicConfig; // @synthesize dynamicConfig=_dynamicConfig;
@property(readonly, nonatomic) NSData *staticConfig; // @synthesize staticConfig=_staticConfig;
@property(readonly, nonatomic) unsigned int siliconVersion; // @synthesize siliconVersion=_siliconVersion;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;

@end

