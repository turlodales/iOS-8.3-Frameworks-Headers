//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PUTiledLayoutGeneratorScanState : NSObject
{
    BOOL _scannedBatchHasCaption;
    int _scanLocation;
    id _scannedBatchID;
    int _scanSpecialSequenceCount;
}

@property(nonatomic) int scanLocation; // @synthesize scanLocation=_scanLocation;
- (void).cxx_destruct;
@property(nonatomic) int scanSpecialSequenceCount; // @synthesize scanSpecialSequenceCount=_scanSpecialSequenceCount;
@property(nonatomic) BOOL scannedBatchHasCaption; // @synthesize scannedBatchHasCaption=_scannedBatchHasCaption;
@property(retain, nonatomic) id scannedBatchID; // @synthesize scannedBatchID=_scannedBatchID;

@end

