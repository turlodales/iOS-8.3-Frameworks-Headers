//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

@class SSURLRequestProperties, SUMescalSession;

@interface SUSetupMescalSessionOperation : ISOperation
{
    SSURLRequestProperties *_requestProperties;
    SUMescalSession *_session;
}

- (id)_setupSAPWithData:(id)arg1 error:(id *)arg2;
- (id)_setupSAPCertificate:(id *)arg1;
- (BOOL)_isMescalEnabled;
- (id)initWithURLRequestProperties:(id)arg1;
@property(readonly) SUMescalSession *mescalSession;
- (void)run;
- (void)dealloc;

@end

