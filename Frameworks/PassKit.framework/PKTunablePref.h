//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSString;

@interface PKTunablePref : NSObject
{
    NSString *_prefName;
    id _prefValue;
    NSMapTable *_handlers;
}

@property(retain) NSMapTable *handlers; // @synthesize handlers=_handlers;
- (void)save:(id)arg1;
- (void)dealloc;
- (void)pushValueToModel:(id)arg1;
@property(retain) NSString *prefName; // @synthesize prefName=_prefName;
@property(retain) id prefValue; // @synthesize prefValue=_prefValue;
- (id)codeDescription;
- (void)restore:(id)arg1;
- (id)viewWithContainedLabel:(id *)arg1;
- (void)addObserver:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithPrefName:(id)arg1 defaultValue:(id)arg2;

@end

