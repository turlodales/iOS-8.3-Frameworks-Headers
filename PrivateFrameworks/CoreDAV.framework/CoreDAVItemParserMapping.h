//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CoreDAVItemParserMapping : NSObject
{
    NSString *_nameSpace;
    NSString *_name;
    Class _parseClass;
}

@property(nonatomic) Class parseClass; // @synthesize parseClass=_parseClass;
@property(retain, nonatomic) NSString *nameSpace; // @synthesize nameSpace=_nameSpace;
- (id)initWithNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)dealloc;

@end
