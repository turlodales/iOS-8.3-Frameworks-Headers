//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPLAbstractObject.h"

@class CPLEngineStore, CPLPlatformObject, NSString;

@interface CPLEngineStorage : NSObject <CPLAbstractObject>
{
    BOOL _superWasCalled;
    CPLPlatformObject *_platformObject;
    CPLEngineStore *_engineStore;
    NSString *_name;
}

+ (id)platformImplementationProtocol;
- (id)statusDictionary;
- (BOOL)closeWithError:(id *)arg1;
- (BOOL)_checkSuperWasCalled;
- (void)writeTransactionDidSucceed;
- (void)writeTransactionDidFail;
@property(readonly, nonatomic) CPLEngineStore *engineStore; // @synthesize engineStore=_engineStore;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (BOOL)openWithError:(id *)arg1;
- (id)status;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

