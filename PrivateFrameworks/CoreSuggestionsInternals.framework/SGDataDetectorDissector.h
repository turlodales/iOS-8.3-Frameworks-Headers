//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SGPipelineDissector.h"

@class NSString;

@interface SGDataDetectorDissector : NSObject <SGPipelineDissector>
{
    long _scannerOptions;
}

+ (BOOL)stringHasDatesOrTimes:(id)arg1;
+ (void)initialize;
- (void)dissect:(id)arg1;
- (id)initWithSigs:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

