//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OCDSummary : NSObject
{
    NSString *mTitle;
    NSString *mAuthor;
    NSString *mKeywords;
    NSString *mComments;
    NSString *mHyperlinkBase;
}

- (id)keywords;
- (void)setKeywords:(id)arg1;
- (id)hyperlinkBase;
- (id)author;
- (void)setHyperlinkBase:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setComments:(id)arg1;
- (id)comments;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)dealloc;

@end

