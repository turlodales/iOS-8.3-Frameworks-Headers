//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import "BRCOperationSubclass.h"

@class BRCPrivateServerZone, NSString;

@interface BRCZonePurgeOperation : _BRCOperation <BRCOperationSubclass>
{
    BRCPrivateServerZone *_serverZone;
}

- (id)initWithServerZone:(id)arg1;
- (BOOL)shouldRetryForError:(id)arg1;
- (void).cxx_destruct;
- (void)main;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

