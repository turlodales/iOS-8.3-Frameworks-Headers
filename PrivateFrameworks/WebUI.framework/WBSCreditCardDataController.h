//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMapTable;

@interface WBSCreditCardDataController : NSObject
{
    NSMapTable *_creditCardDataKeychainReferences;
}

+ (BOOL)hasCreditCardData;
- (BOOL)isCreditCardDataSaved:(id)arg1;
- (void)removeCreditCardData:(id)arg1;
- (void)invalidateCreditCardData;
- (id)_neverSavedCreditCardSuffixFromCard:(id)arg1;
- (void)saveCreditCardData:(id)arg1;
- (BOOL)shouldAddCardWithNumber:(id)arg1;
- (void)_removeNeverSaveCreditCardData:(id)arg1;
- (void)creditCardDataDidChange;
- (id)defaultNameForCardOfType:(unsigned int)arg1 cardholderName:(id)arg2;
- (id)_uniqueCardNameForCardName:(id)arg1;
- (BOOL)shouldNeverSaveCardWithNumber:(id)arg1;
- (id)_neverSavedCreditCardSuffixFromCardNumber:(id)arg1;
- (id)savableCreditCardDataInForm:(id)arg1;
- (void)neverSaveCreditCardData:(id)arg1;
- (void)saveCreditCardDataIfAllowed:(id)arg1;
- (void)replaceCreditCardData:(id)arg1 withCard:(id)arg2;
- (id)existingCardWithNumber:(id)arg1;
@property(readonly, nonatomic) NSArray *creditCardData;
- (void)clearCreditCardData;
- (void).cxx_destruct;
- (id)init;

@end
