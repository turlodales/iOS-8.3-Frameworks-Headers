//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SSURLRequestProperties;

@interface SUNavigationHistoryItem : NSObject <NSCopying>
{
    NSString *_title;
    SSURLRequestProperties *_urlRequestProperties;
}

@property(readonly, nonatomic) SSURLRequestProperties *URLRequestProperties; // @synthesize URLRequestProperties=_urlRequestProperties;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (void)dealloc;

@end

