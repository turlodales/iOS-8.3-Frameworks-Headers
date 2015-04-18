//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SLSystemConfigManager : NSObject
{
    void *_prefs;
    BOOL _notifyForExternalChangeOnly;
    int _applySkipCount;
    NSString *_serviceType;
}

+ (id)sharedInstanceForServiceType:(id)arg1;
+ (id)sharedInstanceForCallbackWhileLocked:(void *)arg1;
- (void)_refresh;
- (void)_setValue:(void *)arg1 forKey:(id)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)cachedUsername;
- (void)setCachedUsername:(id)arg1;
- (void)_tearDown;
- (void)_setCallback:(CDUnknownFunctionPointerType)arg1 withContext:(CDStruct_304912e7 *)arg2;
- (void)_synchronize;
- (void *)_getValueForKey:(id)arg1;
- (void)_initializeSystemConfigPrefs:(id)arg1;
- (void)_keepAlive;
- (void)_notifyTarget:(unsigned int)arg1;
- (id)initWithServiceType:(id)arg1;

@end

