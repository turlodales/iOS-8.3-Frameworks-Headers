//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class NSArray, NSString;

@protocol SGIntervalTreeProtocol <JSExport>
- (NSArray *)query:(unsigned int)arg1 end:(unsigned int)arg2;
- (void)remove:(NSString *)arg1;
- (void)store:(unsigned int)arg1 end:(unsigned int)arg2 key:(NSString *)arg3;
- (id)init;

@optional
- (NSArray *)query:(unsigned int)arg1 end:(unsigned int)arg2 __JS_EXPORT_AS__query:(id)arg3;
- (void)store:(unsigned int)arg1 end:(unsigned int)arg2 key:(NSString *)arg3 __JS_EXPORT_AS__store:(id)arg4;
@end

