//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVRecursiveContainerSyncTaskGroup.h"

@interface BookmarkDAVRecursiveContainerSyncTaskGroup : CoreDAVRecursiveContainerSyncTaskGroup
{
}

- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousPTag:(id)arg3 previousSyncToken:(id)arg4 actions:(id)arg5 syncItemOrder:(BOOL)arg6 context:(id)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9;
- (BOOL)shouldSyncChildWithResourceType:(id)arg1;
- (id)copyFolderMultiGetTaskWithURLs:(id)arg1;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (id)dataContentType;

@end

