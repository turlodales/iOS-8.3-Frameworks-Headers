//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSURL;

@interface BRQueryStitch : NSObject
{
    NSArray *_queries;
    NSNumber *_objid;
    BOOL _kind;
    NSURL *_fromURL;
    NSURL *_url;
}

@property(retain, nonatomic) NSArray *queries; // @synthesize queries=_queries;
@property(retain, nonatomic) NSURL *fromURL; // @synthesize fromURL=_fromURL;
- (id)initWithURL:(id)arg1 objid:(id)arg2 kind:(BOOL)arg3;
- (void)_deletionDone;
- (void)_renameDone;
- (void)_creationDone;
- (void)_enableUpdatesFromIPCAfterStitchingOnAllQueries;
- (void)done;
- (id)description;
- (void)dealloc;

@end

