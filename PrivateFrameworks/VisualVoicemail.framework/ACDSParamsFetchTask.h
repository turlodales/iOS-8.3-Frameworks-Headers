//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ACDS/ACDSTask.h>

@interface ACDSParamsFetchTask : ACDSTask
{
}

- (id)taskByCoalescingWithTask:(id)arg1;
- (void)handleResponse:(struct __CFHTTPMessage *)arg1 body:(struct __CFData *)arg2 status:(int)arg3 service:(id)arg4 error:(id *)arg5;
- (int)serviceTaskType;
- (int)priority;
- (void)perform:(CDStruct_618647e5 *)arg1;
- (int)type;
- (id)name;

@end

