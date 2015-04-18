//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface AFUIDebugLog : NSObject
{
    NSData *_data;
    NSString *_mimeType;
    NSString *_name;
}

+ (id)logWithData:(id)arg1 mimeType:(id)arg2 name:(id)arg3 attemptCompression:(BOOL)arg4;
- (id)initWithData:(id)arg1 mimeType:(id)arg2 name:(id)arg3 attemptCompression:(BOOL)arg4;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;

@end

