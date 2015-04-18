//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IKDOMDocument, NSArray, NSDictionary, NSString;

@protocol IKJSDOMDocumentAppBridge <NSObject>
- (void)runTestWithName:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)scrollToTop;
- (NSArray *)recordedImpressions;
- (NSArray *)snapshotImpressions;
- (void)setNeedsUpdateForDocument:(IKDOMDocument *)arg1;
- (void)updateForDocument:(IKDOMDocument *)arg1;
@end
