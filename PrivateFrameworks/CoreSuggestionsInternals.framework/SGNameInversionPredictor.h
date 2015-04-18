//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface SGNameInversionPredictor : NSObject
{
    struct __CFDictionary *_tradToTrie;
    NSDictionary *_tradToInversionRate;
    double _confidenceThreshold;
}

+ (BOOL)shouldInvertFirst:(id)arg1 last:(id)arg2;
+ (id)sharedInstance;
- (double)firstNameLikelihood:(id)arg1 underNamingTradition:(id)arg2 default:(double)arg3;
- (double)inversionRateForNamingTradition:(id)arg1;
- (float)decodeTriePayload:(unsigned int)arg1;
- (struct _CFBurstTrie *)trieForNamingTradition:(id)arg1;
- (BOOL)shouldInvertFirst:(id)arg1 last:(id)arg2 underNamingTradition:(id)arg3;
- (BOOL)shouldInvertFirst:(id)arg1 last:(id)arg2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

