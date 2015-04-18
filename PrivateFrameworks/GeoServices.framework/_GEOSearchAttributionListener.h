//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface _GEOSearchAttributionListener : NSObject
{
    NSString *_identifier;
    unsigned int _version;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_errorHandlers;
}

- (id)initWithIdentifier:(id)arg1 version:(unsigned int)arg2;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)handleError:(id)arg1;
- (void)handleInfo:(id)arg1 updatedManifest:(BOOL)arg2;
@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)dealloc;

@end

