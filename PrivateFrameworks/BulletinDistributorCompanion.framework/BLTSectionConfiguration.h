//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface BLTSectionConfiguration : NSObject
{
    NSDictionary *_configurations;
}

+ (id)sharedSectionConfiguration;
- (BOOL)hasSectionIDOptedOutOfAttachmentCoordination:(id)arg1;
- (BOOL)hasSectionIDOptedOutOfCoordination:(id)arg1;
- (id)_loadConfigurations;
- (void).cxx_destruct;
- (id)init;

@end

