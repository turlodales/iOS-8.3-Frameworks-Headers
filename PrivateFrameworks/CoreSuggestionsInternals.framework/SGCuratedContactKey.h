//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SGEntityKey.h"

@class NSString, SGIdentityKey;

@interface SGCuratedContactKey : NSObject <SGEntityKey>
{
    SGIdentityKey *_identityKey;
}

+ (BOOL)isSupportedEntityType:(long long)arg1;
@property(readonly, nonatomic) SGIdentityKey *identityKey; // @synthesize identityKey=_identityKey;
- (id)initWithExternalId:(int)arg1;
- (BOOL)isEqualToCuratedContactKey:(id)arg1;
- (id)serialize;
- (id)initWithSerialized:(id)arg1;
- (id)initWithIdentityKey:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

