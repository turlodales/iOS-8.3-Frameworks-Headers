//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ML3DatabaseFunction : NSObject
{
    NSString *_name;
    int _argumentCount;
}

@property(nonatomic) int argumentCount; // @synthesize argumentCount=_argumentCount;
- (BOOL)registerWithConnection:(id)arg1;
- (id)initWithName:(id)arg1 argumentCount:(int)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end

