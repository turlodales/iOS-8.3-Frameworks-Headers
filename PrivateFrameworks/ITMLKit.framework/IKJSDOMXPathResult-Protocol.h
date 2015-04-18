//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class IKDOMNode, NSString;

@protocol IKJSDOMXPathResult <JSExport>
@property(readonly, nonatomic) int snapshotLength;
@property(readonly, nonatomic) BOOL invalidIteratorState;
@property(readonly, nonatomic) __weak IKDOMNode *singleNodeValue;
@property(readonly, nonatomic) BOOL booleanValue;
@property(readonly, nonatomic) __weak NSString *stringValue;
@property(readonly, nonatomic) int numberValue;
@property(readonly, nonatomic) int resultType;
- (IKDOMNode *)snapshotItem:(int)arg1;
- (IKDOMNode *)iterateNext;
@end

