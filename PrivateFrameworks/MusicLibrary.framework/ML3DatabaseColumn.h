//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ML3DatabaseColumn : NSObject
{
    NSString *_name;
    unsigned int _datatype;
    unsigned int _columnConstraints;
    id _defaultValue;
}

+ (id)columnWithName:(id)arg1 datatype:(unsigned int)arg2 constraints:(unsigned int)arg3 defaultValue:(id)arg4;
@property(readonly, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(readonly, nonatomic) unsigned int columnConstraints; // @synthesize columnConstraints=_columnConstraints;
@property(readonly, nonatomic) unsigned int datatype; // @synthesize datatype=_datatype;
- (id)_columnDefinitionSQL;
- (id)initWithName:(id)arg1 datatype:(unsigned int)arg2 constraints:(unsigned int)arg3 defaultValue:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;

@end

