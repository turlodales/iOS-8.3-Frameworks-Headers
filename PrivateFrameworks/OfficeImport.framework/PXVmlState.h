//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OAVReadState.h>

@class ESDObject, PBPresentationReaderState;

@interface PXVmlState : OAVReadState
{
    ESDObject *mLegacyTextGlobals;
    PBPresentationReaderState *mLegacyPresentationState;
}

- (id)legacyPresentationState;
- (void)setLegacyPresentationState:(id)arg1;
- (void)setLegacyTextGlobals:(id)arg1;
- (id)legacyTextGlobals;
- (void)dealloc;

@end

