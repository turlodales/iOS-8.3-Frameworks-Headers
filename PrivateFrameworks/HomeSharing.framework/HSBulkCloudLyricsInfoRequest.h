//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeSharing/HSRequest.h>

@interface HSBulkCloudLyricsInfoRequest : HSRequest
{
    BOOL _useLongIDs;
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 itemIDs:(id)arg2 sessionID:(unsigned int)arg3 useLongIDs:(BOOL)arg4;
- (id)initWithDatabaseID:(unsigned int)arg1 itemIDs:(id)arg2 sessionID:(unsigned int)arg3 useLongIDs:(BOOL)arg4;
- (id)_bodyDataForItemIDs:(id)arg1 sessionID:(unsigned int)arg2;
- (id)canonicalResponseForResponse:(id)arg1;

@end

