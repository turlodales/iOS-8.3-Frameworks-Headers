//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface UIWebOptGroup : NSObject
{
    id <UIWebSelectedItemPrivate> _group;
    NSArray *_options;
    int _offset;
}

@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
@property(retain, nonatomic) id <UIWebSelectedItemPrivate> group; // @synthesize group=_group;
- (id)initWithGroup:(id)arg1 itemOffset:(int)arg2;
@property(readonly, nonatomic) int offset; // @synthesize offset=_offset;
- (void)dealloc;

@end

