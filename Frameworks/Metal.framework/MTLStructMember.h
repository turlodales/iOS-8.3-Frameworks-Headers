//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MTLStructMember : NSObject
{
    unsigned int _offset:32;
    unsigned int _dataType:16;
    id _details;
    NSString *_name;
}

@property(readonly) unsigned int offset; // @synthesize offset=_offset;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (id)structType;
- (id)arrayType;
- (id)initWithName:(id)arg1 offset:(unsigned int)arg2 dataType:(unsigned int)arg3 details:(id)arg4;
- (id)describe;
@property(readonly) unsigned int dataType; // @synthesize dataType=_dataType;

@end

