//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProgress.h"

@class NSMutableDictionary;

@interface BRCProgress : NSProgress
{
    NSMutableDictionary *_progressByAliasContainerID;
    BOOL _isPublished;
}

+ (id)uploadProgressWithBRCDocumentItem:(id)arg1 transferSize:(unsigned long long)arg2;
+ (id)downloadProgressWithBRCDocumentItem:(id)arg1;
+ (id)progressWithBRCDocumentItem:(id)arg1 totalSize:(long long)arg2 kind:(id)arg3;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)addAliasItem:(id)arg1;
- (void)brc_unpublish;
- (void)brc_publish;
- (void).cxx_destruct;

@end
