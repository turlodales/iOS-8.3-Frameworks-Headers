//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OADClient.h"

@class CHDAnchor, NSString;

@interface CHDOfficeArtClient : NSObject <OADClient>
{
    CHDAnchor *mAnchor;
}

- (BOOL)hasBounds;
- (void)setAnchor:(id)arg1;
- (id)anchor;
- (struct CGRect)bounds;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

