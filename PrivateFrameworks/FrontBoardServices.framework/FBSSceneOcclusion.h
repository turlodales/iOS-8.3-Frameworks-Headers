//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"

@class NSString;

@interface FBSSceneOcclusion : NSObject <BSXPCCoding>
{
    struct CGRect _rect;
}

+ (id)fullOcclusion;
+ (id)occlusionWithRect:(struct CGRect)arg1;
- (BOOL)isEqualToOcclusion:(id)arg1;
- (id)_initWithCGRect:(struct CGRect)arg1;
- (struct CGRect)CGRect;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

