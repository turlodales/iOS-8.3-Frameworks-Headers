//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, TDDistiller, TDLogger;

@interface TDDistillRunner : NSObject
{
    int _capabilities;
    TDDistiller *_distiller;
    NSURL *_carScratchURL;
    NSURL *_outputURL;
    TDLogger *_logger;
    NSString *_assetStoreVersionString;
    int _assetStoreVersionNumber;
}

@property(retain, nonatomic) TDLogger *logger; // @synthesize logger=_logger;
@property(copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
- (BOOL)runDistillWithDocumentURL:(id)arg1 outputURL:(id)arg2 attemptIncremental:(BOOL)arg3 forceDistill:(BOOL)arg4;
- (void)_removeScratchPath;
- (void)_moveScratchToOutputPath;
@property(copy) NSString *assetStoreVersionString; // @synthesize assetStoreVersionString=_assetStoreVersionString;
@property int assetStoreVersionNumber; // @synthesize assetStoreVersionNumber=_assetStoreVersionNumber;
- (BOOL)_isDistillUnnecessaryForDocument:(id)arg1;
- (id)carScratchURL;
- (void)setDocumentCapabilities:(int)arg1;
- (id)init;
- (void)dealloc;

@end

