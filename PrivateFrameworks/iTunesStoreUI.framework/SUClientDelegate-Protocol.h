//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSet, NSURL, SSDownloadManager, SSDownloadQueue, SUClient, UIViewController;

@protocol SUClientDelegate <NSObject>
- (BOOL)client:(SUClient *)arg1 presentModalViewController:(UIViewController *)arg2 animated:(BOOL)arg3;

@optional
- (UIViewController *)topViewControllerForClient:(SUClient *)arg1;
- (BOOL)client:(SUClient *)arg1 openInternalURL:(NSURL *)arg2;
- (SSDownloadQueue *)downloadQueueForClient:(SUClient *)arg1 downloadKinds:(NSSet *)arg2;
- (SSDownloadManager *)downloadManagerForClient:(SUClient *)arg1 downloadKinds:(NSArray *)arg2;
- (BOOL)client:(SUClient *)arg1 presentComposeReviewViewController:(UIViewController *)arg2 animated:(BOOL)arg3;
- (BOOL)client:(SUClient *)arg1 presentAccountViewController:(UIViewController *)arg2 animated:(BOOL)arg3;
@end

