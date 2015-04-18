//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface VMUProcInfo : NSObject
{
    unsigned int _task;
    BOOL _needTaskPortDealloc;
    NSString *_name;
    NSArray *_arguments;
    NSArray *_envVars;
    NSString *_procTableName;
    NSString *_realAppName;
    NSString *_requestedAppName;
    NSString *_firstArg;
    int _pid;
    int _ppid;
    struct timeval _startTime;
}

+ (int)processParentId:(int)arg1;
+ (BOOL)isProcessRunning:(int)arg1;
+ (id)getProcessIds;
- (void)finalize;
- (int)compareByUserAppName:(id)arg1;
- (int)compareByName:(id)arg1;
- (BOOL)signal:(int)arg1;
- (BOOL)isNative;
- (BOOL)isMachO;
- (int)ppid;
- (id)valueForEnvVar:(id)arg1;
- (BOOL)isCFM;
- (id)requestedAppName;
- (id)firstArgument;
- (id)envVars;
- (id)procTableName;
- (id)_infoFromCommandLine:(int)arg1;
- (id)userAppName;
- (id)realAppName;
- (BOOL)isApp;
- (int)cpuType;
- (id)arguments;
- (id)initWithPid:(int)arg1;
- (int)pid;
- (unsigned int)task;
- (struct timeval)startTime;
- (BOOL)isRunning;
- (void)update;
- (int)compare:(id)arg1;
- (id)name;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)terminate;
- (id)initWithTask:(unsigned int)arg1;

@end

