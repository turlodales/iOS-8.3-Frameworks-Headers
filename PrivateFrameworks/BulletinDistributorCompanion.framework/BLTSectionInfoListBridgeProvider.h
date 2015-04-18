//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSApplicationWorkspaceObserverProtocol.h"

@class NSDate, NSString;

@interface BLTSectionInfoListBridgeProvider : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    struct _opaque_pthread_mutex_t _lock;
    NSDate *_lastKnownBridgeSettingsChangeDate;
    id <BLTSectionInfoListProviderDelegate> _delegate;
}

- (id)_loadOverridesChangedSince:(id)arg1;
- (void)_reloadUpdatedOverridesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reloadUpdatedOverrides;
- (void)reloadWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <BLTSectionInfoListProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

