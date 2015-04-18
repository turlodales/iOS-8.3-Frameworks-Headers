//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFReader.h"

@class EMFPlayer, NSString;

@interface EMFReader : NSObject <MFReader>
{
    EMFPlayer *m_player;
}

- (int)play:(id)arg1;
- (oneway void)release;
- (id)initWithEMFPlayer:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

