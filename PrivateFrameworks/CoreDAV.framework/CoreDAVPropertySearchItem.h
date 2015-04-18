//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, NSString;

@interface CoreDAVPropertySearchItem : CoreDAVItem
{
    CoreDAVLeafItem *_prop;
    NSString *_match;
    NSString *_matchTypeAttribute;
}

@property(retain, nonatomic) NSString *match; // @synthesize match=_match;
@property(retain, nonatomic) NSString *matchTypeAttribute; // @synthesize matchTypeAttribute=_matchTypeAttribute;
- (id)initWithSearchPropertyNameSpace:(id)arg1 andName:(id)arg2;
@property(retain, nonatomic) CoreDAVLeafItem *prop; // @synthesize prop=_prop;
- (void)write:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end

